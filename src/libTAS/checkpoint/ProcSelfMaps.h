/*
    Copyright 2015-2016 Clément Gallet <clement.gallet@ens-lyon.org>

    This file is part of libTAS.

    libTAS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libTAS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libTAS.  If not, see <http://www.gnu.org/licenses/>.

    Most of the code taken from DMTCP <http://dmtcp.sourceforge.net/>
*/

#ifndef LIBTAS_PROCSELFMAPS_H
#define LIBTAS_PROCSELFMAPS_H

#include "ProcMapsArea.h"

class ProcSelfMaps
{
    public:
        ProcSelfMaps();
        ~ProcSelfMaps();

        size_t getNumAreas() const { return numAreas; }

        int getNextArea(ProcMapsArea *area);

    private:
        unsigned long int readDec();
        unsigned long int readHex();

        char *data;
        size_t dataIdx;
        size_t numAreas;
        size_t numBytes;
        int fd;
};

#endif // #ifndef __DMTCP_PROCSELFMAPS_H__