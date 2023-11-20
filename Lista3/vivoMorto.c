#include <stdio.h>
#include <stdlib.h>

typedef struct l
{
    int d;
    struct l *n;
} l;

l *c_l(int *vx, int p)
{
    l *c = malloc(sizeof(l));
    l *t = c;

    for (int i = 0; i < p; i++)
    {
        l *n = malloc(sizeof(l));
        t->n = n;
        t = t->n;
        t->d = vx[i];
    }

    return c;
}

void r_d(l *p)
{
    if (p == NULL)
        return;
    else if (p->n == NULL)
        p->n = NULL;
    else
    {
        l *t = p->n;
        p->n = t->n;
    }
}

void e(l *c, int o, int *v_a)
{
    l *t = c;

    for (int i = 0; t->n != NULL; i++)
    {
        if (v_a[i] != o)
            r_d(t);
        else
            t = t->n;
    }
}

int main()
{
    l *l = malloc(sizeof(l));
    int p, r;
    int vx[101];
    int n, j;
    int v_a[101];
    int t = 1;

    while (1)
    {

        scanf("%d %d", &p, &r);

        if (p && r)
        {
            for (int i = 0; i < p; i++)
                scanf("%d", &vx[i]);

            l = c_l(vx, p);

            for (int i = 0; i < r; i++)
            {
                scanf("%d %d", &n, &j);
                for (int k = 0; k < n; k++)
                    scanf("%d", &v_a[k]);

                e(l, j, v_a);
            }
            printf("T %d\n", t);
            t++;
            printf("%d\n", l->n->d);
        }
        else
            break;
    }

    return 0;
}