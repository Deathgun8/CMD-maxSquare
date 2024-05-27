//Faca um programa que receba um número inteiro, positivo N, pela linha de comando,
//calcule e mostre o maior quadrado menor ou igual a N.
//Por exemplo, se N for maior ou igual a 38, o menor quadrado é 36 (quadrado de 6).
//Por exemplo, se N for maior ou igual a 48, o menor quadrado é 36 (quadrado de 6).
//Por exemplo, se N for maior ou igual a 95, o menor quadrado é 81 (quadrado de 9).

//It asks to calculate the minimun maximum square before the number N defined by the user

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//saídas permitidas e que nao devem ser modificadas
#define SAIDA_1 "\nSAIDA_1 = O maior quadrado menor ou igual a N vale: %d\n"
#define SAIDA_2 "\nSAIDA_2 = N invalido, deve ser um valor positivo!\n"
#define SAIDA_3 "\nSAIDA_3 = Quantidade de argumento invalido!\n"

int main(int argc, char *argv[]) {

//Checks if the parameters are equal two
    if( argc == 2 ) {
    
    //If it is true, defines the variables
        int N, maxSquare, i, Q;
	float z;
    //Defines the value of the variable N 
        N = atoi(argv[1]);
    
    //Checks if the N is positive
        if (N <= 0) {
        //If N is negative prints that the value is invalid and ends the program
        	printf(SAIDA_2);
        } else {
        //If N is positive inicializate the variables 
        	maxSquare = 0;
        	i = 0;
       
       //Calculates the square of N and turns it into a integer 
        z = sqrt(N);
	Q = trunc(z);
 
       //Does the maximum square      
        maxSquare = z * z;
       
       //Prints the value of the maximum Square
        printf(SAIDA_1, maxSquare);
        }
return 0;
    } else {
	printf(SAIDA_3);
    return -1;
    }
}
