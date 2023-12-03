# Compositional Disorder Generators

![Linguagem C](https://img.shields.io/badge/Linguagem%20C-555555?style=plastic)
![GNU Scientific Library](https://img.shields.io/badge/GNU%20Scientific%20Library-800000?style=plastic)

Autor: [C. Antunis B. da S. Santos](https://github.com/carlos-antunis-physics/)

> This repository aims to provide generators of the most proeminent compositional generators used in low-dimensional systems

Most of the source-codes in this repo uses the [GNU Scientific Library](https://www.gnu.org/software/gsl/) (a numerical methods library developed in `C` programming language, distribuited beneath `GNU General Public License`), so please ensure that it is present in your computer.

> **Installing GSL**
> 
>  To install `GSL`, please download the most recent available version (in development of this repo the latest version is `GSL 2.7`):
> ```bash
> wget "ftp://ftp.gnu.org/gnu/gsl/gsl-latest.tar.gz"     # Get the GSL tar file from server
> tar -xvzf gsl-latest.tar.gz                            # Untar GSL files
> cd gsl-*/                                              # Change directory to gsl-"latest"/
> ```
> With the files now we just need to setup the `GSL`:
> ```bash
> gsl_path = "/home/$USER/gsl/"                          # Configure GSL directory
> mkdir $gsl_path                                        # Make GSL directory
> #  Configure and install GSL
> ./configure --prefix=$gsl_path
> make
> make install
> #  Configure LD_LIBRARY_PATH in ~/.bashrc
> echo "LD_LIBRARY_PATH=$gsl_path/lib" >> ~/.bashrc
> echo "export LD_LIBRARY_PATH" >> ~/.bashrc
> source ~/.bashrc
> #  Return to parent directory
> cd ../
> ```

> **Using GSL**
>
> To run a file in which `GSL` is used, please compile properly the `file.c` (suposing `GSL` was configured in `directory/`):
> ```bash
> gcc -I directory/include -c file.c                     # Include GSL files
> gcc -L directory/lib file.o -lgsl -lgslcblas -lm       # Link GSL libraries
> rm file.o                                              # Remove object file
> ```

## Compositional disorder generation methods

The compositional disorder play a fundamental role in charge and vibrational transport, the computational routines to obtain the composition of a lattice provided by this repo is:

[`Crystalline case`](./generators/crystalline.c)
> Generates a crystalline (without impurities) composition to the lattice.

[`Uniform disorder case`](./generators/uniform-disorder.c)
> Generates a uniform disordered composition to the lattice. 
