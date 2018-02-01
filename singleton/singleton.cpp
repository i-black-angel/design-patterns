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
#include "singleton.h"

Singleton *Singleton::_ins = NULL;

Singleton *Singleton::instance()
{
	if (NULL == _ins) {
		_ins = new Singleton();
		atexit(desposed);
	}
	return _ins;
}

void Singleton::desposed() 
{
	if (NULL != _ins) { delete _ins; _ins = NULL; }
}

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
}
