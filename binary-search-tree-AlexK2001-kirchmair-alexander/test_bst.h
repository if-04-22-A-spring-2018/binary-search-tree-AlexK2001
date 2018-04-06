/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class name here>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * File:			bst.h
 * Author:			Peter Bauer
 * Due Date:		#due#
 * ----------------------------------------------------------
 * Description:
 * <Add description>
 * ----------------------------------------------------------
 */
#ifndef ___TEST_BST_H
#define ___TEST_BST_H

#include "shortcut.h"

TEST(create_bst);
TEST(add_one);
TEST(add_more);
TEST(add_many);

TEST(traversal_pre_order);
TEST(traversal_in_order);
TEST(traversal_post_order);

TEST(equality_of_empty_trees);
TEST(equality_of_roots);
TEST(unequal_roots);
TEST(equality);
TEST(unequal_depths);
TEST(same_layout_different_nodes);

TEST(number_of_subtrees_of_empty_tree);
TEST(number_of_subtrees_of_single_node);
TEST(number_of_subtrees_of_two_nodes);
TEST(number_of_subtrees_of_three_nodes);
TEST(number_of_subtrees_of_small_tree);
TEST(number_of_subtrees);

TEST(most_left_longest_branch_of_empty_tree);
TEST(most_left_longest_branch);

#endif
