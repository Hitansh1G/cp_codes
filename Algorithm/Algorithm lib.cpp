

        Non-modifying sequence operations 

all_of()  : Test condition on all elements in range
any_of()  : Test if any element in range fulfills condition
none_of() : Test if no elements fulfill condition
for_each() : Apply function to range
find() : Find value in range
find_if() : Find element in range
find_if_not() : Find element in range (negative condition)
find_end() : Find last subsequence in range
find_first_of() : Find element from set in range
adjacent_find() : Find equal adjacent elements in range
count()() : Count appearances of value in range
count_if() : Return number of elements in range satisfying condition
mismatch() : Return first position where two ranges diffe
equal() : Test whether the elements in two ranges are equal
is_permutation() : Test whether range is permutation of another
search() : Search range for subsequence
search_n() : Search range for element


        Modifying sequence operations

std :: copy() :  Copy range of elements
std :: copy_n() : Copy elements
std :: copy_if() : Copy certain elements of range
std :: copy_backward() : Copy range of elements backward
std::move() : Move range of elements
std :: move_backward() :  Move range of elements backward
std :: swap() : Exchange values of two objects
std ::swap_ranges() : Exchange values of two ranges
std :: iter_swap() : Exchange values of objects pointed to by two iterators
std ::transform() : Transform range
std ::replace() : Replace value in range
std ::replace_if() : Replace values in range
std :: replace_copy() : Copy range replacing value
std :: replace_copy_if() : Copy range replacing value
std ::fill() : Fill range with value
std :: fill_n() : Fill sequence with value
std ::generate() : Generate values for range with function
std ::generate_n() : Generate values for sequence with function
std ::remove() : Remove value from range
std :: remo()ve_if() : Remove elements from range
remove_copy() : Copy range removing value
remove_copy_if() : Copy range removing values
std ::unique() : Remove consecutive duplicates in range
std :: unique_copy() : Copy range removing duplicates
std ::reverse() : Reverse range
std :: reverse_copy() : Copy range reversed
std :: rotate() : Rotate left the elements in range
std :: rotate_copy() : Copy range rotated left
std :: random_shuffle() : Randomly rearrange elements in range
std :: shuffle() : Randomly rearrange elements in range using generator


        Partition Operations

std :: is_partitioned() : Test whether range is partitioned
std :: partition() : Partition range in two
std :: stable_partition() : Partition range in two – stable ordering
partition_copy() : Partition range into two
partition_point() : Get partition point


        Sorting

std :: sort() : Sort elements in range
std :: stable_sort() : Sort elements preserving order of equivalents
std :: partial_sort() : Partially sort elements in range
std :: partial_sort_copy() : Copy and partially sort range
std :: is_sorted() : Check whether range is sorted
std :: is_sorted_until() : Find first unsorted element in range
std :: nth_element() : Sort element in range


        Binary search 



std :: lower_bound() : Return iterator to lower bound
std :: upper_bound() : Return iterator to upper bound
std :: equal_range() : Get subrange of equal elements
std :: binary_search() : Test if value exists in sorted sequence


        Merge (operating on sorted ranges)

std :: merge() : Merge sorted ranges
std :: inplace_merge() : Merge consecutive sorted ranges
std :: includes() : Test whether sorted range includes another sorted range
std :: set_union() : Union of two sorted ranges
std :: set_intersection() : Intersection of two sorted ranges
std :: set_difference() : Difference of two sorted ranges
std :: set_symmetric_difference() : Symmetric difference of two sorted ranges


        Heap Operations

std :: push_heap() : Push element into heap range
std :: pop_heap() : Pop element from heap range
std :: make_heap() : Make heap from range
std :: sort_heap() : Sort elements of heap
std :: is_heap() : Test if range is heap
std :: is_heap_until() : Find first element not in heap order
std :: max() : Return the largest
std :: minmax() : Return smallest and largest elements
std :: min_element() : Return smallest element in range
std :: max_element() : Return largest element in range
std :: minmax_element() : Return smallest and largest elements in range


        Other Operations

std :: lexicographical_compare() : Lexicographical less-than comparison
std :: next_permutation() : Transform range to next permutation
std :: prev_permutation() : Transform range to previous permutation
