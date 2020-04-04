#include<stdio.h>
//uva 374
int  Big_Mod(int m,int p,int n);
int main()
{
    int a,b,c,res;
    scanf("%d %d %d",&a,&b,&c);
    res=Big_Mod(a,b,c);
    printf("MOD is: %d",res);

}
int Big_Mod(int m,int p,int n)

{
    int temp;
    if(p==0)
        return 1;

    if(p%2!=0)

        return ((m%n)*(Big_Mod(m,p-1,n)&n)%n);

    else
    {
        temp=Big_Mod(m,p/2,n);
        return((temp%n)*(temp%n))%n;
    }
}








