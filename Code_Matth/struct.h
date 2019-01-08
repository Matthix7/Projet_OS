/// Code Structures, regroupe toutes les structures nécessaires      ///
/// au projet mises en placeau niveau du groupe.                     ///


typedef struct transmission_vent{
//communication du vent
	int force_vent;
	char direction_vent;
} t_vent;

typedef struct transmission_radar{
//communication écho radar
	int echo_radar[25];
} t_radar;

typedef struct transmission_pos{
//communication position bateau
	int x;
	int y;
} t_pos;

typedef struct transmission_annuaire{
//communication ligne d'annuaire
	int id;
	char nom[11];
} t_annuaire;

typedef struct transmission_tchat{
//communication message tchat
	int src;
	int dst;
	char buf[250];
} t_tchat;
