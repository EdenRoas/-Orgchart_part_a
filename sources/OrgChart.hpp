/**
 * @file OrgChart.hpp
 * @author Eden Roas
 * @brief 
 * @version 0.1
 * @date 2022-05-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <deque>

using namespace std;

namespace ariel
{
    struct Node //creat node -> any node there is a name and children
    {
        string name; //
        vector<Node> family_tree;
    };
    class OrgChart
    {
    private:
        Node root;
        bool add_sub(Node &node, string &father, string &son);
        void insertLevelOrder(Node &node);
        void insertReverseOrder(Node &node);
        void insertPreorder(Node &node);
        vector<string> iterLevelOrder;
        vector<string> iterReverseOrder;
        vector<string> iterPreorder;

    public:
        OrgChart(); //constructor
        ~OrgChart(); //des
        OrgChart &add_root(string name);//add new root/replace the old one
        OrgChart &add_sub(string father, string son);

        string *begin_level_order(); // return father->son->grandson
        string *end_level_order();

        string *begin_reverse_order(); // return the opposite from level order
        string *reverse_order();

        string *begin_preorder(); //father -> son -> grandson -> another son -> grandson
        string *end_preorder();

        string *begin(){return begin_level_order();} //
        string *end(){return end_level_order();} //
        friend ostream &operator<<(ostream &output, OrgChart &root); // print the tree in way i will choose
    };
}