### C++ benchmarks: `vector` vs `list` vs `deque`

- Hat tip to [Ramya V][Ramya] (KGISL) for finding this. 

- Comparison of various containers in C++ STL library, based on David Copolla's code and this article at http://goo.gl/HFsXes. When downloaded it should readily compile using `MingW within the Eclipse IDE`.

- To get similar results as the author, the `build.sh` file has some flag settings which probably need to reflected in the Eclipse's build, which might already be the case, but needs to be looked into.

### Why avoid Linked Lists?
Here's the video that is referred to in the article - Bjarne Stroustrup: Why you should avoid Linked Lists - YouTube http://buff.ly/1tzmBQS 

### Suggestions for Remix
- Use a better clocking mechanism to get more accurate comparisons
  - Blargh - gettimeofday() should never be used to measure time http://buff.ly/1qJKpTy
- A long and interesting discussion on the same topic on LinkedIn: Vector vs Linked list http://buff.ly/1uKLLgi
  - How do the STL containers compare to `Qt` library's containers? Start exploring here: QVector vs QList - Stack Overflow http://buff.ly/1lZdjPz  
  
### Bonus 
Bjarne Stroustrup - The Essence of C++ - YouTube http://buff.ly/1tzoahL
 - There are many interesting opinions on C++ shared by him, but I really like the last Q&A starting [@1:35:43](http://www.youtube.com/watch?v=86xWVb4XIyE&t=1h35m43s)

_Readme file for [Avenger](https://github.com/kgashok/bearded-avenger) repo._

[Ramya]: https://plus.google.com/101257287239320062162/posts 