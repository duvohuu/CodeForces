#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int moves = 0;
        
        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
            } else if (n % 3 == 0) {
                n *= 2;
            } else {
                moves = -1;
                break;
            }
            
            moves++;
        }
        
        printf("%d\n", moves);
    }
    
    return 0;
}
