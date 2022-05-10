// # Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
// # If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

// # For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

// # Evaluate the sum of all the amicable numbers under 10000.

// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <map>
// #include <queue>
// #include <set>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>

// using namespace std;


use std::thread;

fn amicableSum(n : &u32) -> u32 {
    let upper : u32 = n / 2;
    let mut sum = 0;
    for i in 1..(upper) {
        if n % i == 0 {
            sum += i;
        }
    }
    return sum;
}


fn main() {
    let mut threads = vec![];

    for i in 1..101 {
        threads.push(thread::spawn(move || {
            let mut sum = 0;
            for n in (1 + (i - 1) * 100)..(1 + (i) * 100) {
                sum += amicableSum(&n)
            }
            sum
        }))
    }

    let mut result = 0;
    for thread in threads {
        result += thread.join().unwrap();
    }
    println!("result is {}", result);
}