factorial(int z)
{
    if(z==1)
    {
        return 1;
    }
    else{
            return z*factorial(z-1);
    }
}


void main()
{
    int a,r;
    printf("Enter the value:");
    scanf("%d",&a);
    r = factorial(a);
    printf("%d",r);
}
