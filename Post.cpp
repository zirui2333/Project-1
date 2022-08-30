//
//  Post.cpp
//  Project 1
//
//  Created by Zirui Zheng  on 8/30/22.
//

#include "Post.hpp"
void Post::setTitle(const std::string t){
    title=t;
}
std::string Post::getTitle()const{
    return title;
}

void Post::setBody(const std::string b){
    body=b;
}
std::string Post::getBody()const {
    return body;
}
void Post::getTimeStamp()const{
    char*dt=asctime(localtime(&time_stamp_));
    std::cout<<dt;
}
void Post::displayPost()const{
    std::cout<<getTitle()<<" posted at ";
    getTimeStamp();
    std::cout<<":"<<std::endl<<getBody()<<std::endl;
}
