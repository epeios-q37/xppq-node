/*
	Copyright (C) 2016 by Claude SIMON (http://zeusw.org/epeios/contact.html).

	This file is part of XPPq.

    XPPq is free software: you can redistribute it and/or modify it
    under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    XPPq is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with XPPq.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PARSER_INC_
# define PARSER_INC_

# include "sclnjs.h"

namespace parser {
	void OnData( sclnjs::sCaller &Caller );	// Called when some data is available.
	void OnEOD( sclnjs::sCaller &Caller );	// Called when no more data is available.
	void Parse( sclnjs::sCaller &Caller );
}

#endif
