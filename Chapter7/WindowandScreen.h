#pragma once
#ifndef WINDOWANDSCREEN_H
#define WINDOWANDSCREEN_H

#include <string>
#include <vector>

class Screen;
class Window_mgr {
public:
	std::vector<Screen> screens;
public:
	Window_mgr();
	typedef std::vector<Screen>::size_type ScrIdx;
	inline void clear(ScrIdx i);
};

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

Window_mgr::Window_mgr() {
	screens.emplace_back(Screen(5, 5));
}
inline void Window_mgr::clear(ScrIdx i) {
	Screen &s = screens[i];
	s = Screen(5, 5);
}

#endif // !WINDOWANDSCREEN_H

