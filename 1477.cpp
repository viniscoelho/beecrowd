#include <stdio.h>
#include <stdlib.h>
#define MAXN 530000

struct segment {
    int h, e, r;
    segment(int h = 0, int e = 0, int r = 0)
        : h(h)
        , e(e)
        , r(r)
    {
    }

    segment operator+(segment a)
    {
        return segment(h + a.h, e + a.e, r + a.r);
    }
};

segment tree[MAXN];
int flag[MAXN];

int readInt()
{
    bool minus = false;
    int result = 0;
    char ch = getchar_unlocked();
    while (true) {
        if (ch == '-')
            break;
        if (ch >= '0' && ch <= '9')
            break;
        ch = getchar_unlocked();
    }
    if (ch == '-')
        minus = true;
    else
        result = ch - '0';
    while (true) {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9')
            break;
        result = result * 10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}

void build(int node, int ld, int rd)
{
    flag[node] = 0;
    if (ld == rd)
        tree[node] = segment(1, 0, 0);
    else {
        int tm = (ld + rd) >> 1;
        build(node * 2, ld, tm);
        build(node * 2 + 1, tm + 1, rd);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}

segment get(int node)
{
    if (!flag[node])
        return tree[node];
    for (int i = 0; i < flag[node]; i++) {
        int x = tree[node].h;
        tree[node].h = tree[node].r;
        tree[node].r = tree[node].e;
        tree[node].e = x;
    }
    flag[2 * node] = (flag[2 * node] + flag[node]) % 3;
    flag[2 * node + 1] = (flag[2 * node + 1] + flag[node]) % 3;
    flag[node] = 0;
    return tree[node];
}

segment query(int node, int ld, int rd, int l, int r)
{
    segment zero = segment(0, 0, 0);
    if (l > rd || r < ld)
        return zero;
    if (ld >= l && rd <= r)
        return get(node);
    else {
        int tm = (ld + rd) >> 1;
        get(node);
        return query(2 * node, ld, tm, l, r) + query(2 * node + 1, tm + 1, rd, l, r);
    }
}

void update(int node, int ld, int rd, int l, int r)
{
    if (l > rd || r < ld)
        return;
    if (ld >= l && rd <= r) {
        flag[node] = (flag[node] + 1) % 3;
        return;
    } else {
        int tm = (ld + rd) >> 1;
        update(2 * node, ld, tm, l, r);
        update(2 * node + 1, tm + 1, rd, l, r);
        tree[node] = get(2 * node) + get(2 * node + 1);
    }
}

int main()
{
    int n, m, a, b;
    char c;
    while (scanf("%d %d", &n, &m) != EOF) {
        build(1, 0, n - 1);
        while (m--) {
            scanf(" %c", &c);
            a = readInt();
            b = readInt();
            if (c == 'C') {
                segment resp = query(1, 0, n - 1, a - 1, b - 1);
                printf("%d %d %d\n", resp.h, resp.e, resp.r);
            } else
                update(1, 0, n - 1, a - 1, b - 1);
        }
        printf("\n");
    }
    return 0;
}
