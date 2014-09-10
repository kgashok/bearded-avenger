#include "Object.h"

#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <cstdlib>


#include <sys/time.h>

// -- std::vector --
int BenchVecPushBack(std::vector<Object *> & vec, int size);
int BenchVecInsert(std::vector<Object *> & vec, int * indexes, int size);
int BenchVecErase(std::vector<Object *> & vec, int * indexes, int size);

// -- std::list --
int BenchLstPushBack(std::list<Object *> & lst, int size);
int BenchLstInsert(std::list<Object *> & lst, int * indexes, int size);
int BenchLstErase(std::list<Object *> & lst, int * indexes, int size);

// -- std::deque --
int BenchDeqPushBack(std::deque<Object *> & deq, int size);
int BenchDeqInsert(std::deque<Object *> & deq, int * indexes, int size);
int BenchDeqErase(std::deque<Object *> & deq, int * indexes, int size);

int main(int argc, char * argv[])
{
	// -- tests size --
	const int NUM_ITEMS1 = 1000;
	const int NUM_ITEMS2 = 5000;
	const int NUM_ITEMS3 = 10000;
	const int NUM_ITEMS4 = 25000;

	// -- init random Indexes --
	int INDEXES1[NUM_ITEMS1];
	int INDEXES2[NUM_ITEMS2];
	int INDEXES3[NUM_ITEMS3];
	int INDEXES4[NUM_ITEMS4];

	srand(time(NULL));

    for(int i = 0; i < NUM_ITEMS1; ++i)
		INDEXES1[i] = rand() % NUM_ITEMS1;

    for(int i = 0; i < NUM_ITEMS2; ++i)
		INDEXES2[i] = rand() % NUM_ITEMS2;

    for(int i = 0; i < NUM_ITEMS3; ++i)
		INDEXES3[i] = rand() % NUM_ITEMS3;

    for(int i = 0; i < NUM_ITEMS4; ++i)
		INDEXES4[i] = rand() % NUM_ITEMS4;

	// -- containers --
	std::vector<Object *> vec1;
	std::vector<Object *> vec2;
	std::vector<Object *> vec3;
	std::vector<Object *> vec4;

	std::list<Object *> lst1;
	std::list<Object *> lst2;
	std::list<Object *> lst3;
	std::list<Object *> lst4;

	std::deque<Object *> deq1;
	std::deque<Object *> deq2;
	std::deque<Object *> deq3;
	std::deque<Object *> deq4;

	// ===== PUSH_BACK =====
	std::cout << "===== PUSH_BACK =====" << std::endl;
	// -- std::vector --
    std::cout << "std::vector " << NUM_ITEMS1 << " push_back in " << BenchVecPushBack(vec1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS2 << " push_back in " << BenchVecPushBack(vec2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS3 << " push_back in " << BenchVecPushBack(vec3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS4 << " push_back in " << BenchVecPushBack(vec4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	// -- std::list --
    std::cout << "std::list " << NUM_ITEMS1 << " push_back in " << BenchLstPushBack(lst1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS2 << " push_back in " << BenchLstPushBack(lst2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS3 << " push_back in " << BenchLstPushBack(lst3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS4 << " push_back in " << BenchLstPushBack(lst4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	// -- std::deque --
    std::cout << "std::deque " << NUM_ITEMS1 << " push_back in " << BenchDeqPushBack(deq1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS2 << " push_back in " << BenchDeqPushBack(deq2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS3 << " push_back in " << BenchDeqPushBack(deq3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS4 << " push_back in " << BenchDeqPushBack(deq4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	// ===== INSERT =====
	std::cout << "===== INSERT =====" << std::endl;
	// -- std::vector --
    std::cout << "std::vector " << NUM_ITEMS1 << " insert in " << BenchVecInsert(vec1, INDEXES1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS2 << " insert in " << BenchVecInsert(vec2, INDEXES2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS3 << " insert in " << BenchVecInsert(vec3, INDEXES3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS4 << " insert in " << BenchVecInsert(vec4, INDEXES4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	// -- std::list --
    std::cout << "std::list " << NUM_ITEMS1 << " insert in " << BenchLstInsert(lst1, INDEXES1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS2 << " insert in " << BenchLstInsert(lst2, INDEXES2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS3 << " insert in " << BenchLstInsert(lst3, INDEXES3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS4 << " insert in " << BenchLstInsert(lst4, INDEXES4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	// -- std::deque --
    std::cout << "std::deque " << NUM_ITEMS1 << " insert in " << BenchDeqInsert(deq1, INDEXES1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS2 << " insert in " << BenchDeqInsert(deq2, INDEXES2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS3 << " insert in " << BenchDeqInsert(deq3, INDEXES3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS4 << " insert in " << BenchDeqInsert(deq4, INDEXES4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	// ===== ERASE =====
	std::cout << "===== ERASE =====" << std::endl;
	// -- std::vector --
    std::cout << "std::vector " << NUM_ITEMS1 << " erase in " << BenchVecErase(vec1, INDEXES1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS2 << " erase in " << BenchVecErase(vec2, INDEXES2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS3 << " erase in " << BenchVecErase(vec3, INDEXES3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::vector " << NUM_ITEMS4 << " erase in " << BenchVecErase(vec4, INDEXES4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	// -- std::list --
    std::cout << "std::list " << NUM_ITEMS1 << " erase in " << BenchLstErase(lst1, INDEXES1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS2 << " erase in " << BenchLstErase(lst2, INDEXES2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS3 << " erase in " << BenchLstErase(lst3, INDEXES3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::list " << NUM_ITEMS4 << " erase in " << BenchLstErase(lst4, INDEXES4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	// -- std::deque --
    std::cout << "std::deque " << NUM_ITEMS1 << " erase in " << BenchDeqErase(deq1, INDEXES1, NUM_ITEMS1) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS2 << " erase in " << BenchDeqErase(deq2, INDEXES2, NUM_ITEMS2) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS3 << " erase in " << BenchDeqErase(deq3, INDEXES3, NUM_ITEMS3) << " ms." << std::endl;
    std::cout << "std::deque " << NUM_ITEMS4 << " erase in " << BenchDeqErase(deq4, INDEXES4, NUM_ITEMS4) << " ms." << std::endl;
	std::cout << std::endl;

	return 0;
}

// ===== std::vector =====
int BenchVecPushBack(std::vector<Object *> & vec, int size)
{
	struct timeval t1, t2;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		Object * o = new Object(i, i, i);
		vec.push_back(o);
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

int BenchVecInsert(std::vector<Object *> & vec, int * indexes, int size)
{
	struct timeval t1, t2;
	std::vector<Object *>::iterator it;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		Object * o = new Object(i, i, i);

		it = vec.begin();
		it += indexes[i];
		vec.insert(it, o);
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

int BenchVecErase(std::vector<Object *> & vec, int * indexes, int size)
{
	struct timeval t1, t2;
	std::vector<Object *>::iterator it;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		it = vec.begin();
		it += indexes[i];

		Object * o = *it;
		delete o;

		vec.erase(it);
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

// ===== std::list =====
int BenchLstPushBack(std::list<Object *> & lst, int size)
{
	struct timeval t1, t2;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		Object * o = new Object(i, i, i);
		lst.push_back(o);
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

int BenchLstInsert(std::list<Object *> & lst, int * indexes, int size)
{
	struct timeval t1, t2;
	std::list<Object *>::iterator it;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		Object * o = new Object(i, i, i);

		it = lst.begin();
		std::advance(it, indexes[i]);
		lst.insert(it, o);		
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

int BenchLstErase(std::list<Object *> & lst, int * indexes, int size)
{
	struct timeval t1, t2;
	std::list<Object *>::iterator it;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		it = lst.begin();
		std::advance(it, indexes[i]);

		Object * o = *it;
		delete o;

		lst.erase(it);
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

// ===== std::deque =====
int BenchDeqPushBack(std::deque<Object *> & deq, int size)
{
	struct timeval t1, t2;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		Object * o = new Object(i, i, i);
		deq.push_back(o);
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

int BenchDeqInsert(std::deque<Object *> & deq, int * indexes, int size)
{
	struct timeval t1, t2;
	std::deque<Object *>::iterator it;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		Object * o = new Object(i, i, i);

		it = deq.begin();
		it += indexes[i];
		deq.insert(it, o);
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

int BenchDeqErase(std::deque<Object *> & deq, int * indexes, int size)
{
	struct timeval t1, t2;
	std::deque<Object *>::iterator it;

	gettimeofday(&t1, NULL);
    for(int i = 0; i < size; ++i)
	{
		it = deq.begin();
		it += indexes[i];

		Object * o = *it;
		delete o;

		deq.erase(it);
	}
    gettimeofday(&t2, NULL);

    return (((t2.tv_sec * 1000) + (t2.tv_usec / 1000)) - ((t1.tv_sec * 1000) + (t1.tv_usec / 1000)));
}

