#include <stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void AssignObjects(const struct demo *, struct demo *, struct demo *);

int main(void)
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("Enter integer : ");
    scanf("%d", &obj1.iNo);
    printf("Enter float : ");
    scanf("%f", &obj1.fNo);

    AssignObjects(&obj1, &obj2, &obj3);

    printf("First object integer %d, float %f\n", obj1.iNo, obj1.fNo);
    printf("Second object integer %d, float %f\n", obj2.iNo, obj2.fNo);
    printf("Third object integer %d, float %f\n", obj3.iNo, obj3.fNo);

    return 0;
}

void AssignObjects(const struct demo *pPtr1, struct demo *pPtr2, struct demo *pPtr3)
{
    *pPtr2 = *pPtr1;

    pPtr3 -> iNo = pPtr1 -> iNo;
    pPtr3 -> fNo = pPtr1 -> fNo;
}

