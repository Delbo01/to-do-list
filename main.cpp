#include <iostream>
#include "Date.h"
#include "ToDoList.h"
#include "Activity.h"
#include "AllList.h"


int main() {
    ToDoList list1("Università");
    ToDoList list2("Acquisti");
    ToDoList list3("Default");
    AllList allList;


    try {
        Date date1(2021, 9, 13, 0, 0);
        std::unique_ptr<Activity> task1(new Activity(&date1, "appello lab.programmazione", false));
        list1.addActivity(std::move(task1));

        Date date2(2021, 9, 7, 14, 30);
        std::unique_ptr<Activity> task2(new Activity(&date2, "appello anaisi 1", false));
        list1.addActivity(std::move(task2));

        Date date3(2021,9,20,8,40);
        std::unique_ptr<Activity> task3(new Activity(&date3,"inizio lezioni anno accademico 2021/2022", false));
        list1.addActivity(std::move(task3));

        Date date4(2021, 9, 11, 16, 30);
        std::unique_ptr<Activity> task4(new Activity(&date4, "portare il gatto dal veterinario", false));
        list3.addActivity(std::move(task4));

        Date date5(2021,11,30,0,0);
        std::unique_ptr<Activity>task5(new Activity(&date5,"scadenza abbonamento palestra", false));
        list3.addActivity(std::move(task5));

        Date date6(2021,10,1,0,0);
        std::unique_ptr<Activity>task6(new Activity(&date6,"comprare regalo di compleanno", false));
        list2.addActivity(std::move(task6));

        Date date7(2021,9,5,16,30);
        std::unique_ptr<Activity>task7(new Activity(&date7,"comprare sneakers",false));
        list2.addActivity(std::move(task7));

        //list1.removeActivity(std::move(task2));
        //task2->setDone(true);

        allList.add(&list1);
        allList.add(&list2);
        allList.add(&list3);

        std::cout<<"All activity of list Università are:"<<std::endl;
        allList.printList("Università");
        std::cout<<"All activity of list Default are:"<<std::endl;
        allList.printList("Default");
        std::cout<<"All list of list Acquisti are:"<<std::endl;
        allList.printList("Acquisti");

        allList.printCountElementList();
    }
    catch (std::out_of_range &e) {
        std::cerr << e.what() << std::endl;
    }
}
