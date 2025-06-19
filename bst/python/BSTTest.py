import unittest
from BST import *
# Global variables for testing purposes
MESSAGE_SUCCESS = "Success!"
MESSAGE_FAILURE = "Something went wrong"
MESSAGE_INCORRECT_SIZE = "Incorrect size"
MESSAGE_FIND_FAILED = "Failed to find the query"
MESSAGE_INSERT_FAILED = "Failed to insert element"
MESSAGE_FALSE_POSITIVE = "BST find returned true when element didn't actually exist"
MESSAGE_FALSE_NEGATIVE = "BST find return false when the element actually existed"

class TestBST(unittest.TestCase):
    
    def setUp(self):
        self.bst = BST()

    def test_isEmpty(self):
        self.assertTrue(self.bst.isEmpty())

    def test_insert(self):
        self.bst.insert(10)
        self.assertTrue(self.bst.find(10))
    
    def test_insert_multiple(self):
        elements = [15,7,20,4,5,35,28]
        for element in elements:
            result = self.bst.insert(element)
            self.assertTrue(result)
        

    def test_find(self):


    def test_remove(self):
        
    def test_clear(self):

    def test_size(self):

    def test_postOrder(self):

    def test_inOrder(self):

    def test_preOrder(self):

    def test_levelOrder(self):

    def test_getLeftMostNode(self):

    def test_getRightMostNode(self):

    def test_successorNode(self):

    def test_buildBSTFromCSV(self):

    def test_findMedianValue(self):

    def test_isBalanced(self):

    def test_balancedBST(self):
    
    def test_mergeTwoBST(self):

    

if __name__ == '__main__':
    unittest.main()