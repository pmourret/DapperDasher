#pragma once

// Dimensions de la fenetre
const int windowHeight = 600 ;
const int windowWidth = 800 ;

// Dimensions du rectangle
const int rectWidth{50};
const int rectHeight{80};

// Position du rectangle
int rectPosY{windowHeight - rectHeight}; // Correspond à : l'axe Y de la fenetre - la hauteur du rectangle 
int rectPosX{0};

// Velocity
int velocity{5};
int jump{5};
