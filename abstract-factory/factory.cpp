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

Factory *Factory::_ins = NULL;

Factory *Factory::instance()
{
	if (NULL == _ins) {
		_ins = new Factory();
		atexit(desposed);
	}
	return _ins;
}

void Factory::desposed() 
{
	if (NULL != _ins) { delete _ins; _ins = NULL; }
}

Factory::Factory()
{
}

Factory::~Factory()
{
}

ProductA *Factory::createProductA() const
{
	return new ProductA();
}

ProductB *Factory::createProductB() const
{
	return new ProductB();
}

ProductC *Factory::createProductC() const
{
	return new ProductC();
}
