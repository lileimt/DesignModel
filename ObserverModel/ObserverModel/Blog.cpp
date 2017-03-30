#include "Blog.h"

Blog::Blog(){

}

Blog::~Blog(){

}

void Blog::notify(){
	auto it = m_observers.begin();
	for (; it != m_observers.end(); it++){
		(*it)->update();
	}
}

void Blog::Attach(Observer *observer){
	m_observers.push_back(observer);
}

void Blog::Detach(Observer	*observer){
	m_observers.remove(observer);
}

void Blog::setStatus(string str){
	m_status = str;
}

string Blog::getStatus(){
	return m_status;
}


BlogDemo::BlogDemo()
{
}

BlogDemo::~BlogDemo()
{
}