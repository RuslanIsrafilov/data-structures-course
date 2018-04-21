# C++ Resources
## Online Courses
1. [C++: From Beginner to Expert][cpp_from_beg_to_exp] The course is designed for those who don't have any prior knowledge about programming.
2. [Learn Advanced C++ Programming][cpp_advanced_course] Discover intermediate to advanced C++, including C++ 11's fantastic additions to the C++ standard.
3. [Initiation à la programmation en C++][cpp_coursera] École Polytechnique course in french, but there is english subtitles.

## Books
### Introductory, no previous programming experience
1. [C++ Primer][cpp_primer] (Stanley Lippman, Josée Lajoie, and Barbara E. Moo) (updated for C++11) Coming at 1k pages, this is a very thorough introduction into C++ that covers just about everything in the language in a very accessible format and in great detail. The fifth edition (released August 16, 2012) covers C++11.

2. [Programming: Principles and Practice Using C++][cpp_bjarne] (Bjarne Stroustrup) (updated for C++11/C++14) An introduction to programming using C++ by the creator of the language. A good read, that assumes no previous programming experience, but is not only for beginners.

### Introductory, with previous programming experience
1. [A Tour of C++][cpp_tour] (Bjarne Stroustrup) (EBOOK) The “tour” is a quick (about 180 pages and 14 chapters) tutorial overview of all of standard C++ (language and standard library, and using C++11) at a moderately high level for people who already know C++ or at least are experienced programmers. This book is an extended version of the material that constitutes Chapters 2-5 of The C++ Programming Language, 4th edition.

2. [Accelerated C++][cpp_acc] (Andrew Koenig and Barbara Moo) This basically covers the same ground as the C++ Primer, but does so on a fourth of its space. This is largely because it does not attempt to be an introduction to programming, but an introduction to C++ for people who've previously programmed in some other language. It has a steeper learning curve, but, for those who can cope with this, it is a very compact introduction to the language. (Historically, it broke new ground by being the first beginner's book to use a modern approach to teaching the language.) Despite this, the C++ it teaches is purely C++98.

### Best practices
1. [Effective C++][cpp_effective] (Scott Meyers) This was written with the aim of being the best second book C++ programmers should read, and it succeeded. Earlier editions were aimed at programmers coming from C, the third edition changes this and targets programmers coming from languages like Java. It presents ~50 easy-to-remember rules of thumb along with their rationale in a very accessible (and enjoyable) style. For C++11 and C++14 the examples and a few issues are outdated and Effective Modern C++ should be preferred.

2. [Effective Modern C++][cpp_effective_modern] (Scott Meyers) This is basically the new version of Effective C++, aimed at C++ programmers making the transition from C++03 to C++11 and C++14.

3. [Effective STL][cpp_effective_stl] (Scott Meyers) This aims to do the same to the part of the standard library coming from the STL what Effective C++ did to the language as a whole: It presents rules of thumb along with their rationale.

### Intermediate
1. [More Effective C++][cpp_effective_more] (Scott Meyers) Even more rules of thumb than Effective C++. Not as important as the ones in the first book, but still good to know.

2. [Exceptional C++][cpp_except] (Herb Sutter) Presented as a set of puzzles, this has one of the best and thorough discussions of the proper resource management and exception safety in C++ through Resource Acquisition is Initialization (RAII) in addition to in-depth coverage of a variety of other topics including the pimpl idiom, name lookup, good class design, and the C++ memory model.

3. [More Exceptional C++][cpp_except_more] (Herb Sutter) Covers additional exception safety topics not covered in Exceptional C++, in addition to discussion of effective object-oriented programming in C++ and correct use of the STL.

4. [Exceptional C++ Style][cpp_except_style] (Herb Sutter) Discusses generic programming, optimization, and resource management; this book also has an excellent exposition of how to write modular code in C++ by using non-member functions and the single responsibility principle.

5. [C++ Coding Standards][cpp_coding_standards] (Herb Sutter and Andrei Alexandrescu) “Coding standards” here doesn't mean “how many spaces should I indent my code?” This book contains 101 best practices, idioms, and common pitfalls that can help you to write correct, understandable, and efficient C++ code.

