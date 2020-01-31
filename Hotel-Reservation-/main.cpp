#include <iostream>
#include <string>
#include "Hotel.h"


using namespace std;
//This function created three hotel instances and performs the booking of these hotels and displays their information.

int main() {
    Hotel firstHotel("Bosphorus Hotel", "Istanbul", 500);
    Hotel secondHotel("Hotel Elite", "Tokyo", 1000);
    Hotel thirdHotel("Hotel De Paris", "Monaco", 1500);

    int option;

    while(option != 3){ //if option chosen by user is not exit show menu and get the user's choice
        cout << "1. Book a room" << endl;
        cout << "2. Display hotels info" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your menu option" << endl;
        cin >> option;

        string hotelName;
        string guestName;
        string gender;
        int age;
        int roomNumber;

        switch (option){
            case 1:                                 //if user choice is book (1) we get the hotel information by user
                cout << "Enter hotel name" << endl;
                getline(cin>>ws, hotelName);
                cout << "Enter guest name" << endl;
                getline(cin>>ws, guestName);
                cout << "Enter gender" << endl;
                getline(cin>>ws, gender);
                cout << "Enter age" << endl;
                cin >> age;
                cout << "Enter room number" << endl;
                cin >> roomNumber;

                if(firstHotel.getName() == hotelName ){                  //if name given by user matches the hotels we check availability of rooms
                    if(firstHotel.getNumberOfAvailableRooms() > 0) {     // if there available rooms, we book it
                        firstHotel.bookRoom(guestName, age, gender, roomNumber);
                        //firstHotel.getGuests, then add this guest to that array
                        int numberOfAvailableRooms = firstHotel.getNumberOfAvailableRooms();
                        numberOfAvailableRooms--;                       //we decrease available rooms
                        firstHotel.setNumberOfAvailableRooms(numberOfAvailableRooms);
                        int numberOfGuests = firstHotel.getNumberOfGuests();
                        numberOfGuests++;                               //we increase number of guests of hotel
                        firstHotel.setNumberOfGuests(numberOfGuests);
                        firstHotel.displayInfo();                       // we display the info of the hotel
                    }
                    else{
                        cout<<"No available rooms."<<endl; //if there are no available rooms we show it
                    }
                }
                //We do the same for all three hotels
                if(secondHotel.getName() == hotelName ){
                    if(secondHotel.getNumberOfAvailableRooms() > 0) {
                        secondHotel.bookRoom(guestName, age, gender, roomNumber);
                        //firstHotel.getGuests, then add this guest to that array
                        int numberOfAvailableRooms = secondHotel.getNumberOfAvailableRooms();
                        numberOfAvailableRooms--;
                        secondHotel.setNumberOfAvailableRooms(numberOfAvailableRooms);
                        int numberOfGuests = secondHotel.getNumberOfGuests();
                        numberOfGuests++;
                        secondHotel.setNumberOfGuests(numberOfGuests);
                        secondHotel.displayInfo();
                    }
                    else{
                        cout<<"No available rooms."<<endl;
                    }
                }
                if(thirdHotel.getName() == hotelName){
                    if(thirdHotel.getNumberOfAvailableRooms() > 0) {
                        thirdHotel.bookRoom(guestName, age, gender, roomNumber);
                        //firstHotel.getGuests, then add this guest to that array
                        int numberOfAvailableRooms = thirdHotel.getNumberOfAvailableRooms();
                        numberOfAvailableRooms--;
                        thirdHotel.setNumberOfAvailableRooms(numberOfAvailableRooms);
                        int numberOfGuests = thirdHotel.getNumberOfGuests();
                        numberOfGuests++;
                        thirdHotel.setNumberOfGuests(numberOfGuests);
                        thirdHotel.displayInfo();
                    }
                    else{
                        cout<<"No available rooms."<<endl;
                    }
                }
                break;
            case 2: //If user chooses display, we display all hotels info
                firstHotel.displayInfo();
                secondHotel.displayInfo();
                thirdHotel.displayInfo();
                break;
            case 3: //if user chooses to exit, we exit
                exit(0);

            default:
                cout << "Enter 1, 2 or 3" << endl;
                break;
        }
    }
    return 0;
}