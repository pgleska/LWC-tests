#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cstring>

#include "tiny_jambu.h"

#define NUMBER_OF_TESTS 1

using namespace std;

void SAC_test();
void print_binary_bytes(uint8_t* bytes);
void print_binary(uint8_t number);
int calculate_ones(uint8_t input);
int calculate_Hamming_distance(uint8_t output1, uint8_t output2);
void generate_input(uint8_t* input);
void encrypt(uint8_t* plain_text, uint8_t* cipher_text);
void demo();

int main() {
    srand(time(NULL));       
    
    SAC_test();    

    cout << "The end!" << endl;
    return 0;
}

void SAC_test() {
    int Hamming_distances[64];
    for(int i = 0; i < 64; i++) {
        Hamming_distances[i] = 0;
    }

    uint32_t total_number_of_tests = 0;
    for(int i = 0; i < NUMBER_OF_TESTS; i++) {
        uint8_t input[8], XORed_input[8];
        //
        // adopt length to verification TAG
        uint8_t cipher_text[16], XORed_cipher_text[16];


        generate_input(input);        
        encrypt(input, cipher_text);
        for(uint8_t j = 0; j < 8; j++) {
            for(uint8_t k = 128; k > 0; k /= 2) {
                for(int x = 0; x < 8; x++) XORed_input[x] = input[x];
                XORed_input[j] = input[j] ^ k;
                // print_binary_bytes(input);
                // print_binary_bytes(XORed_input);
                // printf("----------------------------------------------------------------------------\n");
                encrypt(XORed_input, XORed_cipher_text);
                int Hamming_distance = 0;
                for(uint8_t l = 0; l < 8; l++) {
                    Hamming_distance += calculate_Hamming_distance(cipher_text[l], XORed_cipher_text[l]);
                }                
                Hamming_distances[Hamming_distance - 1] += 1;
                total_number_of_tests += 1;
            }
        }
    }
    for(int i = 0; i < 64; i++) {
        if(Hamming_distances[i] != 0) {
            cout << i - 1 << ": " << Hamming_distances[i] << endl;
        }
    }
    cout << "Total number of tests: " << total_number_of_tests << endl;
}

void print_binary_bytes(uint8_t* bytes) {
    for(int i = 0; i < 8; i++) {
        print_binary(bytes[i]);
        printf(" ");    
    }
    printf("\n");
}

void print_binary(uint8_t number) {
    int a[8], i;
    for(int x = 0; x < 8; x++) a[x] = 0;
    for (i = 0; number > 0; i++) {
        a[i] = number % 2;
        number = number / 2;
    }
    for(i = 7; i >= 0; i--) 
    {
        printf("%d", a[i]);
    }
}

int calculate_ones(uint8_t input) {
    int counter = 0;
    while(input > 0) {
        if (input & 1 != 0) {
            counter++;
            input -= 1;
        } else {
            input >>= 1;
        }
    }
    return counter;
}

int calculate_Hamming_distance(uint8_t output1, uint8_t output2) {
    uint8_t intermediate = output1 ^ output2;
    return calculate_ones(intermediate);
}

void generate_input(uint8_t* input) {    
    for(int i = 0; i < 8; i++) {
        input[i] = rand() % 256;
    }
}

void encrypt(uint8_t* plain_text, uint8_t* cipher_text) {
    unsigned char key[16] = {    84, 101, 115, 116,
                                 64,  49,  50,  51,
                                116,  51,  54,  63,
                                 69,  88, 100,  49};
    unsigned char nonce[12] = {  84, 101, 115, 116,
                                 64,  49,  50,  51,
                                116,  51,  54,  63};    
    unsigned long long clen, dlen;
    unsigned long long mlen = strlen((char*)plain_text);
    crypto_aead_encrypt(cipher_text, &clen, plain_text, mlen, NULL, 0, NULL, nonce, key);
    
    // unsigned char decoded_text[24];
    // int result = crypto_aead_decrypt(decoded_text, &dlen, cipher_text, clen, NULL, 0, NULL, nonce, key);    
    // if(result == 0) {
    //     cout << "Success decrypted!!!" << endl;        
    // }  else {
    //     cout << "Incorrect MAC - cipher discarded!!!" << endl;
    // }
}

void demo() {
    unsigned long long clen, dlen;
    unsigned char plain_text[100], decoded_text[100], cipher_text[100];
    unsigned char key[16] = {    84, 101, 115, 116,
                                 64,  49,  50,  51,
                                116,  51,  54,  63,
                                 69,  88, 100,  49};

    unsigned char nonce[12] = {  84, 101, 115, 116,
                                 64,  49,  50,  51,
                                116,  51,  54,  63};

    unsigned long long adlen = 0L, mlen;
    strncpy((char*)plain_text, "Lubie placki", 100);
    mlen = strlen((char*)plain_text);

    cout << "Message: " << plain_text << " length: " << mlen << endl;

    crypto_aead_encrypt(cipher_text, &clen, plain_text, mlen, NULL, 0, NULL, nonce, key);

    cout << "Success encrypted!!!" << endl;

    int result = crypto_aead_decrypt(decoded_text, &dlen, cipher_text, clen, NULL, 0, NULL, nonce, key);
    if(result == 0) {
        cout << "Success decrypted!!!" << endl;
        cout << "Plain text:" << decoded_text << " length: " << dlen << endl;
    }  else {
        cout << "Incorrect MAC - cipher discarded!!!" << endl;
    } 
}