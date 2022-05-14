/**
 * @file Test.cpp
 * @author Eden Roas
 * @brief 
 * @version 0.1
 * @date 2022-05-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "doctest.h"
#include <iostream>
#include "OrgChart.hpp"
#include <string>
using namespace std;
using namespace ariel;

TEST_CASE("Bad Input "){
    OrgChart org_a;
    CHECK_NOTHROW(org_a.add_root("one"));
    CHECK_NOTHROW(org_a.add_sub("one", "second"));
    CHECK_NOTHROW(org_a.add_sub("one", "third"));
    CHECK_NOTHROW(org_a.add_sub("one", "four"));
    CHECK_NOTHROW(org_a.add_sub("second", "five"));
    CHECK_NOTHROW(org_a.add_sub("four", "six"));
    CHECK_THROWS(org_a.add_sub("seven", "nine"));
    CHECK_THROWS(org_a.add_sub("nine", "none"));
    CHECK_THROWS(org_a.add_sub("ten", "none"));
}
TEST_CASE("Good Input"){
    OrgChart org_a;
    
    SUBCASE("The function - add root"){

        CHECK_NOTHROW(org_a.add_root("one"));
    }
    
    SUBCASE("The function - add sub"){
    CHECK_NOTHROW(org_a.add_sub("one", "second"));
    CHECK_NOTHROW(org_a.add_sub("one", "third"));
    CHECK_NOTHROW(org_a.add_sub("one", "four"));
    CHECK_NOTHROW(org_a.add_sub("second", "five"));
    CHECK_NOTHROW(org_a.add_sub("four", "six"));
    }
    
    SUBCASE("The function - level order iterator"){
    string check_levelOrder;
    for (auto i = org_a.begin_level_order(); i != org_a.end_level_order(); ++i)
    {
    check_levelOrder += (*i);
    check_levelOrder += " ";
    }
    CHECK(check_levelOrder == "one second third four five six ");
    }
    SUBCASE("The function - reverse order iterator"){
    CHECK_NOTHROW(org_a.add_root("one")); 
    CHECK_NOTHROW(org_a.add_sub("one", "second"));
    CHECK_NOTHROW(org_a.add_sub("one", "third"));
    CHECK_NOTHROW(org_a.add_sub("one", "four"));
    CHECK_NOTHROW(org_a.add_sub("second", "five"));
    CHECK_NOTHROW(org_a.add_sub("four", "six"));
    string check_reverseOrder;
    for (auto i = org_a.begin_reverse_order(); i != org_a.reverse_order(); ++i)
    {
    check_reverseOrder += (*i);
    check_reverseOrder += " ";
    }
    CHECK(check_reverseOrder == "five six second third four one ");
    }
    SUBCASE("The function - preorder iterator"){
    CHECK_NOTHROW(org_a.add_root("one")); // just for start a root
    CHECK_NOTHROW(org_a.add_sub("one", "second"));
    CHECK_NOTHROW(org_a.add_sub("one", "third"));
    CHECK_NOTHROW(org_a.add_sub("one", "four"));
    CHECK_NOTHROW(org_a.add_sub("second", "five"));
    CHECK_NOTHROW(org_a.add_sub("four", "six"));
    string check_preorder;
    for (auto i = org_a.begin_preorder(); i != org_a.end_preorder(); ++i)
    {
    check_preorder += (*i);
    check_preorder += " ";
    }
    CHECK(check_preorder == "one second five third four six ");
    }
   
}
