#include <math.h>
#define bintodec(a) {           \
    int dec = 0, i = 0, rem;     \
    while (a != 0)               \
    {                            \
        rem = a % 10;            \
        a /= 10;                 \
        dec += rem * pow(2, i);  \
        ++i;                     \
    }                            \
    printf("Decimal : %d", dec); \
}

#define dectobin(a) {          \
    long bin = 0;          \
    int rem, i = 1;             \
    while (a != 0)              \
    {                           \
        rem = a % 2;            \
        a /= 2;                 \
        bin += rem * i;         \
        i *= 10;                \
    }                           \
    printf("Binary : %d", bin); \
}

#define bintohex(a) {                                \
    long int hex = 0, i = 1, rem;                     \
    while (a != 0)                                    \
    {                                                 \
        rem = a % 10;                                 \
        hex = hex + rem * i;                          \
        i = i * 2;                                    \
        a = a / 10;                                   \
    }                                                 \
    printf("Equivalent hexadecimal value: %lX", hex); \
}

#define hextobin(hexdec) {                          \
    long int i = 0;                                  \
    printf("Equivalent hexadecimal value:");         \
    while (hexdec[i])                                \
    {                                                \
        switch (hexdec[i])                           \
        {                                            \
        case '0':                                    \
            printf("0000");                          \
            break;                                   \
        case '1':                                    \
            printf("0001");                          \
            break;                                   \
        case '2':                                    \
            printf("0010");                          \
            break;                                   \
        case '3':                                    \
            printf("0011");                          \
            break;                                   \
        case '4':                                    \
            printf("0100");                          \
            break;                                   \
        case '5':                                    \
            printf("0101");                          \
            break;                                   \
        case '6':                                    \
            printf("0110");                          \
            break;                                   \
        case '7':                                    \
            printf("0111");                          \
            break;                                   \
        case '8':                                    \
            printf("1000");                          \
            break;                                   \
        case '9':                                    \
            printf("1001");                          \
            break;                                   \
        case 'A':                                    \
        case 'a':                                    \
            printf("1010");                          \
            break;                                   \
        case 'B':                                    \
        case 'b':                                    \
            printf("1011");                          \
            break;                                   \
        case 'C':                                    \
        case 'c':                                    \
            printf("1100");                          \
            break;                                   \
        case 'D':                                    \
        case 'd':                                    \
            printf("1101");                          \
            break;                                   \
        case 'E':                                    \
        case 'e':                                    \
            printf("1110");                          \
            break;                                   \
        case 'F':                                    \
        case 'f':                                    \
            printf("1111");                          \
            break;                                   \
        default:                                     \
            printf("\nInvalid hexadecimal digit %c", \
                   hexdec[i]);                       \
        }                                            \
        i++;                                         \
    }                                                \
}
