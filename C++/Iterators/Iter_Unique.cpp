//Removes all except the first element from every consecutive 
//group of equivalent elements from the range [first, last) 
//and returns a past-the-end iterator for the new end of the range.

template <typename Iter>
Iter Unique(Iter first, Iter last) {
    auto it1 = first;
    auto it2 = first;
    while (it2 != last) {
        if (it1 != it2) {
            *it1 = *it2;
        }
        ++it1;
        const auto& value = *it2;
        while (it2 != last && *it2 == value) {
            ++it2;
        }
    }
    return it1;
}
