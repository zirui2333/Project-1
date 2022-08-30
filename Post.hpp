//
//  Post.hpp
//  Project 1
//
//  Created by Zirui Zheng  on 8/30/22.
//

#ifndef Post_hpp
#define Post_hpp

#include <iostream>
#include <ctime>
class Post{
private:
    std::string title;
    std::string body;
    time_t time_stamp_;
    
    
public:
    Post(std::string t,std::string b):title(t),body(b),time_stamp_(time(0)){}
    void setTitle(const std::string t);
    std::string getTitle()const;
    void setBody(const std::string b);
    std::string getBody()const;
    void getTimeStamp()const;
    void displayPost()const;
};
#endif /* Post_hpp */
