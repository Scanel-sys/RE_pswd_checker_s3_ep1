#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include <iostream>


struct Wagon
{
    short int svet;
    struct Wagon* prevWagon;
    struct Wagon* nextWagon;
};


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

void print_line(int number, const char* additional=NULL);

int CRC_8(unsigned char* data, int length);

std::string get_code();
