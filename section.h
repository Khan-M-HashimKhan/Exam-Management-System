#include"Person.h"

class section
{
    char* id = new char[4];
    instructor* teacher;
    Course* subject;
    arrays<student*> stds;

public:
    section (){}
    section( instructor* t, Course* s, string i)
    {
        for (int x = 0; x < 4; x++)
            id[x] = i[x];
        teacher = t ;
        subject = s ;
    }

    void add_std(student* std)
    {
        stds.add_end(std);
    }

    char* get_id()
    {
        /*string temp;
        temp = id[0] + id[1] + id[2] + id[3];*/
        return id;
    }

    char* get_cor()
    {
        return subject->get_id();
    }

    char* get_ins()
    {
        return teacher->get_id();
    }

    void print()
    {
        cout << "Section: ";
        for (int x = 0; x < 4; x++)
            cout << id[x];
        cout<<endl;
        cout << "Course:  ";
        subject->print_name();
        cout<< endl;
        cout << "Instr.:  ";
        teacher->print_name();
        cout << endl;

    }

};