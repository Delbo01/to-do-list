#include <iostream>
#include "Date.h"
#include "ToDoList.h"
#include "Activity.h"
#include "Controller.h"

int main() {
    ToDoList list;
    Controller controller(&list);
    try {
        controller.write(2021,8,25,16,30,"inizio allenamneti", false);
        controller.write(2021,9,5,15,0,"inizio campionato",false);
        controller.print();
    }
    catch (std::out_of_range &e) {
        std::cerr<<e.what()<<std::endl;
    }
}
