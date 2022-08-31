//
//  Account.cpp
//  Project 1
//
//  Created by Zirui Zheng  on 8/30/22.
//

#include "Account.hpp"
void Account::setUsername(const std::string u){
    username=u;
}
std::string Account::getUsername()const{
    return username;
}
void Account::setPassword(const std::string p){
    password=p;
}
std::string Account::getPassword()const{
    return password;
}
bool Account::addPost(const std::string&t,const std::string&b){
    if(t!=""&&b!=""){
        Post p(t,b);
        dt.push_back(p);
        return true;
    }
    return false;
}
void Account::viewPosts()const{
    for(auto ele:dt){
        ele.displayPost();
    }
}
