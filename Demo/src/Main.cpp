#include <glm/glm.hpp>
#include "App.hpp"
int main()
{
    // return 1;
    App app = App();
    app.Initiate();
    app.Run();
    app.Close();
}