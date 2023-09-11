#include <cstdio>

int main() {
    char *type = NULL;

    type = "char";

    size_t TypeDim = sizeof(*type);

    printf("%d\n", TypeDim);

    switch (TypeDim)
    {
    case 1:
        printf("Hello world\n");
        break;
    
    default:
        break;
    }
}