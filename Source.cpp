#include <iostream>
#include <GLFW/glfw3.h>


int main()
{
	//GLFW������������
	if (glfwInit() == GL_FALSE)
	{
		//�������Ɏ��s����
		std::cerr << "Can't initialize GLFW" << std::endl;
		return 1;
	}

	//�E�B���h�E���쐬����
	GLFWwindow *const window(glfwCreateWindow(640, 480, "Hello!", NULL, NULL));
	if (window == NULL)
	{
		//�E�B���h�E���쐬�ł��Ȃ�����
		std::cerr << "Can't create GLFW window." << std::endl;
		glfwTerminate();
		return 1;
	}
	//�쐬�����E�B���h�E��opengl�̏����Ώ��Ƃ���
	glfwMakeContextCurrent(window);
	//�w�i�F���w��
	glClearColor(1.0f, 0.1f, 1.0f, 0.0f);




	//�E�B���h�E���J���Ă���ԌJ��Ԃ�
	while (glfwWindowShouldClose(window) == GL_FALSE)
	{
		//�E�B���h�E����������
		glClear(GL_COLOR_BUFFER_BIT);
		


		//�J���[�o�b�t�@�����ւ���
		glfwSwapBuffers(window);

		//�C�x���g�����o��
		glfwWaitEvents();
	}

}