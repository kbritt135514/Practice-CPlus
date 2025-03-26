#include  <iostream>
#include <vector>
#include <string>

using namespace std;

class Critter {
   private:
      string name;
      int age;

   public: 
   Critter(string n, int a) : name(n) , age(a) {}

   void speak() {
      cout << "Howdy my name is " << name << " and I am "<< age << " years old" <<endl;
   }

   string getName() const {
      return name;
   }

   int getAge() const {
      return age;
   }
};


int main() {
   vector<Critter*> farm;

   int numCritters;

   cout << "How many animals you got on your farm????: ";
   cin >> numCritters;


   for (int i = 0; i < numCritters; i++) {
      string name;
      int age;

      cout << "\nCritter #" << (i + 1) << " name: ";
      cin >> name;

      cout << "Critter #" << (i + 1) << " age: ";
      cin >> age;


      farm.push_back(new Critter(name, age));

      

   }


   for (Critter* c : farm) {
         c->speak();
     }
 
     
     for (Critter* c : farm) {
         delete c; 
     }
     farm.clear();
 
   return 0;



}