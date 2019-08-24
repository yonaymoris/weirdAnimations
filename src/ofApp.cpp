#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    float time = ofGetElapsedTimef();
    
    for(int i = 0; i < 900; i++) {
        ofDrawLine(0 + ofGetWidth() * sin(i * 0.03 + time), 0 + ofGetHeight() * sin(i * 0.04 + time), ofGetWidth() - sin(i * 0.02 + time), ofGetHeight() - sin(i * 0.05 + time));
//        ofDrawTriangle(r1 * sin(i * 0.01 + time), r1 + i, r2 * sin(i * 0.03 + time), r2 + i, r3 * sin(i * 0.05 + time), r3 + i);
//        ofDrawCircle(500 + 100 * sin(i * 0.1 + time), 50 + i, 10 + 40 * cos(i * 0.04 + time));
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
