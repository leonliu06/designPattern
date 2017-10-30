#pragma once

class Component {
public:
	Component();
	~Component();
	void Add(const Component& com);
	Component* GetChild(int index);
	void Remove(const Component& com);
};