/* gd_sqlite.h */
#ifndef GD_SQLITE_H
#define GD_SQLITE_H

#include "core/reference.h"
#include "core/ustring.h"
#include "core/map.h"

#include "sqlite/sqlite3.h"

class SQLite : public Reference {
	GDCLASS(SQLite,Reference);

protected:
	static void _bind_methods();

public:
	SQLite();
	
	int open(String path);
	
	void prepare(String query);
	int step();
	int step_assoc();
	Array fetch_assoc();
	Array fetch_one();
	Array fetch_array(String query);
	int query(String query);
	int get_data_count();
	int get_column_count();
	int get_column_int(int col);
	double get_column_double(int col);
	String get_column_text(int col);
	int get_column_int_assoc(String col);
	double get_column_double_assoc(String col);
	String get_column_text_assoc(String col);
	
	void finalize();
	String get_errormsg();
	void close();

private:
	sqlite3 *db;
	sqlite3_stmt *stmt;

	Map<String, unsigned int> _row_names;
};

#endif // GD_SQLITE_H
