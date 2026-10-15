#include <stdio.h>

typedef struct dept
{
    int students;
    int teachers;
    int medals;
    int highestpack;
    // class indept;
} dept;

typedef struct class
{

    int boys;
    int girls;
} class;

int main()
{
    dept rai;
    rai.highestpack = 54;
    rai.medals = 87;
    rai.students = 349;
    rai.teachers = 54;
    printf("%d\n", rai.medals);
    // rai.indept.girls = 149;
    // rai.indept.boys = 200;
    dept* x = &rai;
    (*x).medals = 37;  //! bracket needed
    x->medals = 37;  //! or like this
    printf("%d", rai.medals);

    return 0;
}