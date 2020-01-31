#include <iostream>
#include <string>

using namespace std;

class Guest{ //the declaration of class of Guests which contains four private attributes
private:
    string guestName;
    string guestGender;
    int guestAge;
    int roomNumber;
public:
    string getGuestName();
    string getGuestGender();
    int getGuestAge();
    int getRoomNumber();
    void setGuestName(string name);
    void setGuestGender(string gender);
    void setGuestAge(int age);
    void setRoomNumber(int roomNo);
};

//get and set methods for every attribute so as to be able to use them in the main function
string Guest::getGuestName() {
    return this->guestName;
}
string Guest::getGuestGender() {
    return this->guestGender;
}
int Guest::getGuestAge() {
    return this->guestAge;
}
int Guest::getRoomNumber() {
    return this->roomNumber;
}

void Guest::setGuestName(string name) {
    guestName = name;
}
void Guest::setGuestGender(string gender) {
    guestGender = gender;
}
void Guest::setGuestAge(int age) {
    guestAge = age;
}
void Guest::setRoomNumber(int roomNo) {
    roomNumber = roomNo;
}
