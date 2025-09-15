
class GLFWwindow;

class App
{
private:
    int windowWidth = 1920, windowHeight = 1080;
    GLFWwindow* window;
public:
    void Initiate();
    void Run();
    void Close();
};