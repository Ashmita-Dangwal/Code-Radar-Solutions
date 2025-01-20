#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='A'|| c=='B'|| c=='C'||c=='D'||c=='E'||c=='F'||c=='G'||c=='H'||c=='I'||c=='J'||c=='K'||c=='L'||c=='M'||c=='N'||c=='O'||c=='P'||c=='Q'||c=='R'||c=='S'||c=='T'||c=='W'||c=='X'||c=='Y'||c=='Z')
    {
        printf("Uppercase");
    }
    else if(c=='a'||c=='b'||c=='c'||c=='d'||c=='e'||c=='f'||c=='g'||c=='h'||c=='i'||c=='j'||c=='k'||c=='l'||c=='m'||c=='n'||c=='o'||c=='p'||c=='q'||c=='r'||c=='s'||c=='t'||c=='w'||c=='x'||c=='y'||c=='z')
    {
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet")
    }
    return 0;
}