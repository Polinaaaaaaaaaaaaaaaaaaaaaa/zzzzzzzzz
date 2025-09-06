#include <stdio.h>

int main(void) {
    int hp, lection;
    char knowledge;

    // Проверка HP
    scanf("%d", &hp);
    if (hp > 70) printf("Студент в отличной форме\n");
    else if (hp > 30) printf("Студент устал\n");
    else printf("Студент в опасности\n");

    // Проверка лекций и знаний
    scanf("%d %c", &lection, &knowledge);
    if (lection >= 50 && knowledge == 'H') 
        printf("Можно купить знания\n");
    else 
        printf("Недостаточно ресурсов\n");

    // Числа 1..20 (без кратных 3)
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");

    // Факториал 7
    int fact = 1;
    for (int i = 1; i <= 7; i++) fact *= i;
    printf("%d\n", fact);

    return 0;
}
