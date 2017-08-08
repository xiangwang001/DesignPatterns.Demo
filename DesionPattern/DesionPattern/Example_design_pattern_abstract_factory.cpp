#include "Example_design_pattern_abstract_factory.h"

//具体产品类A
ConcreteProductA1::ConcreteProductA1()
{
}

ConcreteProductA1::~ConcreteProductA1()
{
}

string ConcreteProductA1::GetResult()
{
	return "我是产品A1";
}

//具体产品A2
ConcreteProductA2::ConcreteProductA2()
{

}

ConcreteProductA2::~ConcreteProductA2()
{

}

std::string ConcreteProductA2::GetResult()
{
	return "我是产品A2";
}

//具体产品B1
ConcreteProductB1::ConcreteProductB1()
{

}

ConcreteProductB1::~ConcreteProductB1()
{

}

std::string ConcreteProductB1::GetResult()
{
	return "我是产品B1";
}


//具体产品B2
ConcreteProductB2::ConcreteProductB2()
{

}

ConcreteProductB2::~ConcreteProductB2()
{

}

std::string ConcreteProductB2::GetResult()
{
	return "我是产品B2";
}


//具体工厂类1
ConcreteFactory1::ConcreteFactory1()
{

}

ConcreteFactory1::~ConcreteFactory1()
{				         

}

std::shared_ptr<AbstractProductA> ConcreteFactory1::CreateProductA()const
{
	return std::make_shared<ConcreteProductA1>();
}

std::shared_ptr<AbstractProductB> ConcreteFactory1::CreateProductB()const
{
	return std::make_shared<ConcreteProductB1>();
}


//具体工厂类2
ConcreteFactory2::ConcreteFactory2()
{

}

ConcreteFactory2::~ConcreteFactory2()
{

}

std::shared_ptr<AbstractProductA> ConcreteFactory2::CreateProductA()const
{
    return std::make_shared<ConcreteProductA2>();
}

std::shared_ptr<AbstractProductB> ConcreteFactory2::CreateProductB()const
{
    return std::make_shared<ConcreteProductB2>();
}


//抽象工厂模式类
AbstractFactoryDesignPattern::AbstractFactoryDesignPattern()
{

}

AbstractFactoryDesignPattern::~AbstractFactoryDesignPattern()
{

}

void AbstractFactoryDesignPattern::CreateAbstractFactoryExample(const AbstractFactory& factory)
{
	std::shared_ptr<AbstractProductA> productA = factory.CreateProductA();
	std::shared_ptr<AbstractProductB> productB = factory.CreateProductB();
	std::string resultProductA = productA->GetResult();
	std::string resultProductB = productB->GetResult();
	cout<<"Output:" << resultProductA.c_str() << ";" << resultProductB.c_str() << endl;
}

int main()
{
	auto firstAbstractFactory = ConcreteFactory1();
	auto secondAbstractFactory = ConcreteFactory2();
	auto abstractFactoryDesignPattern = AbstractFactoryDesignPattern();

	abstractFactoryDesignPattern.CreateAbstractFactoryExample(firstAbstractFactory);
	abstractFactoryDesignPattern.CreateAbstractFactoryExample(secondAbstractFactory);
    system("pause");

	return 0;
}