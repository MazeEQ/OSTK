#ifndef _RECIPEDB_H_
#define _RECIPEDB_H_

struct recipe_data {
	int id, tokensRequired, materials[10], superiorMaterials[2];
	char identifier[64], description[64], critIdentifier[64], critDescription[64];
	unsigned int craftTime, successRate, skillAdvance, critRate, bonus, skillRequired;
};

extern struct DBMap* recipedb;

struct recipe_data* recipedb_search(unsigned int);
struct recipe_data* recipedb_searchname(const char* str);
void recipedb_read();
void recipedb_term();
void recipedb_init();

#endif
