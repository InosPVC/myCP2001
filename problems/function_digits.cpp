// 14 -> 5 find digits
int getSum(long long n) {
    int sum = 0;
    int m = n;
    while (n > 0) {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}
