/*
    Autor: C. Antunis B. da S. Santos

    Parameters of generator:
        char[] :            Name of file to save composition
        unsigned long N:    Number of elements in lattice
        double X_mean:      Mean value of the composition
        double W:           Disorder length
        unsigned long s:    Parameter to random number generator
*/

#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_rng.h>

int main(int argc, char const *argv[])
{
    const unsigned long N = (unsigned long)atol(argv[2]);
    const double X_mean = (double)atof(argv[3]);
    const double W = (double)atof(argv[4]);
    unsigned long s = (unsigned long)atol(argv[5]);
    {
        FILE *composition = fopen(argv[1], "w");
        {
            const gsl_rng_type* m;
            gsl_rng* g;
            //  Setup random number generator
            m = gsl_rng_ran1;
            g = gsl_rng_alloc(m);
            gsl_rng_set(g, s);
            for (unsigned long n = 0; n < N; n++)
                fprintf(
                    composition,
                    "%lg\n", X_mean - 0.5 * W * gsl_rng_uniform(g)
                );
            fclose(composition);
        }
    }
    return 0;
    return 0;
}
