#include "Model.hpp"
#include "View.hpp"
#include "Controller.hpp"
int main() {
    Model model;
    View view;
    Controller controller(model, view);

    controller.updateData(10);
    controller.updateData(20);

    return 0;
}
