/*
 * Face.h
 *
 *  Created on: Apr 26, 2016
 *      Author: tegaoghenekohwo
 */

#ifndef SRC_CLASSES_FACE_H_
#define SRC_CLASSES_FACE_H_

#include <string>

class Face {
	std::string imgurl;
public:
	Face(std::string);
	virtual ~Face();
	void getFace();
};

#endif /* SRC_CLASSES_FACE_H_ */
