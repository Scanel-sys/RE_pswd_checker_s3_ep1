#include "Header.h"


struct trsh_data
{
    unsigned char data[1][278] = { { 0x6c, 0x5c, 0x4d, 0x4c, 0x37, 0x2e, 0x30, 0x27, 0x64, 0x7f, 0x66, 0x06, 0x2b, 0x2a, 0x2f, 0x38, 0x3f, 0x6d, 0x29, 0x3d, 0x31, 0x3f, 0x26, 0x36, 0x30, 0x14, 0x35, 0x34, 0x3d, 0x2a, 0x29, 0x7b, 0x38, 0x38, 0x30, 0x36, 0x05, 0x05, 0x52, 0x1f, 0x44, 0x26, 0x14, 0x02, 0x09, 0x1d, 0x0f, 0x4b, 0x02, 0x08, 0x19, 0x4f, 0x07, 0x10, 0x15, 0x00, 0x54, 0x01, 0x19, 0x57, 0x0c, 0x11, 0x1f, 0x5b, 0x10, 0x18, 0x18, 0x0b, 0xb1, 0xfd, 0xa2, 0xc0, 0xf6, 0xe0, 0xe7, 0xf3, 0xed, 0xa9, 0xe4, 0xee, 0xfb, 0xad, 0xf9, 0xee, 0xf7, 0xe2, 0xb2, 0xe7, 0xfb, 0xb5, 0xe2, 0xff, 0xfd, 0xb9, 0xe8, 0xf2, 0xfb, 0xf5, 0xea, 0xad, 0xdc, 0x81, 0xf6, 0xca, 0xc1, 0x85, 0xc3, 0xc9, 0xcc, 0xda, 0x8a, 0xc4, 0xca, 0x8d, 0xda, 0xc7, 0xd5, 0x91, 0xc6, 0xc1, 0xd5, 0xdc, 0xd8, 0x97, 0xd9, 0xd7, 0xde, 0x9b, 0xd9, 0xc5, 0xd7, 0xcb, 0xa8, 0xae, 0xb5, 0xe3, 0xa9, 0xa4, 0xa8, 0xbe, 0xe8, 0xbe, 0xab, 0xac, 0xa3, 0xa3, 0xbd, 0xef, 0xa7, 0xb0, 0xbc, 0xbd, 0xb5, 0xf5, 0xb5, 0xa5, 0xbd, 0xb8, 0xae, 0xbe, 0xfc, 0xe7, 0xfe, 0x88, 0x81, 0x86, 0x8d, 0x8d, 0x97, 0xc5, 0x87, 0x83, 0x8c, 0x8c, 0x8e, 0xcb, 0x98, 0x82, 0xce, 0x9b, 0x98, 0x94, 0xd2, 0x9f, 0x91, 0x93, 0x82, 0xd7, 0xc2, 0xd9, 0xad, 0x9a, 0x9b, 0x92, 0x90, 0x8c, 0x20, 0x60, 0x66, 0x67, 0x61, 0x61, 0x26, 0x73, 0x67, 0x29, 0x7e, 0x63, 0x69, 0x2d, 0x7c, 0x66, 0x77, 0x79, 0x66, 0x33, 0x2e, 0x35, 0x5a, 0x72, 0x76, 0x7e, 0x6e, 0x73, 0x3c, 0x72, 0x78, 0x3f, 0x54, 0x49, 0x47, 0x03, 0x50, 0x57, 0x47, 0x4e, 0x46, 0x09, 0x10, 0x0b, 0x0, 0x59, 0x88, 0xdb, 0xbb, 0x89, 0x89, 0xdb, 0x9c, 0x3d, 0xed, 0xba, 0xdf, 0xeb, 0xec, 0xbe, 0xfa, 0x5a, 0x72, 0x76, 0x7e, 0x6e, 0x73, 0x3c, 0x72, 0x78, 0x3f, 0x5c, 0x4d, 0x4c, 0x37, 0x2e, 0x30, 0x27, 0x64, 0x7f, 0x66, 0x06} };
    int array[11] = { 0, 11, 25, 38, 68, 99, 132, 163, 190, 218 };
};

struct trsh_data object {};


bool if_file_exists(const std::string& fl_name)
{
	struct stat buffer;
	return (stat(fl_name.c_str(), &buffer) == 0);
}

