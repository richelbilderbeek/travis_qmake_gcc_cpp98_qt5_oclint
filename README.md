# travis_qmake_gcc_cpp98_qt5_oclint

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_qt5_oclint.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_qt5_oclint)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++98`
 * Libraries: `STL` and `Qt`, using Qt5
 * Code coverage: none
 * Code linter: OCLint
 * Source: QDialog with Qt resource file

More complex builds:
 * C++11: [travis_qmake_gcc_cpp11_qt5_oclint](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11_qt5_oclint)

Less complex builds:
 * Qt4: [travis_qmake_gcc_cpp98_qt4_oclint](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_qt4_oclint)
 * No OCLint: [travis_qmake_gcc_cpp98_qt5](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_qt5)
