#include <Nathy.h>

class Beachbox : public Nathy::Application
{
public:
	Beachbox()
	{

	}
	~Beachbox()
	{

	}
};

Nathy::Application* Nathy::CreateApplication()
{
	return new Beachbox();
}