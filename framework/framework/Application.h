#ifndef Application_H
#define Application_H

/// <summary>
/// This is the pure-virtual base class of an application Window with SFML. Derive from this class for your own applications.
/// </summary>

class Application
{
public:
	Application();
	virtual ~Application() = default;

	// creates a window and begins the game loop which calls update() and draw() repeatedly
	// it first calls onStartup() and if that succeeds it then starts the loop,
	// ending with onShutdown() if m_shouldQuit is true
	int run(const char* a_windowName, int a_width, int a_height, bool a_fullscreen);

	// These need to be implemented by your derived application class
	virtual void update() = 0;
	virtual void draw() = 0;
	virtual int onStartup() = 0;
	virtual void onShutdown() = 0;

private:

	// Window related variables
	int m_width;
	int m_height;
	bool m_fullscreen;

	// if set to false, the main game loop will exit
	bool m_shouldQuit;

	// Frame time
	float m_elapsedTime;

	// delta time
	float m_dt;

	unsigned int m_fps;
};

#endif // !Application_H