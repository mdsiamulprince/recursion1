#include<stdio.h>
void fun(int n,int a[],int i){
    if(i==n) return;
printf("%d ",a[i]);
fun(n,a,i+1);

}

int main() {
     int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(n,a,0);

return 0;
}