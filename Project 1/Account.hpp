//
//  Account.hpp
//  Project 1
//
//  Created by Zirui Zheng  on 8/30/22.
//

#ifndef Account_hpp
#define Account_hpp

#include "Post.hpp"
#include <vector>

class Account{
private:
    std::string username;
    std::string password;
    std::vector<Post>dt;
    
public:
    Account(){}
    Account(std::string u,std::string p):username(u),password(p){}
    void setUsername(const std::string u);
    std::string getUsername()const;
    void setPassword(const std::string p);
    std::string getPassword()const;
    bool addPost(const std::string&t,const std::string&b);
    void viewPosts()const;
};

#endif /* Account_hpp */
