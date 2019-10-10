#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#define mp make_pair
#define MAX 200

using namespace std;

typedef pair<int, int> ii;

char str1[55], str2[55];

int LCS(int a, int b)
{
    if (!a || !b)
        return 0;

    int* curr = new int[b];
    int* prev = new int[b];
    int* swap = NULL;
    int maxSubstr = 0;

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            if (str1[i] != str2[j])
                curr[j] = 0;
            else {
                if (i == 0 || j == 0)
                    curr[j] = 1;
                else
                    curr[j] = 1 + prev[j - 1];
                maxSubstr = max(maxSubstr, curr[j]);
            }
        }
        swap = curr;
        curr = prev;
        prev = swap;
    }
    delete[] curr;
    delete[] prev;
    return maxSubstr;
}

int main()
{
    while (scanf(" %[^\n]", str1)) {
        scanf(" %[^\n]", str2);
        int str1_size = strlen(str1), str2_size = strlen(str2);
        for (int i = 0; i < str1_size; ++i)
            if (str1[i] == ' ')
                str1[i] = '0';
        for (int i = 0; i < str2_size; ++i)
            if (str2[i] == ' ')
                str2[i] = '0';
        printf("%d\n", LCS(str1_size, str2_size));
    }
    return 0;
}
