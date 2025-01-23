# std::vector<bool> Gotcha

This repository demonstrates a potential issue with using `std::vector<bool>`. The standard specialization of `std::vector<bool>` can lead to unexpected behavior compared to `std::vector<T>` for other types. It's often recommended to use other containers like `std::vector<char>` (with bitwise operations) or `std::bitset` for better performance and predictability when working with boolean values.

**Bug:** The example code shows how `std::vector<bool>` may exhibit unexpected memory layout and access patterns, potentially leading to performance problems or subtle errors.

**Solution:** The improved example demonstrates the use of `std::vector<char>` as a more efficient and straightforward alternative for managing boolean data. It maintains the boolean nature using bit manipulation.