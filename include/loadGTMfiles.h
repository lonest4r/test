/**********************************************************************************************************
FILE: loadGTMfiles.h

PLATFORM: Windows 7, MS Visual Studio 2010, OpenCV 2.4.2

CODE: C++

AUTOR: Josef Maier, AIT Austrian Institute of Technology

DATE: May 2017

LOCATION: TechGate Vienna, Donau-City-Stra�e 1, 1220 Vienna

VERSION: 1.0

DISCRIPTION: This file provides functionalities for loading the GTMs.
**********************************************************************************************************/

#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <utility>

// Reads all images and GTMs and shows the matches of each image pair in the given folder
int showGTM(std::string img_path, std::string l_img_pref, std::string r_img_pref,
            std::string gtm_path, std::string gtm_postfix);
