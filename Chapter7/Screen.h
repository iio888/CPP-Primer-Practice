#pragma once

#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>
#include <vector>
#include "Window_mgr.h"

class Screen {
	using pos = std::string::size_type;
	friend void Window_mgr::clear(ScrIdx i);
private:
	pos height = 0;
	pos wide = 0;
	pos cursorX = 0;
	pos cursorY = 0;
	std::vector<std::string> contents;

	void do_display(std::ostream &os) const {
		for (auto i : contents) {
			for (auto j : i)
				os << j;
			os << std::endl;
		}
	}

public:
	Screen() = default;
	Screen(pos h, pos w) : height(h), wide(w), contents(h, std::string(w,' ')) { }
	Screen(pos h, pos w, char c)
		: height(h), wide(w), contents(h, std::string(w,c)) { }

	Screen &move(const pos x, const pos y) {
		cursorX = x;
		cursorY = y;
		return *this;
	}

	Screen &set(char c) {
		contents[cursorX][cursorY] = c;
		return *this;
	}
	Screen &set(pos x, pos y, char c) {
		contents[x][y] = c;
		return *this;
	}

	Screen &display(std::ostream &os) {
		do_display(os);
		return *this;
	}
	const Screen &display(std::ostream &os) const {
		do_display(os);
		return *this;
	}
	
};

#endif // !SCREEN_H

