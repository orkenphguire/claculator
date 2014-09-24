#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowShape(510,620);
	ofSetWindowPosition(300,300);
	ofBackground(255,255,255);
	ofSetFrameRate(60);
	font.loadFont("arial.ttf",60);
	fontA.loadFont("arial.ttf",40);
	fontC.loadFont("arial.ttf",20);
	strcpy(ans,"0");
	strcpy(cal,"");
	front=back=0;
	posX=posY=0;
	flagC=flagV=0;
	finI=0;
	finD=0.0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0,0,0);
	//answer flame
	ofRect(10,10,490,100);
	//button flame
	ofRect(10,120,490,490);
	ofSetColor(255,255,255);
	//answer
	ofRect(20,20,470,80);
	//0
	ofRect(140,490,110,110);	
	//c
	ofRect(20,490,110,110);	
	//1
	ofRect(20,370,110,110);	 
	//2
	ofRect(140,370,110,110);
	//3
	ofRect(260,370,110,110);
	//4
	ofRect(20,250,110,110);
	//5
	ofRect(140,250,110,110); 
	//6
	ofRect(260,250,110,110);   
	//7
	ofRect(20,130,110,110);	  
	//8
	ofRect(140,130,110,110);   
	//9
	ofRect(260,130,110,110);
	//=
	ofRect(260,490,110,110); 
	//+
	ofRect(380,490,110,110); 
	//-
	ofRect(380,370,110,110);  
	//*
	ofRect(380,250,110,110);
	///
	ofRect(380,130,110,110);   
	//number print
	ofSetColor(0,0,0);	
	font.drawString("0",170,575);
	font.drawString("C",50,575);
	font.drawString("1",50,455);  
	font.drawString("2",170,455);
	font.drawString("3",290,455);
	font.drawString("4",50,335);
	font.drawString("5",170,335);
	font.drawString("6",290,335);
	font.drawString("7",50,215);
	font.drawString("8",170,215);
	font.drawString("9",290,215);
	font.drawString("=",290,575);
	font.drawString("+",410,575);
	font.drawString("-",420,445);
	font.drawString("*",417,350);
	font.drawString("/",420,215);
	fontA.drawString(ans,100,80);
	fontC.drawString(cal,470,40);
	ofSetColor(150,150,150);
	ofCircle(posX,posY,15);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
	posX=x,posY=y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	if(x>=140&&x<=250&&y>=490&&y<=600){
		if(flagV==0){
			front=front*10+0;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+0;
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=20&&x<=130&&y>=370&&y<=480){
		if(flagV==0){
			front=front*10+1;  
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+1;
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=140&&x<=250&&y>=370&&y<=480){
		if(flagV==0){
			front=front*10+2;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+2;	 
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=260&&x<=370&&y>=370&&y<=480){
		if(flagV==0){
			front=front*10+3;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+3;	
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=20&&x<=130&&y>=250&&y<=360){
		if(flagV==0){
			front=front*10+4;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+4;	
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=140&&x<=250&&y>=250&&y<=360){
		if(flagV==0){
			front=front*10+5;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+5;	
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=260&&x<=370&&y>=250&&y<=360){
		if(flagV==0){
			front=front*10+6;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+6;	 
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=20&&x<=130&&y>=130&&y<=240){
		if(flagV==0){
			front=front*10+7;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+7;	 
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=140&&x<=250&&y>=130&&y<=240){
		if(flagV==0){
			front=front*10+8;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+8;	 
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=260&&x<=370&&y>=130&&y<=240){
		if(flagV==0){
			front=front*10+9;
			sprintf(ans,"%d",front);
		}
		else{
			back=back*10+9;	 
			sprintf(ans,"%d",back);
		}
	}
	else if(x>=380&&x<=490&&y>=490&&y<=600){
		sprintf(cal,"+");
		flagC=1;
		flagV=1;
	}
	else if(x>=380&&x<=490&&y>=370&&y<=480){
		sprintf(cal,"-");
		flagC=2;
		flagV=1;
	}
	else if(x>=380&&x<=490&&y>=250&&y<=360){
		sprintf(cal,"*");
		flagC=3;
		flagV=1;
	}
	else if(x>=380&&x<=490&&y>=130&&y<=240){
		sprintf(cal,"/");
		flagC=4;
		flagV=1;
	}
	else if(x>=20&&x<=130&&y>=490&&y<=600){
		sprintf(ans,"0");
		sprintf(cal,"");
		front=back=flagC=flagV=0;
	}	 
	//answer
	else if(x>=260&&x<=370&&y>=490&&y<=600){
		if(flagC==1){
			finI=front+back;
			sprintf(ans,"%d",finI);
		}			
		else if(flagC==2){
			finI=front-back;
			sprintf(ans,"%d",finI);
		}
		else if(flagC==3){
			finI=front*back;
			sprintf(ans,"%d",finI);
		}
		else if(flagC==4){
			finD=(double)front/(double)back;
			sprintf(ans,"%f",finD);
		}
		//reset
		front=finI;
		flagC=flagV=back=0;
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}