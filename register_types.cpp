/* register_types.cpp */

#include "register_types.h"

#include "gd_sqlite.h"

void register_gd_sqlite_types() {
	ClassDB::register_class<SQLite>();
}

void unregister_gd_sqlite_types() {
	//nothing to do here
}
