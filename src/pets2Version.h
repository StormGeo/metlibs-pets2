#ifndef METLIBS_PETS2_VERSION_H
#define METLIBS_PETS2_VERSION_H

#define METLIBS_PETS2_VERSION_MAJOR 7
#define METLIBS_PETS2_VERSION_MINOR 0
#define METLIBS_PETS2_VERSION_PATCH 0

#define METLIBS_PETS2_VERSION_INT(major,minor,patch) \
    (1000000*major + 1000*minor + patch)
#define METLIBS_PETS2_VERSION_CURRENT_INT \
    METLIBS_PETS2_VERSION_INT(METLIBS_PETS2_VERSION_MAJOR, METLIBS_PETS2_VERSION_MINOR, METLIBS_PETS2_VERSION_PATCH)

#endif // METLIBS_PETS2_VERSION_H
