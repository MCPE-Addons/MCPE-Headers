#pragma once

class App {
public: 
	virtual ~App();
	virtual void audioEngineOn();
	virtual void audioEngineOff();
	virtual void muteAudio();
	virtual void unMuteAudio();
	virtual void destroy();
	virtual void loadState(void *, int);
	virtual void saveState(void * *, int *);
	virtual void useTouchscreen();
	virtual void setTextboxText(std::string const &);
	virtual void draw();
	virtual void update();
	virtual void setUISizeAndScale(int, int, float);
	virtual void setRenderingSize(int, int);
	virtual void quit();
	virtual void wantToQuit();
	virtual void init();
};