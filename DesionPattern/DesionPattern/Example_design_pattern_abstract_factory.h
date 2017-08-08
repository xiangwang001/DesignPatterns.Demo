
//Name:工厂方法模式
//Function:每个Factory可以创建多种对象，
//		   这些对象可以作为单体单独生成使用，
//	       也可以协同工作组成复杂对象

#include <iostream>
#include <memory>
using namespace std;

//产品类A
class AbstractProductA
{
public:
	AbstractProductA(){}
	virtual ~AbstractProductA(){}
	virtual std::string GetResult(){return std::string("");}
};

class ConcreteProductA1 : public AbstractProductA
{
public:
	ConcreteProductA1();
	virtual ~ConcreteProductA1();
	
	virtual std::string GetResult();

};

class ConcreteProductA2 : public AbstractProductA
{
public:
	ConcreteProductA2();
	virtual ~ConcreteProductA2();
	
	virtual std::string GetResult();

};


//产品类B
class AbstractProductB
{
public:
	AbstractProductB(){}
	virtual ~AbstractProductB(){}
	virtual std::string GetResult() = 0;
};

class ConcreteProductB1 : public AbstractProductB
{
public:
	ConcreteProductB1();
	virtual ~ConcreteProductB1();
	
	virtual string GetResult();

};

class ConcreteProductB2 : public AbstractProductB
{
public:
	ConcreteProductB2();
	virtual ~ConcreteProductB2();
	
	virtual string GetResult();
};

//工厂类
class AbstractFactory
{
public:
	AbstractFactory(){}
	virtual ~AbstractFactory(){}
	virtual std::shared_ptr<AbstractProductA> CreateProductA() const = 0;
	virtual std::shared_ptr<AbstractProductB> CreateProductB() const = 0;
};

class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1();
	virtual ~ConcreteFactory1();

	virtual std::shared_ptr<AbstractProductA> CreateProductA() const;
	virtual std::shared_ptr<AbstractProductB> CreateProductB() const;
};

class ConcreteFactory2 : public AbstractFactory
{
public:
	ConcreteFactory2();
	virtual ~ConcreteFactory2();

	virtual std::shared_ptr<AbstractProductA> CreateProductA() const;
	virtual std::shared_ptr<AbstractProductB> CreateProductB() const;
};

class AbstractFactoryDesignPattern
{
public:
	AbstractFactoryDesignPattern();
	~AbstractFactoryDesignPattern();

	void CreateAbstractFactoryExample(const AbstractFactory& factory);
};