/* First, the standard lib includes, alphabetically ordered */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

/* Then, this project's includes, alphabetically ordered */
#include "array_helpers.h"
#include "weather.h"

void print_help(char *program_name) {
    /* Print the usage help of this program. */
    printf("Usage: %s <input file path>\n\n"
           "Load climate data from a given file in disk.\n"
           "\n"
           "The input file must exist in disk and every line in it must have the following format:\n\n"
           "<year> <month> <day> <temperature> <high> <low> <pressure> <moisture> <precipitations>\n\n"
           "Those elements must be integers and will be copied into the multidimensional integer array 'a'.\n"
           "The dimensions of the array are given by the macro tclimate.\n"
           "\n\n",
           program_name);
}

char *parse_filepath(int argc, char *argv[]) {
    /* Parse the filepath given by command line argument. */
    char *result = NULL;

    if (argc < 2) {
        print_help(argv[0]);
        exit(EXIT_FAILURE);
    }

    result = argv[1];

    return (result);
}

int main(int argc, char *argv[]) {
    char *filepath = NULL;

    /* parse the filepath given in command line arguments */
    filepath = parse_filepath(argc, argv);
    
    /* create an array with the type of tclimate */
    int array[YEARS][MONTHS][DAYS][PHYS_QTTYS];
    
    /* parse the file to fill the array and obtain the actual length */
    array_from_file(array, filepath);

    /* show the ordered array in the screen */
    array_dump(array);

    int minima_temperatura = min_temp(array);
    printf("La menor temperatura mı́nima histórica registrada en la ciudad de Córdoba es %d decimas de grado\n", minima_temperatura);

    int output[YEARS];    
    max_temp_year(array, output);
    
    t_month outp[YEARS];
    mes_prec(array, outp);
    
    return (EXIT_SUCCESS);
}
