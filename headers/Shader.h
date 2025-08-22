#pragma once
#define SHADER_H

//external libraries
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

//built in libraries
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>


class Shader {
public:
	//the program ID
	unsigned int ID;

	//Constructor that reads and builds the shader
	Shader(const char* vertexPath, const char* fragmentPath);

	//use/activate the shader
	void use() const;

	//utility uniform functions
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
	void setFloat(const std::string& name, float value1, float value2) const;
	void setFloat(const std::string& name, float value1, float value2, float value3) const;
	void setFloat(const std::string& name, float value1, float value2, float value3, float value4) const;
	void setMat4(const std::string& name, glm::mat4 value) const;

}; 