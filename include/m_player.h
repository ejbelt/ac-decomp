#ifndef M_PLAYER_H
#define M_PLAYER_H

#include "types.h"
#include "m_actor.h"
#include "m_lib.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct player_actor_s PLAYER_ACTOR;

/* sizeof(struct player_actor_s) == 0x13A8 */
struct player_actor_s {
  /* 0x0000 */ ACTOR actor_class;
  /* 0x0174 */ u8 tmp0174[0x1300 - 0x0174];
  /* 0x1300 */ void* (*get_door_label_proc)(GAME*);
  /* 0x1304 */ u8 tmp1304[0x1310- 0x1304];
  /* 0x1310 */ void (*update_Rot_Pos_actor_proc)(GAME*, xyz_t*, s_xyz*, int);
  /* 0x1314 */ u32 pad;
  /* 0x1318 */ int (*Get_WadeEndPos_proc)(GAME*, xyz_t*);
  /* 0x131C */ u8 tmp131C[0x13A8 - 0x131C];
  /* TODO: finish */
};

#ifdef __cplusplus
}
#endif

#endif
