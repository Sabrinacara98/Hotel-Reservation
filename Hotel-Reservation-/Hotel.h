#include <string>
#include <iostream>
#include "Guest.h"

using namespace std;

class Hotel { //the class of Hotel contains 6 attributes
private:
    string name;
    string city;
    int numberOfRooms;
    int numberOfAvailableRooms;
    int numberOfGuests;
    Guest guests[1000];


public:
    Hotel(string name, string city, int numberOfRooms);
    ~Hotel() ;
    string getName();
    string getCity();
    int getNumberOfRooms();
    int getNumberOfAvailableRooms();
    void setNumberOfAvailableRooms(int availableRooms);
    int getNumberOfGuests();
    void setNumberOfGuests(int noOfGuests);
    void displayInfo();  //a function to display the hotel's info on screen
    void bookRoom(string guestName, int age,string gender, int roomNumber); // a function to book a room if empty


};

Hotel::Hotel(string name, string city, int numberOfRooms) { // declaration of constructor, set name city and number of rooms, rest is zero
    this->name = name;
    this->city = city;
    this->numberOfRooms = numberOfRooms;
    this->numberOfAvailableRooms = numberOfRooms;
    this->numberOfGuests = 0;
}
Hotel:: ~Hotel() { //destructor

}
//get and set methods for every attribute so as to be able to use them in the main function
string Hotel::getName() {
    return this->name;
}
string Hotel::getCity() {
    return this->city;
}

int Hotel::getNumberOfRooms() {
    return this->numberOfRooms;
}
int Hotel ::getNumberOfAvailableRooms() {
    return this->numberOfAvailableRooms;
}
int Hotel ::getNumberOfGuests() {
    return this->numberOfGuests;
}
void Hotel::setNumberOfAvailableRooms(int availableRooms) {
    numberOfAvailableRooms = availableRooms;
}
void Hotel::setNumberOfGuests(int noOfGuests) {
    numberOfGuests = noOfGuests;
}

void Hotel::displayInfo() {  //This function displays all information about the current hotel
    cout << "Hotel name: " << getName() << endl;
    cout << "Hotel city: " << getCity() << endl;
    cout << "Number of rooms: "<< getNumberOfRooms() << endl;
    cout << "Number of available rooms: " << getNumberOfAvailableRooms() <<endl;
    cout << "Number of guests: " << getNumberOfGuests() << endl;
    cout << "Guest Info: " << endl;
    for(int i = 0; i <numberOfGuests; i++){
        cout<<i+1<<". "<<guests[i].getGuestName()<<" , "<<guests[i].getGuestGender() <<" , room no: "<<guests[i].getRoomNumber()<<endl;
    }
    cout << endl;
}

int i = 0;
void Hotel::bookRoom(string guestName, int age, string gender, int roomNumber) { //This function checks if a room has been booked before
    if(guests->getRoomNumber() != roomNumber) {
        guests[i].setGuestName(guestName);
        guests[i].setGuestGender(gender);
        guests[i].setGuestAge(age);
        guests[i].setRoomNumber(roomNumber);
        i++;
        cout<<"Booking Successful."<<endl; // if room is available, it books it
    }
    else{
        cout<<"Room not available."<<endl;//otherwise it shows its unavailable
        exit(0);
    }

}

