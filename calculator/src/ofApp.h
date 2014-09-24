#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
private:
	ofTrueTypeFont font,fontA,fontC;
	char ans[100],cal[100];
	int front,back,flagC,flagV,finI;
	double finD;
	float posX,posY;
public:
	void setup();
	void update();
	void draw();
	
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
};
