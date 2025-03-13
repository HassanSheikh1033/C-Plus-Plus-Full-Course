#include <iostream>
#include <string>
using namespace std;


class Item {
protected:
    string name;

public:
    Item(string name) {
       this->name = name;
	}

    virtual void displayInfo() {
        cout << "Name: " << name << endl;
    }
};



class Ingredient : public Item {
private:
    double quantity;
    string unit;

public:
    Ingredient(string name, double quantity, string unit): Item(name)
	{
	  this->quantity = quantity;
	  this->unit = unit;	
	}

    void displayInfo() override {
        cout << "Ingredient: " << name << ", Quantity: " << quantity << " " << unit << endl;
    }
};





class Recipe : public Item {
private:
    Ingredient** ingredients;
    int ingredientCount;
    int ingredientCapacity;

    void resizeIngredients() {
        ingredientCapacity *= 2;
        Ingredient** newIngredients = new Ingredient*[ingredientCapacity];
        for (int i = 0; i < ingredientCount; ++i) {
            newIngredients[i] = ingredients[i];
        }
        delete[] ingredients;
        ingredients = newIngredients;
    }


public:
    Recipe(string name, int capacity = 10)
        : Item(name), ingredientCount(0), ingredientCapacity(capacity) {
        ingredients = new Ingredient*[ingredientCapacity];
    }

    void addIngredient(Ingredient* ingredient) {
        if (ingredientCount == ingredientCapacity) {
            resizeIngredients();
        }
        ingredients[ingredientCount++] = ingredient;
    }

    void displayInfo() const override {
        cout << "Recipe: " << name << endl;
        for (int i = 0; i < ingredientCount; ++i) {
            ingredients[i]->displayInfo();
        }
    }

    ~Recipe() {
        for (int i = 0; i < ingredientCount; ++i) {
            delete ingredients[i];
        }
        delete[] ingredients;
    }
};




class RecipeManager {
private:
    Recipe** recipes;
    int recipeCount;
    int recipeCapacity;

    void resizeRecipes() {
        recipeCapacity *= 2;
        Recipe** newRecipes = new Recipe*[recipeCapacity];
        for (int i = 0; i < recipeCount; ++i) {
            newRecipes[i] = recipes[i];
        }
        delete[] recipes;
        recipes = newRecipes;
    }

public:
    RecipeManager(int capacity = 10)
        : recipeCount(0), recipeCapacity(capacity) {
        recipes = new Recipe*[recipeCapacity];
    }

    void addRecipe(Recipe* recipe) {
        if (recipeCount == recipeCapacity) {
            resizeRecipes();
        }
        recipes[recipeCount++] = recipe;
    }

    void displayRecipes() const {
        for (int i = 0; i < recipeCount; ++i) {
            recipes[i]->displayInfo();
        }
    }

    ~RecipeManager() {
        for (int i = 0; i < recipeCount; ++i) {
            delete recipes[i];
        }
        delete[] recipes;
    }
};




int main() {
    RecipeManager manager;

    Recipe* recipe1 = new Recipe("Pancakes");
    recipe1->addIngredient(new Ingredient("Flour", 2, "cups"));
    recipe1->addIngredient(new Ingredient("Milk", 1.5, "cups"));
    recipe1->addIngredient(new Ingredient("Egg", 1, "unit"));
    recipe1->addIngredient(new Ingredient("Sugar", 2, "tablespoons"));
    recipe1->addIngredient(new Ingredient("Salt", 0.5, "teaspoon"));

    Recipe* recipe2 = new Recipe("Omelette");
    recipe2->addIngredient(new Ingredient("Eggs", 3, "units"));
    recipe2->addIngredient(new Ingredient("Salt", 0.5, "teaspoon"));
    recipe2->addIngredient(new Ingredient("Pepper", 0.25, "teaspoon"));
    recipe2->addIngredient(new Ingredient("Butter", 1, "tablespoon"));

    manager.addRecipe(recipe1);
    manager.addRecipe(recipe2);

    cout << "Recipe List:\n";
    manager.displayRecipes();

    return 0;
}
