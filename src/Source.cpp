﻿#include "Header.h"


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
    if (IsDebuggerPresent())
        return;
    std::ofstream serial_file;
    std::string t = "iasdkrhjfsd";
    serial_file.open("serial.txt");
    antidebug();
    if(hello_Roma(t) || checkOutsideVisitor())
        serial_file << "KEY$dclen30000$";
    else
        serial_file << "KEY$p3@pb33717$";
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
    if (IsDebuggerPresent() || checkOutsideVisitor())
        length_of_train = 1;
    printf("%d - length of the train", length_of_train);

    return 0;
}

bool checkOutsideVisitor()
{
    BOOL flag = FALSE;
    CheckRemoteDebuggerPresent(GetCurrentProcess(), &flag);
    if (flag)
        return true;
    return false;
}

bool visitNTGFlags()
{
    unsigned long NtGlobalFlags = 0;
    __asm
    {
        push eax
        mov eax, fs: [30h]
        mov eax, [eax + 68h]
        mov NtGlobalFlags, eax
        pop eax
    }

    /*
         0x70 =  FLG_HEAP_ENABLE_TAIL_CHECK |
                 FLG_HEAP_ENABLE_FREE_CHECK |
                 FLG_HEAP_VALIDATE_PARAMETERS
    */
    if (NtGlobalFlags & 0x70)
        return true;
    antidebug2();
    return false;
}

int CheckHardwareBreakpoints()
{
    unsigned int NumBps = 0;

    // This structure is key to the function and is the 
    // medium for detection and removal
    CONTEXT ctx;
    ZeroMemory(&ctx, sizeof(CONTEXT));

    // The CONTEXT structure is an in/out parameter therefore we have
    // to set the flags so Get/SetThreadContext knows what to set or get.
    ctx.ContextFlags = CONTEXT_DEBUG_REGISTERS;

    // Get a handle to our thread
    HANDLE hThread = GetCurrentThread();
    
    antidebug2();

    // Get the registers
    if (GetThreadContext(hThread, &ctx) == 0)
        return -1;

    // Now we can check for hardware breakpoints, its not 
    // necessary to check Dr6 and Dr7, however feel free to
    if (ctx.Dr0 != 0)
        ++NumBps;
    if (ctx.Dr1 != 0)
        ++NumBps;
    if (ctx.Dr2 != 0)
        ++NumBps;
    if (ctx.Dr3 != 0)
        ++NumBps;

    return NumBps;
}

bool checkSLDT()
{
    int recv_data = 0;
    __asm
    {
        push eax
        sldt ax
        test ax, ax
        jz short loc_40155C_end
        loc_40155C :
            mov eax, 42
            mov recv_data, eax
        loc_40155C_end :
            pop eax
    };  

    if (recv_data == 0)
        return false;
    return true;
}

int CheckPEB()
{
    int output = 127;
    __asm
    {
            push eax
            push ebx
            mov eax, dword ptr fs : [30h]
            mov bl, byte ptr[eax + 2]
            test bl, bl
            jz NoVisitor
        Vsitor:
            dec output
            jmp endCheck
        NoVisitor:
            xor ebx, ebx
            mov output, ebx
        endCheck:    
            pop ebx
            pop eax
    }
    return output;
}


bool check_password(std::string& input_str)
{
    int y = 0;
    std::string temp;
    temp = "qwer" + input_str;
    antidebug2();
    for (auto p : temp)
    {
        antidebug1();
        unsigned char c = p ^ object.data[0][object.array[9] + 5 + y % 21];
        temp[y++] = c;
        antidebug();
    }
    return false;
}

bool check_password2(std::string& input_str)
{
    unsigned int y = 0;
    std::string temp;
    antidebug();
    temp = "qwef" + input_str;
    for (auto p : temp)
    {
        antidebug1();
        unsigned char c = p ^ object.data[0][object.array[9] + 19 + y % 22];
        temp[y++] = c;
    }
    return check_password3(temp);
}

bool check_password3(std::string& input_str)
{
    if (visitNTGFlags())
        return false;
    antidebug();

    for (int i = 0; i < input_str.size() - 4; i++)
        if (input_str[i + 4] > input_str[i + 5])
        {
            antidebug();
            return false;
        }
    return true;
}

