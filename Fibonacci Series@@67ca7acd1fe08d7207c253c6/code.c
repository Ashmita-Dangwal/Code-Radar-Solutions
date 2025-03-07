int fibonacciSeries(int n)
{ 
    int a;
    if(n<=0){
        printf("0");
    }
    else if(n==1)
    {
        printf("1");
    }
    else{
    a= fibonacciSeries(n-1)+fibonacciSeries(n-2);
    printf("%d",a);
    }
}