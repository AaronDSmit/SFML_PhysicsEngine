#ifndef Application2D_H
#define Application2D_H

#include <Application.h>

class Application2D :public Application
{
public:
	Application2D() : Application() {}
	virtual ~Application2D();

	virtual int onStartup() override;
	virtual void onShutdown() override;
	virtual void update() override;
	virtual void draw() override;
};

#endif // !Application2D_H