#include <cs50.h>
#include <stdio.h>a

int main(void)
{
    string name = get_string("What is your name? ");
    printf("hello, %s\n", name);
}
