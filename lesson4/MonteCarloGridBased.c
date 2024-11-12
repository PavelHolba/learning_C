#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    double x, y, d = 1;
    for (i = 1; i<30; i++){
        long long int outside_count = 0, inside_count = 0;
        int on_line_count = 0;

        x = 0;
        d /= 2;
        while (x <= 1) {
            y = 0;
            while (y <= 1) {
                if (x*x+y*y > 1) {
                    outside_count += 1;
                } else if (x*x+y*y == 1) {
                    on_line_count += 1;
                } else {
                    inside_count += 1;
                }
                y += d;
            }
            x += d;
        }
        printf("i = %d, d = %lf, ouside_count = %lld, inside_count = %lld, on_line_count = %d\n", i, d, outside_count, inside_count, on_line_count);
        printf("pi is roughly %lf\n", (double) 4 * inside_count / (inside_count + outside_count));
    }
    
  return 0;
}