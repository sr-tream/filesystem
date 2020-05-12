/*
	fwd.h -- Forward declarations for path.h and resolver.h

	Copyright (c) 2015 Wenzel Jakob <wenzel@inf.ethz.ch>

	All rights reserved. Use of this source code is governed by a
	BSD-style license that can be found in the LICENSE file.
*/

#ifndef FILESYSTEM_FWD
#define FILESYSTEM_FWD

#if !defined( NAMESPACE_BEGIN )
#	define NAMESPACE_BEGIN( name ) namespace name {
#endif
#if !defined( NAMESPACE_END )
#	define NAMESPACE_END( name ) }
#endif

NAMESPACE_BEGIN( filesystem )

class path;
class resolver;

NAMESPACE_END( filesystem )

#endif // FILESYSTEM_FWD
