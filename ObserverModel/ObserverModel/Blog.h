#ifndef _BLOG_H_
#define _BLOG_H_

#include "observer.h"
#include <list>
#include <string>
#include <iostream>
using namespace std;

class Blog{
public:
	Blog();
	virtual ~Blog();
	void Attach(Observer *observer);
	void Detach(Observer *observer);
	void notify();
	virtual void setStatus(string str);
	virtual string getStatus();

	string m_status;
private:
	
	list<Observer *> m_observers;
};

class BlogDemo:public Blog
{
public:
	BlogDemo();
	~BlogDemo();
	void setStatus(string str);
	string getStatus();
private:

};

#endif