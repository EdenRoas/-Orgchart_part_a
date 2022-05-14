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


#include "OrgChart.hpp"
using namespace std;

namespace ariel
{
      
        bool OrgChart::add_sub(Node &node, string &father, string &son){
            return false;
        }
        void OrgChart::insertLevelOrder(Node &node){}
        void OrgChart::insertReverseOrder(Node &node){}
        void OrgChart::insertPreorder(Node &node){}

        OrgChart::OrgChart(){ //constructor

        } 
        OrgChart::~OrgChart(){ //des

        } 
        OrgChart &OrgChart::add_root(string name){ //add new root/replace the old one
            return *this;
        }
        OrgChart &OrgChart::add_sub(string father, string son){
            return *this;
        }

        string *OrgChart::begin_level_order(){ // return father->son->grandson

            return &iterPreorder[0]; ;
        } 
        string *OrgChart::end_level_order(){

            return &iterPreorder[0]; ;
        }

        string *OrgChart::begin_reverse_order()
        { // return the opposite from level order

            return &iterPreorder[0]; ;
        }
        string *OrgChart::reverse_order(){

            return &iterPreorder[0]; ;
        }

        string *OrgChart::begin_preorder(){ //father -> son -> grandson -> another son -> grandson
            
            return &iterPreorder[0]; ;
        }
        string *OrgChart::end_preorder(){
            return &iterPreorder[0]; ;
        }

        // string *OrgChart::begin(){return begin_level_order();} //
        // string *OrgChart::end(){return end_level_order();} //
        ostream &operator<<(ostream &output, OrgChart &root){ // print the tree in way i will choose
            return output;
        } 
    
}