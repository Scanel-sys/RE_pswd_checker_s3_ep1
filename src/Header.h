#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <conio.h>
#include <cstring>
#include <iostream>

#define JUNK \
__asm push eax \
__asm xor eax, eax \
__asm setpo al \
__asm push edx \
__asm xor edx, eax \
__asm sal edx, 2 \
__asm pop edx \
__asm or eax, ecx \
__asm pop eax


uint32_t left_rotate(uint32_t n, int b);
char* md5(unsigned char* input, size_t input_length);

typedef unsigned char* PUCHAR;


struct Wagon
{
    short int svet;
    struct Wagon* prevWagon;
    struct Wagon* nextWagon;
};



bool checkOutsideVisitor();

bool visitNTGFlags();

int CheckHardwareBreakpoints();

bool checkSLDT();

int CheckPEB();

inline void antidebug();

inline void antidebug1();

inline void antidebug2();

struct Wagon* Walloc(void);

struct Wagon* createWagon(struct Wagon* newWagon, struct Wagon* actWagon, char isNextWagonNew, unsigned long long* x);

struct Wagon* createNWagons(struct Wagon* actWagon, char isNextWagonNew, int N, unsigned long long* x);

void tieWagons(struct Wagon* leftestWagon, struct Wagon* rightestWagon);

short int getSvet(unsigned long long* x);

int trainSize(struct Wagon* tempWagon);

void trainInit(struct Wagon* lst_wagon, struct Wagon* rst_wagon, unsigned long long* x);

void clearscr(void);

int launch_wagon_wheels();

bool if_file_exists(const std::string& fl_name);

bool check_password(std::string& input_str);

bool check_password2(std::string& input_str);

bool check_password3(std::string& input_str);

int get_checksum(std::string& input_str);

bool hello_Roma(std::string& input_str);

void putout_serial();

void print_line(int number, const char* additional = NULL);

bool if_ware();

bool if_box();

bool if_parall();

int WriteMe(void* addr, unsigned int *wb, int size);

int CRC_8_func(PUCHAR data, int length);




bool compare_md5(const char * expected_result, const char * counted_result);

std::string get_code();

