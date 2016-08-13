#pragma once

#include <vector>

#include "Block.h"
#include "Item.h"
#include "ItemInstance.h"

class Recipe;

class Recipes {
public:
	std::vector<std::unique_ptr<Recipe*>> recipes;
	
	class Type {
	public:
		Item* item;
		Block* block;
		ItemInstance iteminstance;
		char character;
		
		Type(char character, Item* item) : character(character), item(item) {}
		Type(char character, Block* block) : character(character), block(block) {}
		Type(char character, Item* item, int damage) : character(character), item(NULL), block(NULL), iteminstance(item, 1, damage) {}
		Type(char character, Block* block, int damage) : character(character), item(NULL), block(NULL), iteminstance(block, 1, damage) {}
		Type(char character, ItemInstance iteminstance) : character(character), item(NULL), block(NULL), iteminstance(iteminstance) {}
	};
	
	void addShapedRecipe(const ItemInstance&, const std::string&, const std::string&, const std::string&, std::vector<Recipes::Type> const&);
	void addShapedRecipe(const ItemInstance&, const std::string&, const std::string&, std::vector<Recipes::Type> const&);
	void addShapedRecipe(const ItemInstance&, const std::string&, std::vector<Recipes::Type> const&);
	void addShapedRecipe(const ItemInstance&, std::vector<std::string> const&, std::vector<Recipes::Type> const&);
	void addShapedRecipe(std::vector<ItemInstance> const&, std::vector<std::string> const&, std::vector<Recipes::Type> const&);
	void addShapelessRecipe(const ItemInstance&, std::vector<Recipes::Type> const&);
	void addSingleIngredientRecipeItem(const ItemInstance&, const ItemInstance&);
	
	static Recipes* mInstance;
	static Recipes* getInstance();
	static void init();
};