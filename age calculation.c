#define period 10
#define principle 5000
main()
{
    int year;
    float amount,value,inrate;
    amount=principle;
    inrate=0.11;
    year=0;
    while(year<=period)
    {
        printf("%d %f",year,amount);
        value=amount+inrate*amount;
        year=year+1;
        amount=value;
    }
}
