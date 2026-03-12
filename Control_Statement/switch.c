#include<stdio.h>
int main()
{
        char op = 'A';
        switch(op)
        {
                case 'A' : printf("case - A\n"); break;
                case 65  : printf("case 65\n"); break;
                case 97  : printf("case 97\n"); break;
        }
}
//Note : The switch case doesn't accept the duplicate cases.
