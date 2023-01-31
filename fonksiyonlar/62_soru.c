#include <stdio.h>
//9.62
float lirayaCevir(float, float, float, float);
int main()
{
    printf("%.2f", lirayaCevir(10, 5, 4, 7));
    return 0;
}
float lirayaCevir(float para10, float para100, float kurus10, float kurus25)
{   
    return (para10*0.25+para100*2.5+kurus10*10+kurus25*25)/100;
}
