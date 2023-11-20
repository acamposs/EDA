#include <stdio.h>
#include <ctype.h>

int main() {
    char number9s[1001];

    while (1) {
        scanf("%s", number9s);
        
        if (number9s[0] == '0' && number9s[1] == '\0')
            break;
        
        int sum = 0;
        int degree = 0;
        
        for (int i = 0; number9s[i] != '\0'; i++) {
            sum += number9s[i] - '0';
        }

        while (sum % 9 == 0 && sum > 9) {
            int newSum = 0;
            while (sum > 0) {
                newSum += sum % 10;
                sum /= 10;
            }
            sum = newSum;
            degree++;
        }

        if (sum == 9) {
            degree++;
            printf("%s is a multiple of 9 and has 9-degree %d.\n", number9s, degree);
        } else {
            printf("%s is not a multiple of 9.\n", number9s);
        }
    }

    return 0;
}
