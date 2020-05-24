// Задание 7.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

class Person
{

public:
    string surname;
    string email;
    string phonenumber;

    void setPerson(string sn, string em, string pn)
    {
        surname = sn;
        email = em;
        phonenumber = pn;
    }
    void getPerson()
    {
        cout << surname << endl;
        cout << email << endl;
        cout << phonenumber << endl;
    }
};
//------------------------------------------------------------------------------------------------------
class Student : public Person
{
    string studentnumber;
    string averagemark;
public:
    void setStudent(string sn, string am)
    {
        studentnumber = sn;
        averagemark = am;
    }
    void getStudent()
    {
        cout << studentnumber << endl;
        cout << averagemark << endl;

    }

};
//-------------------------------------------------------------------------------------------------------------
class MIREA :public Student, public Worker
{









};



class Worker : public Person
{

    int experience, salaryh, hours, salary;
    double premy;
public:
    void setWorker(string sn, int exp, int sh, int h)
    {
        surname = sn;
        experience = exp;
        salaryh = sh;
        hours = h;
        double p;
        int s;
        s = sh * h;
        salary = s;
        if (exp < 1) p = 0;
        else
        {
            if (exp >= 1 && exp < 3) p = 0.05 * s;
            else
            {
                if (exp >= 3 && exp < 5) p = 0.08 * s;
                else
                {
                    if (exp >= 5) p = 0.15 * s;
                }
            }
        }
        premy = p;
    }
    void getWorker()
    {
        cout << "Worker's surname" << surname << endl << "Experience is " << experience << endl << "Hourly wage is " << salaryh << endl << surname << " has worked " << hours << " hours" << endl << "Salary is " << salary << endl << "Premy is " << premy << endl;


    }
};
//----------------------------------------------------------------------------------------------
int main()
{
    string surname;
    string email;
    string phonenumber;

    cout << "Enter person's name: "; cin >> surname; cout << endl;
    cout << "Enter person's email: "; cin >> email; cout << endl;
    cout << "Enter person's phone number: "; cin >> phonenumber; cout << endl;

    Person objperson;
    objperson.setPerson(surname, email, phonenumber);
    objperson.getPerson();
    //-------------------------------------------------------------------------------------------------------
    string studentnumber;
    string averagemark;

    cout << "Enter studen's number"; cin >> studentnumber; cout << endl;
    cout << "Enter studen's average mark"; cin >> averagemark; cout << endl;

    Student objstudent;
    objstudent.setStudent(studentnumber, averagemark);
    objstudent.getStudent();
    //-------------------------------------------------------------------------------------------------------

    int experience, salaryh, hours, salary, premy;

    cout << "Enter worker's experience: "; cin >> experience; cout << endl;
    cout << "Enter worker's hourly wag: "; cin >> salaryh; cout << endl;
    cout << "Enter how much hours " << surname << " has worked: "; cin >> hours; cout << endl;
    Worker objWorker;
    objWorker.setWorker(surname, experience, salaryh, hours);
    objWorker.getWorker();
    system("pause");
    return 0;
}

