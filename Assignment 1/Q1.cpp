#include <stdio.h>
#include <stdlib.h>

struct Date
{  private:
    int day;
    int month;
    int year;
    public:

    void initDate(struct Date* ptrDate){
        ptrDate->day = 10;
        ptrDate->month = 12;
        ptrDate->year = 2001;
    }
    void printDateOnConsole(struct Date* ptrDate){
        printf("%d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
    }
    void acceptDateFromConsole(struct Date* ptrDate){
        scanf("%d/%d/%d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
    }
};

int main(){
    struct Date date;
    date.initDate(&date);
    date.printDateOnConsole(&date);
    date.acceptDateFromConsole(&date);
    date.printDateOnConsole(&date);
    return 0;
}