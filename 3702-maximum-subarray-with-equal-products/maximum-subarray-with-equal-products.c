int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int maxLength(int* nums, int numsSize) {
    int ans = 0;

    for (int i = 0; i < numsSize; i++) {
        double product = 1;
        int g = 0;
        int l = 1;

        for (int j = i; j < numsSize; j++) {
            product *= nums[j];
            g = gcd(g, nums[j]);
            l = lcm(l, nums[j]);

            if (product == g * l) {
                if (j - i + 1 > ans)
                    ans = j - i + 1;
            }
        }
    }

    return ans;
}