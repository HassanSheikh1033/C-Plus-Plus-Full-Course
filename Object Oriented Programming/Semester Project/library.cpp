#include <iostream>
#include <string>
using namespace std;

class User {
protected:
    string name;
    int userID;

public:
    User(std::string name, int userID) {
    	this->name = name;
		this->userID = userID;
		}

    virtual void displayInfo() {
        cout << "Name: " << name << ", UserID: " << userID << endl;
    }

//    virtual ~User() = default;
};




class Student : public User {
private:
    int grade;

public:
    Student(string name, int userID, int grade) : User(name, userID) {
	    this->grade = grade;
	}

    void displayInfo()  override {
        cout << "Student - Name: " << name << ", UserID: " << userID << ", Grade: " << grade << endl;
    }
};





class Teacher : public User {
private:
    string subject;

public:
    Teacher(string name, int userID, string subject) : User(name, userID) {
	    this->subject = subject;
	}

    void displayInfo()  override {
        cout << "Teacher - Name: " << name << ", UserID: " << userID << ", Subject: " << subject << endl;
    }
};





class Media {
protected:
    string title;
    int mediaID;

public:
    Media(string title, int mediaID){
	this->title = title;
	this->mediaID = mediaID;
	}

    virtual void displayInfo(){
        cout << "Title: " << title << ", MediaID: " << mediaID << endl;
    }
};




class Book : public Media {
private:
    string author;

public:
    Book(string title, int mediaID, string author) : Media(title, mediaID){
	this->author = author
	}

    void displayInfo() override {
        cout << "Book - Title: " << title << ", MediaID: " << mediaID << ", Author: " << author << endl;
    }
};




class Magazine : public Media {
private:
    int issueNumber;

public:
    Magazine(string title, int mediaID, int issueNumber) : Media(title, mediaID){
	this->issueNumber = issueNumber;
	}

    void displayInfo() override {
        cout << "Magazine - Title: " << title << ", MediaID: " << mediaID << ", Issue Number: " << issueNumber << endl;
    }
};




class Library {
private:
    User** users;
    Media** mediaCollection;
    int userCount;
    int mediaCount;
    int userCapacity;
    int mediaCapacity;

    void resizeUsers() {
        userCapacity *= 2;
        User** newUsers = new User*[userCapacity];
        for (int i = 0; i < userCount; ++i) {
            newUsers[i] = users[i];
        }
        delete[] users;
        users = newUsers;
    }

    void resizeMedia() {
        mediaCapacity *= 2;
        Media** newMedia = new Media*[mediaCapacity];
        for (int i = 0; i < mediaCount; ++i) {
            newMedia[i] = mediaCollection[i];
        }
        delete[] mediaCollection;
        mediaCollection = newMedia;
    }

public:
    Library() : userCount(0), mediaCount(0), userCapacity(10), mediaCapacity(10) {
        users = new User*[userCapacity];
        mediaCollection = new Media*[mediaCapacity];
    }

    void addUser(User* user) {
        if (userCount == userCapacity) {
            resizeUsers();
        }
        users[userCount++] = user;
    }

    void addMedia(Media* media) {
        if (mediaCount == mediaCapacity) {
            resizeMedia();
        }
        mediaCollection[mediaCount++] = media;
    }

    void displayUsers() {
        for (int i = 0; i < userCount; ++i) {
            users[i]->displayInfo();
        }
    }

    void displayMedia() {
        for (int i = 0; i < mediaCount; ++i) {
            mediaCollection[i]->displayInfo();
        }
    }

    ~Library() {
        for (int i = 0; i < userCount; ++i) {
            delete users[i];
        }
        for (int i = 0; i < mediaCount; ++i) {
            delete mediaCollection[i];
        }
        delete[] users;
        delete[] mediaCollection;
    }
};






int main() {
    Library library;

    User* student1 = new Student("Alice", 1001, 10);
    User* teacher1 = new Teacher("Mr. Smith", 2001, "Mathematics");

    Media* book1 = new Book("C++ Programming", 3001, "Bjarne Stroustrup");
    Media* magazine1 = new Magazine("National Geographic", 4001, 202);

    library.addUser(student1);
    library.addUser(teacher1);

    library.addMedia(book1);
    library.addMedia(magazine1);

    cout << "Library Users:\n";
    library.displayUsers();

    cout << "\nLibrary Media:\n";
    library.displayMedia();

    return 0;
}


