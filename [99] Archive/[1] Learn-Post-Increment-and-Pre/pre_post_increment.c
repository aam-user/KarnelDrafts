#include <stdio.h>
void pre();
void post(); // declares the functions
int i = 1;

int main()
{
    pre(); // function call
    post();
    return 0;
}

void pre()
{
    int po = 1;
    printf("pre-increment");
    printf("\n%d", ++po);
    printf("\n%d", po);
    // print ==> 2; 2;
}
void post()
{
    int pr = 1;
    printf("\npost-increment");
    printf("\n%d", pr++);
    printf("\n%d", pr);
    // print ==> 1; 2;
}