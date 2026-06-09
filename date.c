 #include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate) {
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
}

void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter day: ");
    scanf("%d", &ptrDate->day);

    printf("Enter month: ");
    scanf("%d", &ptrDate->month);

    printf("Enter year: ");
    scanf("%d", &ptrDate->year);
}

void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n",
           ptrDate->day,
           ptrDate->month,
           ptrDate->year);
}

int main() {
    struct Date d;
    int choice;

    initDate(&d);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Accept Date\n");
        printf("2. Print Date\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                acceptDateFromConsole(&d);
                break;

            case 2:
                printDateOnConsole(&d);
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}