6. [C++ Templates: The Complete Guide][cpp_templates] (David Vandevoorde and Nicolai M. Josuttis) This is the book about templates as they existed before C++11. It covers everything from the very basics to some of the most advanced template metaprogramming and explains every detail of how templates work (both conceptually and at how they are implemented) and discusses many common pitfalls. Has excellent summaries of the One Definition Rule (ODR) and overload resolution in the appendices. A second edition covering C++11, C++14 and C++17 has been already published .

### Advanced
1. [Modern C++ Design][cpp_modern_design] (Andrei Alexandrescu) A groundbreaking book on advanced generic programming techniques. Introduces policy-based design, type lists, and fundamental generic programming idioms then explains how many useful design patterns (including small object allocators, functors, factories, visitors, and multi-methods) can be implemented efficiently, modularly, and cleanly using generic programming.

2. [C++ Template Metaprogramming][cpp_templates_meta] (David Abrahams and Aleksey Gurtovoy)

3. [C++ Concurrency In Action][cpp_concurrency] (Anthony Williams) A book covering C++11 concurrency support including the thread library, the atomics library, the C++ memory model, locks and mutexes, as well as issues of designing and debugging multithreaded applications.

4. [Advanced C++ Metaprogramming][cpp_meta_advanced] (Davide Di Gennaro) A pre-C++11 manual of TMP techniques, focused more on practice than theory. There are a ton of snippets in this book, some of which are made obsolete by type traits, but the techniques, are nonetheless useful to know. If you can put up with the quirky formatting/editing, it is easier to read than Alexandrescu, and arguably, more rewarding. For more experienced developers, there is a good chance that you may pick up something about a dark corner of C++ (a quirk) that usually only comes about through extensive experience.

### Reference Style - All Levels
1. [The C++ Programming Language][cpp_prog_lang] (Bjarne Stroustrup) (updated for C++11) The classic introduction to C++ by its creator. Written to parallel the classic K&R, this indeed reads very much like it and covers just about everything from the core language to the standard library, to programming paradigms to the language's philosophy.

2. [C++ Standard Library Tutorial and Reference][cpp_std_tutorial] (Nicolai Josuttis) (updated for C++11) The introduction and reference for the C++ Standard Library. The second edition (released on April 9, 2012) covers C++11.

3. [The C++ IO Streams and Locales][cpp_io_stream] (Angelika Langer and Klaus Kreft) There's very little to say about this book except that, if you want to know anything about streams and locales, then this is the one place to find definitive answers.

<!-- LINKS -->
[cpp_from_beg_to_exp]: https://www.udemy.com/video-course-c-from-beginner-to-expert/
[cpp_advanced_course]: https://www.udemy.com/video-course-c-from-beginner-to-expert/
[cpp_coursera]: https://www.coursera.org/learn/initiation-programmation-cpp

[cpp_primer]: https://www.amazon.com/dp/0321714113
[cpp_bjarne]: https://www.amazon.com/dp/0321992784
[cpp_tour]: https://www.amazon.com/dp/B00F8CWGOS
[cpp_acc]: https://www.amazon.com/dp/020170353X
[cpp_effective]: https://www.amazon.com/dp/0321334876
[cpp_effective_modern]: https://www.amazon.com/dp/1491903996
[cpp_effective_stl]: https://www.amazon.com/dp/0201749629
[cpp_effective_more]: https://www.amazon.com/dp/020163371X
[cpp_except]: https://www.amazon.com/dp/0201615622
[cpp_except_more]: https://www.amazon.com/dp/020170434X
[cpp_except_style]: https://www.amazon.com/dp/0201760428
[cpp_coding_standards]: https://www.amazon.com/dp/0321113586
[cpp_templates]: https://www.amazon.com/dp/0201734842
[cpp_modern_design]: https://www.amazon.com/dp/0201704315
[cpp_templates_meta]: https://www.amazon.com/dp/0321227255
[cpp_concurrency]: https://www.amazon.com/dp/1933988770
[cpp_meta_advanced]: https://www.amazon.com/dp/1460966163
[cpp_prog_lang]: https://www.amazon.com/dp/0321958322
[cpp_std_tutorial]: https://www.amazon.com/dp/0321623215
[cpp_io_stream]: https://www.amazon.com/dp/0201183951
