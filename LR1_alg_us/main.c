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
    int b = 0;
    int i = 0;
    struct student {
        int num;
        char famil[20];
        char name[20], facult[20];
        char Nomzach[20];
        struct student* next;
    };
int main(void)
{
	setlocale(LC_ALL, "Rus");
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
    struct student {
        char famil[20];
        char name[20], facult[20];
        int Nomzach;
    } stud[3];


    struct student* tmp_p = NULL;
    struct student* start = NULL;
    struct student* end = NULL;
    struct student* temp = NULL;
    for (i = 0; i < 3; i++)
    {
        printf("������� ������� ��������\n"); scanf("%20s", stud[i].famil);
    }
    for (i = 0; i < 3; i++)
    {
        printf("������� ��� �������� %s\n", stud[i].famil); scanf("%20s", stud[i].name);
    }
    for (i = 0; i < 3; i++)
    {
        printf("������� �������� ���������� �������� %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
    }
    for (i = 0; i < 3; i++)
    {
        printf("������� ����� �������� ������ �������� %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
    }

    do
    {
        temp = (struct student*)malloc(sizeof(struct student));
        temp->num = i + 1;
        printf("\n�������� ������� ��������: ");
        scanf("%s", &temp->famil);
        printf("\n������� ��� ��������: ");
        scanf("%s", &temp->name);
        printf("\n�������� ��������� ��������: ");
        scanf("%s", &temp->facult);
        printf("\n�������� ����� �������� ������ ��������: ");
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
    for (i = 0; i < 3; i++)
    {
        printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name,
            stud[i].facult, stud[i].Nomzach);
    }

    char search_famil[20], search_name[20], search_facult[20];

    printf("\n������� ������� �������� ��� ������: "); scanf("%20s", search_famil);

    char search[20];
    printf("\n������� �������� ��� ������: ");
    scanf("%19s", search);
    printf("������� ��� �������� ��� ������: ");
    scanf("%20s", search_name);

    temp = start;
    int found = 0;
    printf("������� ��������� �������� ��� ������: ");
    scanf("%20s", search_facult);

    while (temp != NULL) {
        if (strcmp(temp->famil, search) == 0 ||
            strcmp(temp->name, search) == 0 ||
            strcmp(temp->facult, search) == 0 ||
            strcmp(temp->Nomzach, search) == 0) {
    int found = 0;
		printf("\n");
            printf("\n������ �������: %s %s, ���������: %s, ����� �������� ������: %s\n",
                temp->famil, temp->name, temp->facult, temp->Nomzach);
            found = 1;
        }
        temp = temp->next;
    }
    for (i = 0; i < 3; i++) {
        if (strcmp(stud[i].famil, search_famil) == 0 &&
            strcmp(stud[i].name, search_name) == 0 &&
            strcmp(stud[i].facult, search_facult) == 0) {
			sum_row += mas[i][j];
    if (!found) {
        printf("\n������� � ���������� ����������� �� ������.\n");
    }
            printf("\n������ �������: %s %s, ���������: %s, ����� �������� ������: %d\n",
                stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
            found = 1;
            break;
        }
    }
	for (int j = 0; j < cols; j++) {
    temp = start;
    while (temp != NULL) {
        struct student* to_free = temp;
        temp = temp->next;
        free(to_free);
    }
    if (!found) {
        printf("\n������� � ���������� ����������� �� ������.\n");
    }
		}
		printf("\nCol %d: %d", j + 1, sum_col);
	}

	for (int i = 0; i < rows; i++) {
		free(mas[i]);
	}

    return 0;
}
