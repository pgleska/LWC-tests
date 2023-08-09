#include "combinations.h"
#include "tiny_jambu.h"

void f_empty(uint8_t* cipher_text) {
    uint8_t input_text[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    encrypt(input_text, cipher_text);
}

void f_1(uint8_t* input_text, uint8_t* cipher_text) {
    encrypt(input_text, cipher_text);
}
void f_2(uint8_t* input_text, uint8_t* cipher_text) {
    f_1(input_text, cipher_text);
}
void f_3(uint8_t* input_text, uint8_t* cipher_text) {
    f_1(input_text, cipher_text);
}
void f_4(uint8_t* input_text, uint8_t* cipher_text) {
    f_1(input_text, cipher_text);
}
void f_5(uint8_t* input_text, uint8_t* cipher_text) {
    f_1(input_text, cipher_text);
}
void f_6(uint8_t* input_text, uint8_t* cipher_text) {
    f_1(input_text, cipher_text);
}

void f_1_2(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    uint8_t plain_text[8] = {0, 0, 0, 0, 0, 0, 0, 0}; 
    for(int i = 0; i < 8; i++) {
        plain_text[i] = input_text_1[i] ^ input_text_2[i];
    }
    encrypt(plain_text, cipher_text);
}
void f_1_3(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_1_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_1_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_1_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_2_3(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_2_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_2_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_2_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_3_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_3_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_3_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}
void f_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text) {
    f_1_2(input_text_1, input_text_2, cipher_text);
}

void f_1_2_3(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    uint8_t plain_text[8] = {0, 0, 0, 0, 0, 0, 0, 0}; 
    for(int i = 0; i < 8; i++) {
        plain_text[i] = input_text_1[i] ^ input_text_2[i] ^ input_text_3[i];
    }
    encrypt(plain_text, cipher_text);
}
void f_1_2_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_1_2_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_1_2_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_1_3_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_1_3_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_1_3_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_1_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_1_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_1_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_2_3_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_2_3_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_2_3_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_2_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_2_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_2_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_3_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_3_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_3_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}
void f_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text) {
    f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
}

void f_1_2_3_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    uint8_t plain_text[8] = {0, 0, 0, 0, 0, 0, 0, 0}; 
    for(int i = 0; i < 8; i++) {
        plain_text[i] = input_text_1[i] ^ input_text_2[i] ^ input_text_3[i] ^ input_text_4[i];
    }
    encrypt(plain_text, cipher_text);
}
void f_1_2_3_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_1_2_3_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_1_2_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_1_2_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_1_2_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_1_3_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_1_3_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_1_3_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_1_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_2_3_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_2_3_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_2_3_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_2_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}
void f_3_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text) {
    f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
}

void f_1_2_3_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text) {    
    uint8_t plain_text[8] = {0, 0, 0, 0, 0, 0, 0, 0}; 
    for(int i = 0; i < 8; i++) {
        plain_text[i] = input_text_1[i] ^ input_text_2[i] ^ input_text_3[i] ^ input_text_4[i] ^ input_text_5[i];
    }
    encrypt(plain_text, cipher_text);
}
void f_1_2_3_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text) {
    f_1_2_3_4_5(input_text_1, input_text_2, input_text_3, input_text_4, input_text_5, cipher_text);
}
void f_1_2_3_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text) {
    f_1_2_3_4_5(input_text_1, input_text_2, input_text_3, input_text_4, input_text_5, cipher_text);
}
void f_1_2_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text) {
    f_1_2_3_4_5(input_text_1, input_text_2, input_text_3, input_text_4, input_text_5, cipher_text);
}
void f_1_3_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text) {
    f_1_2_3_4_5(input_text_1, input_text_2, input_text_3, input_text_4, input_text_5, cipher_text);
}
void f_2_3_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text) {
    f_1_2_3_4_5(input_text_1, input_text_2, input_text_3, input_text_4, input_text_5, cipher_text);
}

void f_1_2_3_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* input_text_6, uint8_t* cipher_text) {
    uint8_t plain_text[8] = {0, 0, 0, 0, 0, 0, 0, 0}; 
    for(int i = 0; i < 8; i++) {
        plain_text[i] = input_text_1[i] ^ input_text_2[i] ^ input_text_3[i] ^ input_text_4[i] ^ input_text_5[i] ^ input_text_6[i];
    }
    encrypt(plain_text, cipher_text);
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