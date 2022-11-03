//
//  main.swift
//  ex00
//
//  Created by Hojin Jang on 2022/10/29.
//

import Foundation

if let value = readLine() {
    if (value.isEmpty) {
        print("* LOUD AND UNBEARABLE FEEDBACK NOISE *")
    }
    print(value.uppercased())
} else {
    print("* LOUD AND UNBEARABLE FEEDBACK NOISE *")
}
