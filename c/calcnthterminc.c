#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int res,t1,t2,t3;
  t1=a;t2=b;t3=c;
  if(n==1)res=t1;
  else if(n==2)res=t2;
  else if(n==3)res=t3;
  else{
    for(int i=4;i<=n;i++){
        res=t1+t2+t3;
        t1=t2;
        t2=t3;
        t3=res;
    }
  }
  return res;   
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
