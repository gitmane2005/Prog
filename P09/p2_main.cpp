#include <iostream>
#include "Date.h"
#include "Person.h"
#include <vector>

using namespace std;

void born_before(const vector<Person>& persons, const Date& date){
    date.show();
    cout << ": ";
    for(Person p : persons){
        Date a = p.get_birth_date();
        if(a.is_before(date)){
            p.show();
            cout << " ";
        }
    }
}