#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "GL\glew.h"
//#include "GL\wglew.h"
//glew has to go first.
#include "GLFW\glfw3.h"

//Forward Decleration


enum KeyPressed{
	Zero = GLFW_KEY_0,
	One = GLFW_KEY_1,
	Two = GLFW_KEY_2,
	Three = GLFW_KEY_3,
	Four = GLFW_KEY_4,
	Five = GLFW_KEY_5,
	w = GLFW_KEY_W,
	a = GLFW_KEY_A,
	s = GLFW_KEY_S,
	d = GLFW_KEY_D,
	spacebar = GLFW_KEY_SPACE,
	esc = GLFW_KEY_ESCAPE,
	leftbutton = GLFW_MOUSE_BUTTON_LEFT,
	rightbutton = GLFW_MOUSE_BUTTON_RIGHT,
};

class Command
{
public:
	~Command(){};
	//virtual int excecute() = 0;
	void HandleInput(GLFWwindow* a_window);
	int horzAxis, vertAxis;
	bool IsKeyPressed(KeyPressed key){ return glfwGetKey(window, key); };
private:
	GLFWwindow* window;

	

};


//class MoveUpCommand : public Command
//{
//public:
//	virtual int excecute(){ return MoveUp(); };
//private:
//	int MoveUp();
//};
//
//class MoveDownCommand : public Command
//{
//public:
//	virtual int excecute(){ return MoveDown(); };
//private:
//	int MoveDown();
//};
//
//class MoveLeftCommand : public Command
//{
//public:
//	virtual int excecute(){return MoveLeft(); };
//private:
//	int MoveLeft();
//};
//
//class MoveRightCommand : public Command
//{
//public:
//	virtual int excecute(){return  MoveRight(); };
//private:
//	int MoveRight();
//};
//
//static class InputHandler
//{
//public:
//	void HandleInput(GLFWwindow* a_window)
//	{
//		window = a_window;
//		if (IsKeyPressed(w)) ButtonW_->excecute();
//		if (IsKeyPressed(a)) ButtonA_->excecute();
//		if (IsKeyPressed(s)) ButtonS_->excecute();
//		if (IsKeyPressed(d)) ButtonD_->excecute();
//	}
//
//	Command* ButtonW_;
//	Command* ButtonA_;
//	Command* ButtonS_;
//	Command* ButtonD_;
//
//private:
//	GLFWwindow* window;
//
//	bool IsKeyPressed(KeyPressed key){ return glfwGetKey(window, key); };
//};
#endif