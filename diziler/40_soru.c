#include<stdio.h>
// 11.40
float var_olma_orani(char kelime[], int tedat, char ince_unlu[], int tedat2);
int main()
{
    char kelime[6]={'i','s','t','i','f','a'};
    char ince_unlu[4]={'e','i','ö','ü'};
    float c = var_olma_orani(kelime, 6, ince_unlu, 4);
    printf("Var olma orani = %.2f", c);
   return 0;
}
float var_olma_orani(char kelime[], int tedat, char ince_unlu[], int tedat2)
{
    int count=0;
    for(int i=0; i<4; i++)
    {

        for(int j=0; j<6; j++)
        {
            if(ince_unlu[i]==kelime[j])
            {
                count++;
                break;
            }
        }
    }
    return count/4.0;
}
