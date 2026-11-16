#inlude <iostream>
using namespace std;
 
class Person {
    protected:
    string name;
    int age;

    public:
    void inputPerson() {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter age: ";
        cin>>age;
    }
    void displayPerson() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        
    }

    
};
class Student : public Person {
    private:
    string admissionNumber;
    string studentClass;

    public:
    void inputStudent() {
        inputPerson();
        cout<<"Enter admission number: ";
        cin>>admissionNumber;
        cout<<"Enter class: ";
        cin>>studentClass;

    }
    void displayStudent() {
        displayPerson();
        cout<<"Admission Number: "<<admissionNumber<<endl;
        cout<<"Class: "<<studentClass<<endl;

    
    }
};
int main (){
    student s;
    cout<<"STUDENT REGISRATION"<<endl;
    s.inputStudent();
    cout<<"STUDENT DETAILS"<<endl;
    s.displayStudent();
    return 0;
}
