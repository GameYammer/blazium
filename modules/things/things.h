#ifndef THINGS_H
#define THINGS_H

#include "core/object/ref_counted.h"

class Things : public RefCounted {
	GDCLASS(Things, RefCounted)

protected:
	static void _bind_methods();

public:
	Things();
	~Things();

	static uint64_t get_random_number();
};

#endif // THINGS_H
