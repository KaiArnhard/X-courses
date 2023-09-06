#include <cstdio>
#include "headers/Mystring.h"

void InputRectangleArray(void* array, char* type, const size_t columns, const size_t rows, FILE *fp);
void PrintRectangleArray(void* array, char* type, const size_t columns, const size_t rows);

void* Getter (void* array, size_t columns, size_t rows, char *type);

struct dimension
{
    const size_t rows = 0;
    const size_t columns = 0;
};


int main() {    

    dimension IntDimensions = {10, 10};
    dimension StringDimension = {10, 100};

    int array[IntDimensions.rows][IntDimensions.columns];
    char str[StringDimension.rows][StringDimension.columns];

    FILE *fp;  
    FILE *fp1; 
 
    fp  = fopen("array.txt", "r");
    fp1 = fopen("ls.txt", "r");
    
    InputRectangleArray(array, "int", IntDimensions.columns, IntDimensions.rows, fp);
   
    PrintRectangleArray(array, "int", IntDimensions.columns, IntDimensions.columns);
    

}

void InputRectangleArray(void* array, char* type, size_t columns, size_t rows, FILE *fp) {

    if (Mystrcmp(type, "char") == EQUAL) {
        
        for (size_t counter = 0; counter < rows; counter++) {
            
            Myfgets(((char*) array + counter * columns), columns, fp);
        }
    }
    else if (Mystrcmp(type, "int") == EQUAL) {
        
        for (size_t RowsCount = 0; RowsCount < rows; RowsCount++) {
            
            for (size_t ColsCount = 0; ColsCount < columns; ColsCount++) {
                fscanf(fp, "%d", ((int*) array + RowsCount * columns + ColsCount));
            }
        }
    }    
}

void PrintRectangleArray(void* array, char* type, size_t columns, size_t rows) {

        if (Mystrcmp(type, "char") == EQUAL) {
        
            for (size_t RowsCount = 0; RowsCount < rows; RowsCount++) {

                for (size_t ColsCounter = 0; ColsCounter < columns; ColsCounter++) {
                    
                    printf("%c", *((char*) array + RowsCount * columns + ColsCounter));

                    if (*((char*) array + RowsCount * columns + ColsCounter) == '\0') {
                        break;
                    }
                    
                }
                printf("\n");
            }
        } 
        else if (Mystrcmp(type, "int") == EQUAL) {
            for (size_t RowsCount = 0; RowsCount < rows; RowsCount++) {

                for (size_t ColsCounter = 0; ColsCounter < columns; ColsCounter++) {
                    
                    printf("%d ", *((int*) array + RowsCount * columns + ColsCounter));
                    
                }
                printf("\n");
        }
        }

}

void* Getter (void* array, size_t columns, size_t rows, char *type) {
    
}