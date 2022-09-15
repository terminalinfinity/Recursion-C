#include<stdio.h>

void recurse(int i);
int main(){
    recurse(9);
    return 0;
}
void recurse(int i){
    if(i>=0){
        recurse(i-1);   ///recursion
        printf("%d ",i);
    }
}
