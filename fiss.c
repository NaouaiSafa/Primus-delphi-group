#include <stdio.h>
#include <stdlib.h>
int main()
{int i;
for(i=1; i<=100; i++)
    {if (((i%3)==0)&&((i%7)==0))
    {printf("FissBuzz\n");} //print fissbuzz instead of fizz

    else if (((i%3)==0)&&((i%7)!=0))
    {printf("Fiss\n");} // print fiss instead of fizz
    else if (((i%7)==0)&&((i%3)!=0))
    {printf("Buzz\n");}

    else
    {printf("%d\n",i);}
    }
    return 0;
}
