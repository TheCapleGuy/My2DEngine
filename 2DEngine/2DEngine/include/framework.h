#ifndef _FRAMEWORK_H_
#define _FRAMEWORK_H_

#include <fstream>
#include "animation.h"
#include "command.h"

class GLF
{
public:
	Command command;
	int hDirection, vDirection;
	double currentFrame, deltaTime, lastFrame = 0;
	std::vector<Sprite> mSpriteList;
	animate Animation;
	glm::mat4 m_MVP;
	GLFWwindow* window;
	int InitWindow(int screenWidth, int screenHeight, const char* title);
	void SetScreenColor(float a_red, float a_green, float a_blue, float a_alpha);
	void Shutdown();
	bool UpdateFramework();
	void SwapBuffers();
	void GetCursPos(double &xPos, double &yPos);
	GLuint CreateProgram(const char *a_vertex, const char *a_frag);
	GLuint CreateShader(GLenum a_eShaderType, const char *a_strShaderFile);
	GLuint MatrixIDTextured;
	GLuint frameProgram;

	void CreateAnimation(const char * a_fileName, AnimationType currentState, float width, float height);
	void LoadAnimationSprite(const char * a_fileName, AnimationType currentState);
	void DrawAnimatedSprite(AnimationType currentState);


	unsigned int CreateSprite(const char* a_fileName, int width, int height, GLuint frameProgram);
	void DrawSprites(unsigned int s);
	void MoveSprite(unsigned int s, glm::vec2 x_y);
	void UpdateVertex(unsigned int s, glm::vec2 x_y);
};
#endif