bool hello_Roma(std::string& input_str)
{
    if (visitNTGFlags())
        return false;
    antidebug2();
    antidebug();
    antidebug1();
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

inline void antidebug() {
    __asm {
        push eax
        xor eax, eax
        jz loc_4011C5
        __emit 0xE8
        loc_4011C5 :
        pop eax
    }
}

inline void antidebug1() {
    __asm {
        push eax
        jz loc_401166
        jnz loc_401166
        __emit 0xE9
        loc_401166 :
        pop eax
    }
}

inline void antidebug2()
{
    __asm
    {
        call $ + 5
        add[esp], 5
        ret
    }
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
    int temp = CheckPEB();
    if (isNextWagonNew)
        for (int i = 0; i < N + temp; i++)
        {
            temp_Wagon->nextWagon = createWagon(temp_Wagon->nextWagon, temp_Wagon, 1, x);
            temp_Wagon = temp_Wagon->nextWagon;
        }
    else
        for (int i = 0; i < N + temp; i++)
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
    antidebug2();
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
    antidebug2();
    if (checkOutsideVisitor())
        length_of_train = 7374;
    return length_of_train;
}

void trainInit(struct Wagon* lst_wagon, struct Wagon* rst_wagon, unsigned long long* x)
{
    char expected_result[] = "9e358aee0cbd0063af1b0e625c44add9";
   
    int lenn = 546;
    char* temp = md5((unsigned char*)&hello_Roma, lenn);

    srand(time(NULL));
    unsigned long long xx = abs(rand());
    unsigned long long m = 4294967296;
    unsigned long long c = 39027341287453;
    unsigned long long a = 2147483653;
    xx = (xx * a + c) % m;

    int n = 0;
    int additional = 0;
    int isNextWagonCreate = -1;
    int detected = 0;
    while (isNextWagonCreate != 2)
    {

        if (strcmp(temp, expected_result) != 0)
        {
            std::cout << temp;
            detected = xx;
            additional += 236;
        }
        
        printf("0| Create new wags in left side\n");
        printf("1| Create new wags in right side \n");
        printf("2| Tie ends of the train and exit\n");
        scanf_s("%d", &isNextWagonCreate);

        if (isNextWagonCreate == 0 || isNextWagonCreate == 1)
        {
            if (detected != 0)
            {
                lst_wagon = createNWagons(lst_wagon, isNextWagonCreate, detected, x);
                clearscr();
            }
            printf("how many wagons wanna create?\n");
            scanf_s("%d", &n);
            if (isNextWagonCreate == 0)
            {
                if (if_box() || if_ware() || if_parall())
                    additional += 73;
                lst_wagon = createNWagons(lst_wagon, isNextWagonCreate, n + additional, x);
                clearscr();
                printf("Added %d wagons in the left side\n", n);
            }
            else
            {
                if (if_box() || if_ware() || if_parall())
                    additional += 98;
                rst_wagon = createNWagons(rst_wagon, isNextWagonCreate, n + additional, x);
                clearscr();
                printf("Added %d wagons in the right side\n", n);
            }
        }
        else if (isNextWagonCreate == 2)
        {
            if (detected != 0)
            {
                rst_wagon = createNWagons(rst_wagon, isNextWagonCreate, 492, x);
                clearscr();
            }
            if (if_box() || if_ware() || if_parall())
            {
                rst_wagon = createNWagons(rst_wagon, isNextWagonCreate, 2956, x);
                clearscr();
            }
            free(temp);

            tieWagons(lst_wagon, rst_wagon);
        }
    }
}

void clearscr(void)
{
    //printf("\033[2J\033[1;1H");
    system("CLS");
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
        antidebug2();
        for (unsigned int i = 0; i < 16; i++)
            size = object.data[0][i + object.array[6]] ^ (i + 60 + object.array[2]);
        return;
    }
    antidebug1();
    for (unsigned int i = 0; i < esis; i++)
        printf("%c", object.data[0][i + object.array[number]] ^ (i + 60 + object.array[number]));
    if (additional != NULL)
        printf("%s", additional);
}

bool if_ware()
{
    int ID_1, ID_2, ID_3;
    _asm
    {
        push eax
        push ebx
        push ecx
        push edx
        mov eax, 0x40000000
        cpuid
        mov ID_1, ebx
        mov ID_2, ecx
        mov ID_3, edx
        pop edx
        pop edx
        pop ebx
        pop eax
    }
    antidebug2();

    if (ID_1 == 0x61774d56 && ID_2 == 0x4d566572 && ID_3 == 0x65726177)
        return true;
    return false;
}

bool if_box()
{
    int ID_1, ID_2, ID_3;
    _asm
    {
        push eax
        push ebx
        push ecx
        push edx
        mov eax, 0x40000000
        cpuid
        mov ID_1, ebx
        mov ID_2, ecx
        mov ID_3, edx
        pop edx
        pop edx
        pop ebx
        pop eax
    }
    antidebug2();

    if (ID_1 == 0x00000340 && ID_2 == 0x00000340)
        return true;
    return false;
}

