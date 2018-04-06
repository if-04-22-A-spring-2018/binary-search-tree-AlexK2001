/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			bst_testdriver.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "test_bst.h"

int main(int argc, char *argv[])
{
	ADD_TEST(create_bst);
	ADD_TEST(add_one);
	ADD_TEST(add_more);
	ADD_TEST(add_many);

	ADD_TEST(traversal_pre_order);
	ADD_TEST(traversal_in_order);
	ADD_TEST(traversal_post_order);

	ADD_TEST(equality_of_empty_trees);
	ADD_TEST(equality_of_roots);
	ADD_TEST(unequal_roots);
	ADD_TEST(equality);
	ADD_TEST(unequal_depths);
	ADD_TEST(same_layout_different_nodes);

	ADD_TEST(number_of_subtrees_of_empty_tree);
	ADD_TEST(number_of_subtrees_of_single_node);
	ADD_TEST(number_of_subtrees_of_two_nodes);
	ADD_TEST(number_of_subtrees_of_three_nodes);
	ADD_TEST(number_of_subtrees_of_small_tree);
	ADD_TEST(number_of_subtrees);

	ADD_TEST(most_left_longest_branch_of_empty_tree);
	ADD_TEST(most_left_longest_branch);

	run_tests();
	return 0;
}
