#pragma once

int patch_wwidth(SRB2Executable* exe, int32 width);
int patch_wheight(SRB2Executable* exe, int32 height);
int patch_pausedtxt(SRB2Executable* exe, char* string);
int patch_wtitle(SRB2Executable* exe, char* string);

void enable_drm(SRB2Executable* exe);
void disable_drm(SRB2Executable* exe);

void enable_iwad_chk(SRB2Executable* exe);
void disable_iwad_chk(SRB2Executable* exe);

uint32 wwidth_table [NUM_VERSIONS] [4] = {
	{0xCC54, 0xCD23, 0x57718, 0x57720},	
	{0xCC54, 0xCD23, 0x5B718, 0x5B720},	
	{0x7D42, 0x7E23, 0x70230, 0x70238},	
	{0x7D52, 0x7E33, 0x79278, 0x79280},	
	{0x7D62, 0x7E43, 0x77258, 0x77260},	
	{0x7D62, 0x7E43, 0x77258, 0x77260},	
	{0x7D62, 0x7E43, 0x77258, 0x77260},	
	{0x8632, 0x8713, 0x8C500, 0x8C508},	
	{0x8632, 0x8713, 0x8B500, 0x8B508},	
	{0x89B2, 0x8A93, 0x91930, 0x91938},	
	{0x8881, 0x8963, 0x9B9A8, 0x9B9B0},	
	{0x8881, 0x8963, 0x9B9A8, 0x9B9B0},
	{0x8881, 0x8963, 0x9B9A8, 0x9B9B0},
	{0x8881, 0x8963, 0x9B9A8, 0x9B9B0},
	{0x8A11, 0x8AF3, 0xA59CC, 0xA59D4},	
	{0xAD21, 0xAE03, 0xB6350, 0xB6358},	
	{0xB1FF, 0xB2E3, 0xBA350, 0xBA358},	
	{0xB3DF, 0xB4C3, 0xDF350, 0xDF358},	// fd 1.09.4 '06
	{0xB62E, 0xB713, 0xE3350, 0xE3358},	
	{0xBB7A, 0xBF03, 0xF23A0, 0xF23A8},	
	{0, 0, 0, 0},	
	{0xBE9A, 0xC223, 0xF43A0, 0xF43A8}
};

uint32 wheight_table [NUM_VERSIONS] [5] = {
	{0xCC44, 0xCC4F, 0xCD13, 0xCD1E, 0x5771C},	
	{0xCC44, 0xCC4F, 0xCD13, 0xCD1E, 0x5B71C},	// xmas 96
	{0x7D32, 0x7D3D, 0x7E13, 0x7E1E, 0x70234},	// demo 1
	{0x7D42, 0x7D4D, 0x7E23, 0x7E2E, 0x79273},	// demo 2
	{0x7D52, 0x7D5D, 0x7E33, 0x7E3E, 0x7725C},  // demo 3
	{0x7D52, 0x7D5D, 0x7E33, 0x7E3E, 0x7725C},  // demo 4
	{0x7D52, 0x7D5D, 0x7E33, 0x7E3E, 0x7725C},  // demo 4.1
	{0x8622, 0x862D, 0x8703, 0x870E, 0x8C504},  // demo 4.32
	{0x8622, 0x862D, 0x8703, 0x870E, 0x8B504},  // demo 4.35
	{0x89A2, 0x89AD, 0x8A83, 0x8A8E, 0x91934},
	{0x8871, 0x887C, 0x8953, 0x895E, 0x9B9AC}, // fd 1.01
	{0x8871, 0x887C, 0x8953, 0x895E, 0x9B9AC}, // fd 1.02
	{0x8871, 0x887C, 0x8953, 0x895E, 0x9B9AC}, // fd 1.03
	{0x8871, 0x887C, 0x8953, 0x895E, 0x9B9AC}, // fd 1.04
	{0x8A01, 0x8A0C, 0x8AE3, 0x8AEE, 0xA59D0},
	{0xAD11, 0xAD1C, 0xADF3, 0xADFE, 0xB6354}, // fd 1.09
	{0xB1EF, 0xB1FA, 0xB2D3, 0xB2DE, 0xBA354},
	{0xB3CF, 0xB3DA, 0xB4B3, 0xB4BE, 0xDF354},
	{0xB61E, 0xB629, 0xB703, 0xB70E, 0xE3354}, // fd 1.09.4a
	{0xBB6A, 0xBB75, 0xBEF3, 0xBEFE, 0xF23A4},
	{0, 0, 0, 0, 0},
	{0xBE8A, 0xBE95, 0xC213, 0xC21E, 0xF43A4},
};