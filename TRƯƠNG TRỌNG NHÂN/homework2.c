    #include <stdio.h>
    int main()
    {
        int a = 0;
        int b = 0;
        int c = 0;
        int tong, tich, va, hoac;
        int result;

        printf("Nhap so a: ");
        scanf("%d", &a);
        printf("Nhap so b: ");
        scanf("%d", &b);
        printf("Nhap so c: ");
        scanf("%d", &c);

        tong = a + b;
        printf("Tong (a+b) = %d\n", tong);
        tich = tong * c;
        printf("Tich (a+b)*c = %d\n", tich);
        va = tich & a;
        printf("Va = %d\n", va);
        hoac = va | b;
        printf("Hoac = %d\n", hoac);
        result = (a + b) * c & a | b;
        printf("Result = %d", result);
        return 0;

    }