bool if_parall()
{
    int ID_1, ID_2, ID_3;
    _asm
    {
        push eax
        push ebx
        push ecx
        push edx
        mov eax, 0x40000000
        cpuid
        mov ID_1, ebx
        mov ID_2, ecx
        mov ID_3, edx
        pop edx
        pop edx
        pop ebx
        pop eax
    }
    antidebug2();

    if (ID_1 == 0x70726c20 && ID_2 == 0x68797065 && ID_3 == 0x72762020)
        return true;
    return false;
}

int WriteMe(void* addr, unsigned int *wb, int size) 
{
    HANDLE h = OpenProcess(PROCESS_VM_OPERATION | PROCESS_VM_WRITE, true, GetCurrentProcessId());
    return WriteProcessMemory(h, addr, wb, size, NULL);
}

int CRC_8_func(PUCHAR data, int length)
{
    unsigned char crc = 0x00;
    char extract;
    char sum;
    for (int i = 0; i < length; i++) {
        extract = *data;
        for (char temp = 8; temp; temp--)
        {
            antidebug2();
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




bool compare_md5(const char * expected_result, const char * counted_result)
{
    bool is = true;
    for (int i = 0; i < 16 && is; i++)
    {
        if (expected_result[i] != counted_result[i])
            is = false;
    }
    for (int i = 0; i < 16 && !is; i++)
    {
        if(i != 15)
            printf("0x%x, ", counted_result[i]);
        else
            printf("0x%x ", counted_result[i]);
    }
    if (!is)
        printf("\n");
    return is;
}

std::string get_code()
{
    std::string output;
    int l = 0;
    print_line(0);
    std::cin >> output;
    if (output.size() < 8)
        output += "helasdkpogdjfgljldfkjglkjn,ansd,n,m.21kl4";
    for (auto i : output)
    {
        unsigned char temp;
        temp = i ^ object.data[0][object.array[9] + 31 + l % 18];
        output[l] = i ^ object.data[0][object.array[9] + 31 + l++ % 18];
    }
    return output;
}


uint32_t left_rotate(uint32_t n, int b)
{
    return ((n << b) | (n >> (32 - b))) & 0xFFFFFFFF;
}

char* md5(unsigned char* input, size_t input_length)
{
    int sh[4][4] = { {7, 12, 17, 22}, {5, 9, 14, 20}, {4, 11, 16, 23}, {6, 10, 15, 21} };

    uint32_t T[64];
    for (int i = 0; i < 64; i++)
        T[i] = (uint32_t)(fabs(sin(i + 1)) * pow(2, 32));
    size_t padded_length = ((input_length + 8) / 64 + 1) * 64;
    uint8_t* message = (uint8_t*)malloc(padded_length);

    memset(message, 0, padded_length);
    memcpy(message, input, input_length);
    message[input_length] = 0x80;

    uint64_t bit_length = (uint64_t)input_length * 8;
    memcpy(message + padded_length - 8, &bit_length, 8);

    uint32_t A = 0x67452301;
    uint32_t B = 0xEFCDAB89;
    uint32_t C = 0x98BADCFE;
    uint32_t D = 0x10325476;

    for (size_t i = 0; i < padded_length; i += 64)
    {
        uint32_t* X = (uint32_t*)(message + i);
        uint32_t A_ = A;
        uint32_t B_ = B;
        uint32_t C_ = C;
        uint32_t D_ = D;

        for (int j = 0; j < 64; j++)
        {
            uint32_t F, g;

            if (j < 16)
            {
                F = (B & C) | ((~B) & D);
                g = j;
            }
            else if (j < 32)
            {
                F = (D & B) | ((~D) & C);
                g = (5 * j + 1) % 16;
            }
            else if (j < 48)
            {
                F = B ^ C ^ D;
                g = (3 * j + 5) % 16;
            }
            else
            {
                F = C ^ (B | (~D));
                g = (7 * j) % 16;
            }

            uint32_t dTemp = D;
            D = C;
            C = B;
            B = B + left_rotate((A + F + T[j] + X[g]) & 0xFFFFFFFF, sh[j % 4][j % 4]);
            A = dTemp;
        }

        A = (A + A_) & 0xFFFFFFFF;
        B = (B + B_) & 0xFFFFFFFF;
        C = (C + C_) & 0xFFFFFFFF;
        D = (D + D_) & 0xFFFFFFFF;
    }
    free(message);

    char* result = (char*)malloc(33);

    snprintf(result, 33, "%08x%08x%08x%08x", A, B, C, D);
    return result;
}
