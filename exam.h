#include"section.h"
#include"room.h"

class Exam
{
private:
    Course* crs;
    room* r;
    instructor* invigilator;
    char d[10];
    char t[5];
    char *id =new char[4];

public:
    Exam(){}
    Exam(Course* c, room* rm , instructor* i, char dt[10], char td[5], char di[4])
    {
        crs=c;
        r=rm;
        invigilator=i;
        for (int x = 0; x < 10; x++)
            d[x] = dt[x];
        for (int x = 0; x < 5; x++)
            t[x] = td[x];
        for (int x = 0; x < 4; x++)
            id[x] = di[x];
    }

    void print()
    {
        cout << "EXAM ID: ";

        for (int x = 0; x < 4; x++)
            cout << id[x];

        cout << endl;

        cout << "COURSE:  ";

        for (int x = 0; x < 4; x++)
            cout << crs->get_id()[x];

        cout << endl;

        cout << "INVIG.:  ";

        for (int x = 0; x < 4; x++)
            cout << invigilator->get_id()[x];

        cout << endl;

        cout << "DATE:    ";

        for (int x = 0; x < 10; x++)
            cout << d[x];

        cout << endl;

        cout << "TIME:    ";

        for (int x = 0; x < 5; x++)
            cout << t[x];

        cout << endl;

        cout << "ROOM:    ";

        for (int x = 0; x < 4; x++)
            cout << r->get_id()[x];

        cout << endl;
    }
    char* get_id()
    {
        return id;
    }
    char* get_invg()
    {
        return invigilator->get_id();
    }
    char* get_cor()
    {
        return crs->get_id();
    }
};