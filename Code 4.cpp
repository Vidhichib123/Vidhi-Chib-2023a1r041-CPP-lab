# include <iostream>
using namespace std;
class Program //class name
{
    public:Program() //Default Constructor
    {
        cout <<" Default Constructor ";
    }
    public: ~Program() //Default Constructor
    {
        cout<<"\n Destructor";
    }
    public: void display()
    {
        cout<<"\n Hi";
    }
};
int main()
{
    Program obj; //class object
    obj.display();
  return 0;
}
