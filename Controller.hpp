#pragma once
#include "Model.hpp"
#include "View.hpp"
class Controller {
    Model& model;
    View& view;
public:
    Controller(Model& m, View& v): 
        model(m), 
        view(v) {}
    void updateData(int value) {
        model.setData(value);
        view.display(model.getData());
    }

};