bool check_password(std::string &input_str)
{
    int y = 0;
    std::string temp;
    temp = "qwer" + input_str;
    for (auto p : temp)
    {
        unsigned char c = p ^ object.data[0][object.array[9] + 5 + y % 21];
        temp[y++] = c;
    }
	return false;
}

bool check_password2(std::string& input_str)
{
    unsigned int y = 0;
    std::string temp;
    temp = "qwef" + input_str;
    for (auto p : temp)
    {
        unsigned char c = p ^ object.data[0][object.array[9] + 19 + y % 22];
        temp[y++] = c;
    }
    return check_password3(temp);
}

bool check_password3(std::string& input_str)
{
    for (int i = 0; i < input_str.size() - 4; i++)
        if (input_str[i + 4] > input_str[i + 5])
            return false;
    return true;
}

bool hello_Roma(std::string& input_str)
{
    int y = 0;
    std::string temp;
    temp = "qwer" + input_str;
    for (auto p : temp)
    {
        unsigned char c = p ^ object.data[0][object.array[9] + 27 + y % 22];
        c = c ^ object.data[0][object.array[9] + 27 + y % 22] ^ object.data[0][object.array[9] + 19 + y % 22];
        temp[y++] = c;
    }
    if (check_password3(temp))
    {
        if (get_checksum(temp) == 1)
            return false;
        return true;
    }
    else
        return false;
}


int get_checksum(std::string& input_str)
{
    int sum = 0;
    for (int i = 0; i < input_str.size() - 4; i++)
        if (input_str[i + 4] != 0)
            sum = 1;
    return sum;
}

void putout_serial()
{
	std::ofstream serial_file;
	serial_file.open("serial.txt");
	serial_file << "KEY$deadbeef17$";
	serial_file.close();
}

int launch_wagon_wheels()
{
    srand(time(NULL));
    unsigned long long x = abs(rand());

    struct Wagon wg;
    wg.svet = 1;
    wg.nextWagon = NULL;
    wg.prevWagon = NULL;

    struct Wagon* rst_wagon = &wg;
    struct Wagon* lst_wagon = &wg;

    trainInit(lst_wagon, rst_wagon, &x);

    struct Wagon* tempWagon = &wg;
    int length_of_train = 1;

    length_of_train = trainSize(tempWagon);
    printf("%d - length of the train", length_of_train);
    
    return 0;
}

struct Wagon* Walloc(void)
{
    return (struct Wagon*)malloc(sizeof(struct Wagon));
}
struct Wagon* createWagon(struct Wagon* newWagon, struct Wagon* actWagon, char isNextWagonNew, unsigned long long* x)
{
    newWagon = Walloc();

    if (isNextWagonNew == 1)
    {
        newWagon->nextWagon = NULL;
        newWagon->prevWagon = actWagon;
    }
    else if (isNextWagonNew == 0)
    {
        newWagon->nextWagon = actWagon;
        newWagon->prevWagon = NULL;
    }
    newWagon->svet = getSvet(x);
    return newWagon;
}

struct Wagon* createNWagons(struct Wagon* actWagon, char isNextWagonNew, int N, unsigned long long* x)
{
    struct Wagon* temp_Wagon;
    temp_Wagon = actWagon;
    if (isNextWagonNew)
        for (int i = 0; i < N; i++)
        {
            temp_Wagon->nextWagon = createWagon(temp_Wagon->nextWagon, temp_Wagon, 1, x);
            temp_Wagon = temp_Wagon->nextWagon;
        }
    else
        for (int i = 0; i < N; i++)
        {
            temp_Wagon->prevWagon = createWagon(temp_Wagon->prevWagon, temp_Wagon, 0, x);
            temp_Wagon = temp_Wagon->prevWagon;
        }
    return temp_Wagon;
}

void tieWagons(struct Wagon* leftestWagon, struct Wagon* rightestWagon)
{
    leftestWagon->prevWagon = rightestWagon;
    rightestWagon->nextWagon = leftestWagon;
}

short int getSvet(unsigned long long* x)
{
    unsigned long long m = 4294967296;
    unsigned long long c = 39027341287453;
    unsigned long long a = 2147483653;
    *x = (*x * a + c) % m;

    return ((*x >> 8) % 2);
}

