main()
{
    int a,f;

    printf("\nEnter number");
    scanf("%d",&a);

    f=factorial(a);
    printf("\nFactorial is:%d",f);
}

factorial(int x){
int f=1,i;

for(i=x,i>=1;i--)
  f=f*i;

  return(f)

}