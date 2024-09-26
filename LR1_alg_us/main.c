#define _CRT_SECURE_NO_WARNINGS
#include "time.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"

int main(void)
{
    setlocale(LC_ALL, "Rus");
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    char tmp_lab = "a";
    int i = 0;
    struct student {
        int num;
        char famil[20];
        char name[20], facult[20];
        char Nomzach[20];
        struct student* next;
    };

    char tablica[] =
    {
      "+---+---------------+------------+-------------+----------------+\n"
      "|   |               |            |             |                |\n"
      "| # |    Surname    |    Name    |   Faculty   |     Nomzach    |\n"
      "|   |               |            |             |                |\n"
      "+---+---------------+------------+-------------+----------------+\n"
    };
    char border[] = { "+---+---------------+------------+-------------+----------------+\n" };

    struct student* tmp_p = NULL;
    struct student* start = NULL;
    struct student* end = NULL;
    struct student* temp = NULL;

    do
    {
        temp = (struct student*)malloc(sizeof(struct student));
        temp->num = i + 1;
        printf("\nНапишите фамилию студента: ");
        scanf("%s", &temp->famil);
        printf("\nНапиште имя студента: ");
        scanf("%s", &temp->name);
        printf("\nНапишите Факультет студента: ");
        scanf("%s", &temp->facult);
        printf("\nНапишите номер зачетной книжки студента: ");
        scanf("%s", &temp->Nomzach);

        if (start == NULL && end == NULL)
        {
            start = temp;
        }
        else
        {
            end->next = temp;
        }
        if (temp->famil[0] == '~')
        {
            end->next = NULL;
            free(temp);
            break;
        }
        end = temp;
        end->next = NULL;
        getchar();
        printf("Do you wanna stop?('s'): ");
        scanf("%c", &tmp_lab);
        getchar();
        if (tmp_lab == 's')
        {
            break;
        }
        i++;
    } while (1);

    printf("your struct:\n");
    printf("%s", tablica);
    temp = start;
    while (temp != NULL)
    {
        printf("| %-2d| %-13s | %-11s| %-11s | %-15s|\n",
            temp->num, temp->famil, temp->name, temp->facult, temp->Nomzach);
        printf("%s", border);
        temp = temp->next;
    }

    char search[20];
    printf("\nВведите параметр для поиска: ");
    scanf("%19s", search);

    temp = start;
    int found = 0;

    while (temp != NULL) {
        if (strcmp(temp->famil, search) == 0 ||
            strcmp(temp->name, search) == 0 ||
            strcmp(temp->facult, search) == 0 ||
            strcmp(temp->Nomzach, search) == 0) {

            printf("\nНайден студент: %s %s, факультет: %s, номер зачётной книжки: %s\n",
                temp->famil, temp->name, temp->facult, temp->Nomzach);
            found = 1;
        }
        temp = temp->next;
    }

    if (!found) {
        printf("\nСтудент с указанными параметрами не найден.\n");
    }

    temp = start;
    while (temp != NULL) {
        struct student* to_free = temp;
        temp = temp->next;
        free(to_free);
    }

    return 0;
}
