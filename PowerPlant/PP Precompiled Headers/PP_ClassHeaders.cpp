// Copyright �2005, 2006 Freescale Semiconductor, Inc.
// Please see the License for the specific language governing rights and
// limitations under the License.
// ===========================================================================
//	PP_ClassHeaders.pch++		PowerPlant 2.2.2	�1998-2005 Metrowerks Inc.
// ===========================================================================
//
//	Source for precompiled header for PowerPlant headers
//
//	This file #includes most header files for the PowerPlant library,
//	as well as most of the Toolbox headers used by the PowerPlant library.


	// This same file works for PowerPC, CFM68K, and 68K. We check the target
	// at compile time and specify the appropriate output file name.

#if __POWERPC__
	#pragma precompile_target "PP_ClassHeadersPPC++"

#elif __CFM68K__
	#pragma precompile_target "PP_ClassHeadersCFM68K++"

#else
	#pragma precompile_target "PP_ClassHeaders68K++"
#endif

	// Include the actual header files ...

#pragma once on
#include "PP_ClassHeaders.cp"
