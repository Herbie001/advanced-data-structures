class Node:
    """Class to implement a node.

    Attributes:
        data: An integer type value associated with a node.
        parent: A pointer to the parent of a given node.
        leftChild: A pointer to the left child of a given node.
        rightChild: A pointer to the right child of a given node.
    """

    def __init__(self, data: int):
        """Initializes the instance based on the data provided.

        Args: 
            data: The data stored in each node.
        """
        self.data: int = data
        self.parent = None
        self.leftChild = None
        self.rightChild = None
        
class BST:
    """Class to implement a binary search tree.

    Attributes:
        root: A pointer to the root of the binary search tree.
        numElements: Integer value representing how many nodes exist in the BST.
    """

    def __init__(self):
        """Initializes an empty BST."""
        this.root = None
        this.numElements: int = 0

    def isEmpty(self) -> bool:
        """This function is used to determine if the BST is empty or not.
        
        The function returns is numElements is equal to zero.

        Returns:
            True if numElements is == 0, false otherwise.
        """
        return self.numElements == 0

    def insert(self, element: int) -> bool:
        """This function is used to insert an element into the BST.
        
        The function will start at the root, compare data values and either 
        traverse left or right. This pattern continues until we insert the 
        element and return true; however, if the element already exists, 
        false will be returned instead.

        Args:
            element: An integer value we want to place in the BST.
        
        Returns:
            True if the element was found, false otherwise.
        """

    def find(self, element: int) -> int:
        """This function is used to find a given element in the BST.

        The function starts at the root, compares the data value, if its not
        equal, we go left if the element is less, otherwise right. This 
        pattern continues until we've found the element resulting in true or
        false in which we didn't find the element.

        Args:
            element: An integer value we're looking for in the BST.
        
        Returns:
            True if the element is found, false otherwise.
        """

    def remove(self, element: int) -> bool:
        """This function is used to remove a given element in the BST.

        The function starts at the root comparing data values, if its not
        equal, we go left if the element is less, right otherwise. This 
        behavior continues until we get to the element we want to remove.
        If we dont arrive at an element, it doesn't exist returning false.
        However, if we arrive at the given element we need to maintain the 
        BST properties during the removal process. 

        Args:
            element: The element we want to remove from the BST.
        
        Return:
            True if the element was successfully removed, false otherwise.
        """
    def clear(self, root: Optional[Node]) -> None:
        """Function to delete all information from the BST.

        The function will call the helper function which will recusively
        remove each node in a postorder sequence.

        Function calls the helper function to recursively delete each node
        in postorder sequence.

        """
    def size(self) -> int:
        """This function is used to get the number of elements in the BST.

        Function returns the numElements variable.

        Return:
            An integer value representing the number of nodes in the BST.
        """
        return self.numElements

    def postOrder(self, root: Optional[Node]) -> List[int]:
        """This function is used to obtain a list of post order traversal.
        
        Function calls the helper function which traverses the BST
        recursively until we acquire the data in a postorder structure.

        Args:
            root: The root of the BST.
        
        Return:
            List containing integers in post traversal order.
        """
    def inOrder(self, root: Optional[Node]) -> List[int]:
        """This function is used to obtain a list of in order traversal.

        Function calls the helper function which traverses the BST 
        recursively until we acquire the data in an inorder structure.

        Args:
            root: The root of the BST.
        
        Return:
            List containing integers in order traversal order.
        """
    def preOrder(self, root: Optional[Node]) -> List[int]:
        """This function is used to obtain a list of pre order traversal.

        Function calls the helper function which traverses the BST 
        recursively until we acquire the data in preorder structure.

        Args:
            root: The root of the BST.
        
        Return:
            List containing integers in pre order traversal order.
        """
    def levelOrder(self, root: Optional[Node]) -> List[List[int]]:
        """This function is used to obtain a list of level order traversal.

        Function traverses the BST utilizing a queue implementation and adds
        them to a list which is then inserted into a list of lists.

        Args:
            root: The root of the BST.
        
        Return:
            List of lists containing integers where each proceeding list is a different level in the binary search tree.
        """

    def getLeftMostNode(self, root: Optional[Node]) -> Optional[Node]:
        """Function to obtain the left most node in the BST.

        The function acquires the left most node in the BST by traversing
        left continuously until we're unable to.
        Args:
            root: The root to the BST.
        
        Return:
            Left most node in the BST.
        """
    def getRightMostNode(self, root: Optional[Node]) -> Optional[Node]:
        """Function to obtain the right most node in the BST.

        The function acquires the right most node in the BST by traversing
        right continuously until we're unable to.

        Args:
            root: The root node to the BST.

        Return:
            Right most node in the BST.
        """
    def successorNode(self, root: Optional[Node]) -> Optional[Node]:
        """Function to find the in order successor of a given node.

        The function serves to find the in order successor to a given node.
        If the given nodes parent doesn't have a right child, we will have
        to traverse up the tree until we find a valid successor.

        Args:
            node: The node we want to obtain the successor of.
        
        Return:
            The successor of the given node.
        """
    def buildBSTFromCSV(self, file_name: str) -> Optional[Node]:
        """Function to build a BST provided a .csv file.

        The function will take in a CSV file from the examples directory, process data and create a BST. 

        Args:
            fileName: The file name containing integers to build a BST.

        Return:
            The root node to the newly built BST.
        """
    def findMedianValue(self, root: Optional[Node]) -> int:
        """Function to find the median value located within the BST.

        The function will find the median value in the BST by traversing
        through and collecting all values and finding the median data value.

        Args:
            root (Node): The root node of a BST.

        Return:
            The median value of all values within the BST.
        """
    def isBalanced(self, root: Optional[Node]) -> bool:
        """Function to determine if a BST is balanced or not.

        The function determines the balanced factors of each node
        from bottom to top to determine if the BST is balanced.

        Args:
            root (Node): The root of the BST.

        Return:
            True if the BST is balanced, false otherwise.
        """
    def balancedBST(self, root: Optional[Node]) -> bool:
        """Function which determines if the BST is balanced or not.

        The function will balance the given binary search tree
        by extracting all values, sorting and acquiring the median
        value of the data which will be the root and inserting
        every other value afterwards resulting in a balanced BST.

        Args:
            root (Node): The root of the BST.

        Return:
            True if the BST is balanced, false otherwise.
        """
    def mergeTwoBST(
        self, 
        root_1: Optional[Node],
        root_2: Optional[Node]
    ) -> Optional[Node]:
        """Function used to merge two BSTs.

        The function will take in the values of each BST, sort
        them, remove the duplicates, select the median value from
        the data which will be used as the root and insert every 
        other element resulting in a perfectly balanced BST.

        Args:
            root_1 (Node): The root to the first BST.
            root_2 (Node): The root to the second BST.

        Return:
            The root to the newly assembled BST.
        """

    # Private member Functions

    def _clearHelper(self, root: Optional[Node]) -> None:
        """Private helper function for deleting the BST.

        This function is called recursively to remove all nodes 
        from the binary search tree in in-order traversal.

        Args:
            root (Node): The root of the binary search tree

        """
    def _postOrderHelper():
        """Private helper function for post order traversal.

        This function is called recursively to traverse the BST.

        Args: 
            root (Node): The root of the BST.
        """

    def _preOrderHelper():
        """Private helper function for preorder traversal.

        This function is called recursively to traverse the BST.

        Args:
            root (Node): The node to the BST.
        """