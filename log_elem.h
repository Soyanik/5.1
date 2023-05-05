#ifndef LOG_ELEM_H
#define LOG_ELEM_H

class LogElement {
private:
	bool In1=false, In2=false;
protected:
	bool Res=false;
	virtual void calc()= 0;
public:
	void setIn1(bool a);
	void setIn2(bool a);
	bool getIn1() { return In1; }
	bool getIn2() { return In2; }
	bool getRes() { return Res; }
};

#endif
