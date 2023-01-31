int main()
{
    float num1=3.1, num2=4.6, num3=2.4, tem=0;
    if(num1>num2)
    {
        tem=num1;
        num1=num2;
        num2=tem;
    }
    if(num2>num3)
    {
        tem=num2;
        num2=num3;
        num3=tem;
    }
    if(num1>num2)
    {
        tem=num1;
        num1=num2;
        num2=tem;
    }
    printf("%.1f and %.1f and %.1f", num1, num2, num3);
    return 0;
}
