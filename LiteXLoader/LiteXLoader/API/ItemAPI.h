#pragma once
#include <string>
#include <ScriptX/ScriptX.h>
using namespace script;

//////////////////// Classes ////////////////////
class ItemStack;
class ItemClass : public ScriptClass
{
private:
    ItemStack *item;

    // Pre data
    std::string name,type;
    int id, count, aux;

public:
	explicit ItemClass(ItemStack *p);
    void preloadData();

    ItemStack *get()
    {
        return item;
    }

    static Local<Object> newItem(ItemStack *p);
    static ItemStack* extractItem(Local<Value> v);
    Local<Value> getRawPtr(const Arguments& args);

    Local<Value> getName();
    Local<Value> getType();
    Local<Value> getId();
    Local<Value> getCount();
    Local<Value> getAux();

    Local<Value> set(const Arguments& args);
    Local<Value> clone(const Arguments& args);
    Local<Value> isNull(const Arguments& args);
    Local<Value> setNull(const Arguments& args);
    Local<Value> setAux(const Arguments& args);
    Local<Value> setLore(const Arguments& args);
    Local<Value> getNbt(const Arguments& args);
    Local<Value> setNbt(const Arguments& args);

};

//////////////////// APIs ////////////////////
Local<Value> NewItem(const Arguments& args);
Local<Value> SpawnItem(const Arguments& args);