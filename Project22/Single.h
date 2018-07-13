#include <iostream>
#include "Menu.h"


using namespace std;

class Application {
public:

	static Application& getInstance() {
		static Application app;
		return app;
	}

	void Start() {
		Menu a;
	}
private:

	Application() {  }

	Application(Application const&) = delete;

	~Application() {  }


	Application& operator= (Application const&) = delete;
};
