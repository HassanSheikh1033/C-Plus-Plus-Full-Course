#include <iostream>
#include <string>
using namespace std;


class Post; 

class Comment {
private:
    string yourComment[4];
public:
    friend void GetdisplayPostDetails(Post& post, Comment& comment);
};



class Post {
private:
    string yourPost;
    friend void GetdisplayPostDetails(Post& post, Comment& comment);
};



void GetdisplayPostDetails(Post& post, Comment& comment) {
    cout << "Enter the post" << endl;
    cin >> post.yourPost;
    cout << "Enter the comment on post" << endl;
    for(int i = 0; i<4; i++){
    cin >> comment.yourComment[i] ;	
	}
    cout << "Your Post is " << post.yourPost << endl;
    cout << "Your comments are ";
     for(int i = 0; i<5; i++){
    cout<< comment.yourComment[i] <<endl;	
	}
}




int main() {
    Post *post = new Post(); 
    Comment* comment = new Comment();
    
    GetdisplayPostDetails(*post, *comment); 
    
    delete post; 
    delete comment; 
    
    return 0;
}





