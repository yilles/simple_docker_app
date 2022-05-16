#include <stdio.h>

int main (int argc, char *argv[])
{
    FILE *input_file, *output_file;
    int c;

    if (argc == 3)
    {
        input_file = fopen(argv[1], "r");
        output_file = fopen(argv[2], "w+");

        if (input_file != NULL)
        {
            while( (c=fgetc(input_file)) != EOF)
            {
            	fputc(c, output_file);
            }

            fclose(input_file);
            fclose(output_file);
            printf("Copy %s to %s OK!\n", argv[1], argv[2]);
        }
        else
        {
            fclose(output_file);
            printf("The input file(%s) isn't here!\n", argv[1]);
        }

    }
    else
    {
        printf("Input parameter error!\n");
    }

    return 0;
}