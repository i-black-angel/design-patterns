/**
 * Copyright 2017 Shusheng Shao <iblackangel@163.com>
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdlib.h>
#include "factory.h"

int main(int argc, char *argv[])
{
    ProductA *pa = Factory::instance()->createProductA();
    ProductB *pb = Factory::instance()->createProductB();
    ProductC *pc = Factory::instance()->createProductC();

	// Do something...
	
	if (NULL != pa) delete pa;
	if (NULL != pb) delete pb;
	if (NULL != pc) delete pc;
    return 0;
}
