#include <pybind11/pybind11.h>

struct TrieNode{
    bool isend;
    TrieNode* links[26];

    bool linkexists(TrieNode node , char c) {return !node.links[c - 'a'] ;}  
};