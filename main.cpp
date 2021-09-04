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
        const Activity &task1 = Activity(date1, "appello lab.programmazione", false);
        list1.addActivity(task1);

        Date date2(2021, 9, 7, 14, 30);
        const Activity &task2 = Activity(date2, "appello Analisi 1", false);
        list1.addActivity(task2);

        Date date3(2021, 9, 20, 8, 40);
        const Activity &task3 = Activity(date3, "inizio lezioni anno accademico 2021/2022", false);
        list1.addActivity(task3);

        Date date4(2021, 9, 11, 16, 30);
        const Activity &task4 = Activity(date4, "portare il gatto dal veterinario", false);
        list3.addActivity(task4);

        Date date5(2021, 11, 30, 0, 0);
        const Activity &task5 = Activity(date5, "scadenza abbonamento palestra", false);
        list3.addActivity(task5);

        Date date6(2021, 10, 1, 0, 0);
        const Activity &task6 = Activity(date6, "comprare regalo compleanno", false);
        list2.addActivity(task6);

        Date date7(2021, 9, 5, 16, 30);
        const Activity &task7 = Activity(date7, "comprare sneakers", false);
        list2.addActivity(task7);


        //list1.setTrueActivity(const_cast<Activity &>(task2));
        list1.removeActivity(task2);

        list1.printAllList();

        allList.add(&list1);
        allList.add(&list2);
        allList.add(&list3);

        //std::cout<<"All activity of list Università are:"<<std::endl;
        //allList.printList("Università");
        //std::cout<<"All activity of list Default are:"<<std::endl;
        //allList.printList("Default");
        //std::cout<<"All list of list Acquisti are:"<<std::endl;
        //allList.printList("Acquisti");

        //allList.printCountElementList();
    }
    catch (std::out_of_range &e) {
        std::cerr << e.what() << std::endl;
    }
}
