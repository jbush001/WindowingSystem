//
// Copyright 1999-2002 Jeff Bush
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef __MEMORY_SURFACE_H
#define __MEMORY_SURFACE_H

#include "Surface.h"

/// MemorySurface is a surface that is allocated out of system memory.
class MemorySurface : public Surface {
public:
	/// Create a new memory surface
	/// @param width Width of the surface in pixels
	/// @param height Height of the surface in pixels
	MemorySurface(ColorSpace colorSpace, int width, int height);
	virtual ~MemorySurface();
	virtual void* lockBits();
	virtual void unlockBits();
	virtual int getStride() const;
	virtual Rasterizer *createRasterizer();

private:
	void *fBits;
};

#endif
