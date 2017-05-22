#include <iostream>
#include <GLFW/glfw3.h>


int main()
{
	//GLFWを初期化する
	if (glfwInit() == GL_FALSE)
	{
		//初期化に失敗した
		std::cerr << "Can't initialize GLFW" << std::endl;
		return 1;
	}

	//ウィンドウを作成する
	GLFWwindow *const window(glfwCreateWindow(640, 480, "Hello!", NULL, NULL));
	if (window == NULL)
	{
		//ウィンドウが作成できなかった
		std::cerr << "Can't create GLFW window." << std::endl;
		glfwTerminate();
		return 1;
	}
	//作成したウィンドウをopenglの処理対処とする
	glfwMakeContextCurrent(window);
	//背景色を指定
	glClearColor(1.0f, 0.1f, 1.0f, 0.0f);




	//ウィンドウが開いている間繰り返す
	while (glfwWindowShouldClose(window) == GL_FALSE)
	{
		//ウィンドウを消去する
		glClear(GL_COLOR_BUFFER_BIT);
		


		//カラーバッファを入れ替える
		glfwSwapBuffers(window);

		//イベントを取り出す
		glfwWaitEvents();
	}

}