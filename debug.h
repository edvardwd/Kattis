#pragma once

#ifdef DEBUG

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;

// Print single value with variable name
#define dbg(x) cerr << #x << " = " << (x) << "\n"

// Print with a label
#define dbgl(label, x) cerr << label << " = " << (x) << "\n"

// Print current line
#define here() cerr << "reached line " << __LINE__ << "\n"

// --- Operator overloads ---

template<typename A, typename B>
ostream& operator<<(ostream& os, const pair<A, B>& p) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (int i = 0; i < (int)v.size(); i++) {
        if (i) os << ", ";
        os << v[i];
    }
    return os << "]";
}

template<typename K, typename V>
ostream& operator<<(ostream& os, const map<K, V>& m) {
    os << "{";
    bool first = true;
    for (auto& [k, v] : m) {
        if (!first) os << ", ";
        os << k << ": " << v;
        first = false;
    }
    return os << "}";
}

template<typename K, typename V>
ostream& operator<<(ostream& os, const unordered_map<K, V>& m) {
    os << "{";
    bool first = true;
    for (auto& [k, v] : m) {
        if (!first) os << ", ";
        os << k << ": " << v;
        first = false;
    }
    return os << "}";
}

template<typename T>
ostream& operator<<(ostream& os, const set<T>& s) {
    os << "{";
    bool first = true;
    for (auto& x : s) {
        if (!first) os << ", ";
        os << x;
        first = false;
    }
    return os << "}";
}

template<typename T>
ostream& operator<<(ostream& os, const unordered_set<T>& s) {
    os << "{";
    bool first = true;
    for (auto& x : s) {
        if (!first) os << ", ";
        os << x;
        first = false;
    }
    return os << "}";
}

#endif
