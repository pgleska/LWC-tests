#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cstring>
#include <fstream>
#include <string>
#include <sstream>

#include "tiny_jambu.h"
#include "combinations.h"

#define NUMBER_OF_TESTS 1

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

using namespace std;

void print_binary_bytes(uint8_t* bytes);
void print_binary(uint8_t number);
void generate_input(uint8_t* input);
void convert(uint8_t* cipher_text, uint8_t matrix[][64], int row);

int main() {
    srand(time(NULL));       

    for(int iterator = 0; iterator < 65536; iterator++) {
        if(iterator % 500 == 0) cout << iterator << endl;    
        uint8_t input_text_1[8], input_text_2[8], input_text_3[8], input_text_4[8], input_text_5[8], input_text_6[8];
        uint8_t matrix[65][64];

        for(int i = 0; i < 65; i++) {
            for(int j = 0; j < 64; j++) {
                matrix[i][j] = 0;
            }
        }
        
        uint8_t cipher_text[16];
        for(int i = 0; i < 16; i++) cipher_text[i] = 0;

        generate_input(input_text_1);
        generate_input(input_text_2);
        generate_input(input_text_3);
        generate_input(input_text_4);
        generate_input(input_text_5);
        generate_input(input_text_6);

        f_empty(cipher_text);    
        convert(cipher_text, matrix, 0);
        

        f_1(input_text_1, cipher_text);
        convert(cipher_text, matrix, 1);
        
        f_2(input_text_2, cipher_text);
        convert(cipher_text, matrix, 2);
        
        f_3(input_text_3, cipher_text);
        convert(cipher_text, matrix, 3);
        
        f_4(input_text_4, cipher_text);
        convert(cipher_text, matrix, 4);
        
        f_5(input_text_5, cipher_text);
        convert(cipher_text, matrix, 5);
        
        f_6(input_text_6, cipher_text);
        convert(cipher_text, matrix, 6);
        

        f_1_2(input_text_1, input_text_2, cipher_text);
        convert(cipher_text, matrix, 7);
        
        f_1_3(input_text_1, input_text_3, cipher_text);
        convert(cipher_text, matrix, 8);
        
        f_1_4(input_text_1, input_text_4, cipher_text);
        convert(cipher_text, matrix, 9);
        
        f_1_5(input_text_1, input_text_5, cipher_text);
        convert(cipher_text, matrix, 10);
        
        f_1_6(input_text_1, input_text_6, cipher_text);
        convert(cipher_text, matrix, 11);
        
        f_2_3(input_text_2, input_text_3, cipher_text);
        convert(cipher_text, matrix, 12);
        
        f_2_4(input_text_2, input_text_4, cipher_text);
        convert(cipher_text, matrix, 13);
        
        f_2_5(input_text_2, input_text_5, cipher_text);
        convert(cipher_text, matrix, 14);
        
        f_2_6(input_text_2, input_text_6, cipher_text);
        convert(cipher_text, matrix, 15);
        
        f_3_4(input_text_3, input_text_4, cipher_text);
        convert(cipher_text, matrix, 16);
        
        f_3_5(input_text_3, input_text_5, cipher_text);
        convert(cipher_text, matrix, 17);
        
        f_3_6(input_text_3, input_text_6, cipher_text);
        convert(cipher_text, matrix, 18);
        
        f_4_5(input_text_4, input_text_5, cipher_text);
        convert(cipher_text, matrix, 19);
        
        f_4_6(input_text_4, input_text_6, cipher_text);
        convert(cipher_text, matrix, 20);
        
        f_5_6(input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 21);
        

        f_1_2_3(input_text_1, input_text_2, input_text_3, cipher_text);
        convert(cipher_text, matrix, 22);
        
        f_1_2_4(input_text_1, input_text_2, input_text_4, cipher_text);
        convert(cipher_text, matrix, 23);
        
        f_1_2_5(input_text_1, input_text_2, input_text_5, cipher_text);
        convert(cipher_text, matrix, 24);
        
        f_1_2_6(input_text_1, input_text_2, input_text_6, cipher_text);
        convert(cipher_text, matrix, 25);
        
        f_1_3_4(input_text_1, input_text_3, input_text_4, cipher_text);
        convert(cipher_text, matrix, 26);
        
        f_1_3_5(input_text_1, input_text_3, input_text_5, cipher_text);
        convert(cipher_text, matrix, 27);
        
        f_1_3_6(input_text_1, input_text_3, input_text_6, cipher_text);
        convert(cipher_text, matrix, 28);
        
        f_1_4_5(input_text_1, input_text_4, input_text_5, cipher_text);
        convert(cipher_text, matrix, 29);
        
        f_1_4_6(input_text_1, input_text_4, input_text_6, cipher_text);
        convert(cipher_text, matrix, 30);
        
        f_1_5_6(input_text_1, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 31);
        
        f_2_3_4(input_text_2, input_text_3, input_text_4, cipher_text);
        convert(cipher_text, matrix, 32);
        
        f_2_3_5(input_text_2, input_text_3, input_text_5, cipher_text);
        convert(cipher_text, matrix, 33);
        
        f_2_3_6(input_text_2, input_text_3, input_text_6, cipher_text);
        convert(cipher_text, matrix, 34);
        
        f_2_4_5(input_text_2, input_text_4, input_text_5, cipher_text);
        convert(cipher_text, matrix, 35);
        
        f_2_4_6(input_text_2, input_text_4, input_text_6, cipher_text);
        convert(cipher_text, matrix, 36);
        
        f_2_5_6(input_text_2, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 37);
        
        f_3_4_5(input_text_3, input_text_4, input_text_5, cipher_text);
        convert(cipher_text, matrix, 38);
        
        f_3_4_6(input_text_3, input_text_4, input_text_6, cipher_text);
        convert(cipher_text, matrix, 39);
        
        f_3_5_6(input_text_3, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 40);
        
        f_4_5_6(input_text_4, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 41);
        

        f_1_2_3_4(input_text_1, input_text_2, input_text_3, input_text_4, cipher_text);
        convert(cipher_text, matrix, 42);
        
        f_1_2_3_5(input_text_1, input_text_2, input_text_3, input_text_5, cipher_text);
        convert(cipher_text, matrix, 43);
        
        f_1_2_3_6(input_text_1, input_text_2, input_text_3, input_text_6, cipher_text);
        convert(cipher_text, matrix, 44);
        
        f_1_2_4_5(input_text_1, input_text_2, input_text_4, input_text_5, cipher_text);
        convert(cipher_text, matrix, 45);
        
        f_1_2_4_6(input_text_1, input_text_2, input_text_4, input_text_6, cipher_text);
        convert(cipher_text, matrix, 46);
        
        f_1_2_5_6(input_text_1, input_text_2, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 47);
        
        f_1_3_4_5(input_text_1, input_text_3, input_text_4, input_text_5, cipher_text);
        convert(cipher_text, matrix, 48);
        
        f_1_3_4_6(input_text_1, input_text_3, input_text_4, input_text_6, cipher_text);
        convert(cipher_text, matrix, 49);
        
        f_1_3_5_6(input_text_1, input_text_3, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 50);
        
        f_1_4_5_6(input_text_1, input_text_4, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 51);
        
        f_2_3_4_5(input_text_2, input_text_3, input_text_4, input_text_5, cipher_text);
        convert(cipher_text, matrix, 52);
        
        f_2_3_4_6(input_text_2, input_text_3, input_text_4, input_text_6, cipher_text);
        convert(cipher_text, matrix, 53);
        
        f_2_3_5_6(input_text_2, input_text_3, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 54);
        
        f_2_4_5_6(input_text_2, input_text_4, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 55);
        
        f_3_4_5_6(input_text_3, input_text_4, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 56);
        

        f_1_2_3_4_5(input_text_1, input_text_2, input_text_3, input_text_4, input_text_5, cipher_text);
        convert(cipher_text, matrix, 57);
        f_1_2_3_4_6(input_text_1, input_text_2, input_text_3, input_text_4, input_text_6, cipher_text);
        convert(cipher_text, matrix, 58);
        f_1_2_3_5_6(input_text_1, input_text_2, input_text_3, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 59);
        f_1_2_4_5_6(input_text_1, input_text_2, input_text_4, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 60);
        f_1_3_4_5_6(input_text_1, input_text_3, input_text_4, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 61);
        f_2_3_4_5_6(input_text_2, input_text_3, input_text_4, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 62);

        f_1_2_3_4_5_6(input_text_1, input_text_2, input_text_3, input_text_4, input_text_5, input_text_6, cipher_text);
        convert(cipher_text, matrix, 63);

        ofstream file;
        string file_name = "matrixes-xoodyak/test" + patch::to_string(iterator) + ".txt";        
        file.open(file_name);
        for(int i = 1; i < 65; i++) {
            for(int j = 0; j < 64; j++) {
                int x = matrix[i][j];
                file << x << " ";
            }
            file << endl;
        }
        file.close();
    }

    cout << "The end!" << endl;
    return 0;
}

void convert(uint8_t* cipher_text, uint8_t matrix[][64], int row) {
    uint8_t cell, a[8], temp[64];
    for(int i = 0; i < 64; i++) temp[i] = 0;
    int x, shift = 0;
    for(int i = 0; i < 8; i++, shift += 8) {
        cell = cipher_text[i];        
        for(x = 0; x < 8; x++) a[x] = 0;
        for (x = 0; cell > 0; x++) {
            a[x] = cell % 2;
            cell = cell / 2;            
        }        
        for(x = 0; x < 8; x++) {            
            temp[shift+x] = a[x];
        }        
    }
    for(int i = 0; i < 64; i++) {
        matrix[row+1][63-i] = temp[i];
    }    
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

void generate_input(uint8_t* input) {    
    for(int i = 0; i < 8; i++) {
        input[i] = rand() % 256;    
    }
    // print_binary_bytes(input);
}