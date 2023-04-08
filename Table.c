#include <stdio.h>
int printtable(int n){
  for(int i = 1; i<=10; i++){
    int m = n*i;
    printf("%d x %d  = %d\n", n,i,m);
  }

}

int main() {
    int n;
  printf("Enter the number which table want to print: ");
  scanf("%d", &n);

  printtable(n);
    return 0;
}
