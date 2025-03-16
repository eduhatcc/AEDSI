#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int qtLetras(char palavra[], int c, int i)
{
    if(palavra[i] != '\0') {
        qtLetras(palavra, c+1, i+1);
        return c-1;
    }
}

//bool ehPalindromo2(char palavra[], int i, int j, bool palindromo)
//{
//    if(i < j && j > i) {
//        if(palindromo && i < j && j > i) {
//            if(palavra[i] != palavra[j]) {
//                palindromo = false;
//            }
//            ehPalindromo2(palavra, i+1, j+1, palindromo);
//        }
//    }
//   else {
//           return palindromo;
//    }
//}

bool ehPalindromo(char palavra[], int i, int j)
{
    bool palindromo;

    if(i >= j) {
        palindromo = true;
    } else if(palavra[i] != palavra[j]) {
        palindromo = false;
    } else {
        ehPalindromo(palavra, i+1, j-1);
    }

    return palindromo;
}


int main()
{
    char palavra[] = "REVIVER";
    int i = 0;
    int j = qtLetras(palavra, i, 0);

    if(ehPalindromo(palavra, i, j)) {
        printf("\nEh palindromo!\n");
    } else {
        printf("\nNao eh palindromo!\n");
    }

    return 0;
}
