/*
 * Cat.h
 *
 *  Created on: Oct 31, 2015
 *      Author: johnpurcell
 */

#ifndef CAT_H_
#define CAT_H_

namespace caveofprogramming {

void saySomething();

class Cat {
public:
	Cat();
	void speak();
	virtual ~Cat();
};

}

#endif /* CAT_H_ */