int trainSize(struct Wagon* tempWagon)
{
    int length_of_train = 1;
    short int found = 0;
    while (!found)
    {
        short int lightened_wagon = 0;
        while (!lightened_wagon)
        {
            tempWagon = tempWagon->nextWagon;
            if (tempWagon->svet == 1)
            {
                tempWagon->svet = 0;
                lightened_wagon = 1;
            }
            length_of_train++;
        }
        int temp = 1;
        while (temp < length_of_train)
        {
            tempWagon = tempWagon->prevWagon;
            temp++;
        }
        if (tempWagon->svet == 0)
        {
            found = 1;
            length_of_train--;
        }
        else
        {
            temp = 1;
            while (temp < length_of_train)
            {
                tempWagon = tempWagon->nextWagon;
                temp++;
            }
        }
    }
    return length_of_train;
}

void trainInit(struct Wagon* lst_wagon, struct Wagon* rst_wagon, unsigned long long* x)
{
    int n = 0;
    int isNextWagonCreate = -1;
    while (isNextWagonCreate != 2)
    {

        printf("0| Create new wags in left side \n\
1| Create new wags in right side \n\
2| Tie ends of the train and exit \n");
        scanf_s("%d", &isNextWagonCreate);

        if (isNextWagonCreate == 0 || isNextWagonCreate == 1)
        {
            printf("how many wagons wanna create?\n");
            scanf_s("%d", &n);
            if (isNextWagonCreate == 0)
            {
                lst_wagon = createNWagons(lst_wagon, isNextWagonCreate, n, x);
                clearscr();
                printf("Added %d wagons in the left side\n", n);
            }
            else
            {
                rst_wagon = createNWagons(rst_wagon, isNextWagonCreate, n, x);
                clearscr();
                printf("Added %d wagons in the right side\n", n);
            }
        }
        else if (isNextWagonCreate == 2)
        {
            tieWagons(lst_wagon, rst_wagon);
        }
    }
}

void clearscr(void)
{
    printf("\033[2J\033[1;1H");
}


void print_line(int number, const char* additional)
{
    int esis;
    unsigned char size;
    if (number < 9)
        esis = object.array[number + 1] - object.array[number];
    else if (number == 9)
        esis = 240 - object.array[number];
    else
    {
        for (unsigned int i = 0; i < 16; i++)
            size = object.data[0][i + object.array[6]] ^ (i + 60 + object.array[2]);
        return;
    }

    for (unsigned int i = 0; i < esis; i++)
        printf("%c", object.data[0][i + object.array[number]] ^ (i + 60 + object.array[number]));
    if (additional != NULL)
        printf("%s", additional);
}

//void DetectWindow(const char* window_name)
//{
//    if (FindWindow(TEXT(window_name), NULL)) {
//        std::cout << wr_pas << std::endl;
//        std::cout << exit_pr << std::endl;
//        getchar();
//        exit(0);
//    }
//}
//
//void DetectProcess(const char* process_name)
//{
//    PROCESSENTRY32 pe;
//    HANDLE hSnapShot;
//    hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
//    ZeroMemory(&pe, sizeof(PROCESSENTRY32));
//    pe.dwSize = sizeof(PROCESSENTRY32);
//
//    if (Process32First(hSnapShot, &pe)) {
//        do {
//            if (strcmp((char*)pe.szExeFile, process_name) == 0) {
//                std::cout << wr_pas << std::endl;
//                std::cout << exit_pr << std::endl;
//                getchar();
//                exit(0);
//            }
//        } while (Process32Next(hSnapShot, &pe));
//    }
//
//    CloseHandle(hSnapShot);
//}

int CRC_8(unsigned char* data, int length)
{
    unsigned char crc = 0x00;
    char extract;
    char sum;
    for (int i = 0; i < length; i++) {
        extract = *data;
        for (char temp = 8; temp; temp--) {
            sum = (crc ^ extract) & 0x01;
            crc >>= 1;
            if (sum)
                crc ^= 0x80;
            extract >>= 1;
        }
        data++;
    }
    return crc;
}

std::string get_code()
{
    std::string output;
    int l = 0;
    print_line(0);
    std::cin >> output;
    for (auto i : output)
    {
        unsigned char temp;
        temp = i ^ object.data[0][object.array[9] + 31 + l % 18];
        output[l] = i ^ object.data[0][object.array[9] + 31 + l++ % 18];
    }
    return output;
}
