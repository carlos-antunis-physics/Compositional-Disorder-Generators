/*
    Autor: C. Antunis B. da S. Santos

    Parameters of generator:
        char[] :            Name of file to save composition
        unsigned long N:    Number of elements in lattice
        double X:           Value of the composition
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const unsigned long N = (unsigned long)atol(argv[2]);
    const double X = (double)atof(argv[3]);
    {
        FILE *composition = fopen(argv[1], "w");
        for (unsigned long n = 0; n < N; n++)
            fprintf(
                composition,
                "%lg\n", X
            );
        fclose(composition);
    }
    return 0;
}