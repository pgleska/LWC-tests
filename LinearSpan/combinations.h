#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cstring>

void f_empty(uint8_t* cipher_text);

void f_1(uint8_t* input_text, uint8_t* cipher_text);
void f_2(uint8_t* input_text, uint8_t* cipher_text);
void f_3(uint8_t* input_text, uint8_t* cipher_text);
void f_4(uint8_t* input_text, uint8_t* cipher_text);
void f_5(uint8_t* input_text, uint8_t* cipher_text);
void f_6(uint8_t* input_text, uint8_t* cipher_text);

void f_1_2(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_1_3(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_1_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_1_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_1_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_2_3(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_2_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_2_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_2_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_3_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_3_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_3_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);
void f_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* cipher_text);

void f_1_2_3(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_2_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_2_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_2_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_3_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_3_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_3_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_1_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_2_3_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_2_3_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_2_3_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_2_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_2_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_2_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_3_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_3_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_3_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);
void f_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* cipher_text);

void f_1_2_3_4(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_2_3_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_2_3_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_2_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_2_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_2_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_3_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_3_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_3_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_1_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_2_3_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_2_3_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_2_3_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_2_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);
void f_3_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* cipher_text);

void f_1_2_3_4_5(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text);
void f_1_2_3_4_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text);
void f_1_2_3_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text);
void f_1_2_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text);
void f_1_3_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text);
void f_2_3_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* cipher_text);

void f_1_2_3_4_5_6(uint8_t* input_text_1, uint8_t* input_text_2, uint8_t* input_text_3, uint8_t* input_text_4, uint8_t* input_text_5, uint8_t* input_text_6, uint8_t* cipher_text);

void encrypt(uint8_t* plain_text, uint8_t* cipher_text);