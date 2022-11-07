/*
Task

Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int list[] = {a, b, c, d};
    int largest = d;
    
    for(int i=0; i<3; i++) {
        if(list[i]>largest) {
            largest = list[i];
        }
    }
    
    return largest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
