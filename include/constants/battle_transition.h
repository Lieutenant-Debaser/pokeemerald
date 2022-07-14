#ifndef GUARD_CONSTANTS_BATTLE_TRANSITION_H
#define GUARD_CONSTANTS_BATTLE_TRANSITION_H

/* Adding a custom mugshot transition can be done as follows:
 *  1. Add a MUGSHOT_ constant in this file and update the LAST_MUGSHOT constant.
 *  2. Create a .pal file in graphics/battle_transitions/ directory.
 *  3. Create a [static const u16] variable in src/battle_transitions.c (approximately line 950) equal to an [INCBIN_U16].
 *  4. In sOpponentMugshotsPal, assign the index of the constant defined here to the above [static const u16].
 *  5. Specify which trainer sprite should appear in sMugshotsTrainerPicIDsTable.
 *  6. Define the scale of the sprite in sMugshotsOpponentRotationScales.
 *  7. Define the offset of the sprite in sMugshotsOpponentCoords.
 *  8. In src/data/trainers.h locate the trainer to have the custom transition and define the following variables:
 *      .hasCustomTransition = TRUE
 *      .transition = B_TRANSITION_MUGSHOT
 */

#define MUGSHOT_NONE        0
#define MUGSHOT_SIDNEY      1
#define MUGSHOT_PHOEBE      2
#define MUGSHOT_GLACIA      3
#define MUGSHOT_DRAKE       4
#define MUGSHOT_CHAMPION    5

#define MUGSHOT_MAY         6
#define MUGSHOT_BRENDAN     7

#define MUGSHOT_ROXANNE     8
#define MUGSHOT_BRAWLY      9
#define MUGSHOT_WATTSON     10
#define MUGSHOT_FLANNERY    11
#define MUGSHOT_NORMAN      12
#define MUGSHOT_WINONA      13
#define MUGSHOT_TATELIZA    14
#define MUGSHOT_JUAN        15

#define MUGSHOT_WALLY       16
#define MUGSHOT_STEVEN      17

#define MUGSHOT_MAXIE       18
#define MUGSHOT_ARCHIE      19

#define LAST_MUGSHOT        MUGSHOT_ARCHIE
#define MUGSHOTS_COUNT      (LAST_MUGSHOT + 1)

#endif //GUARD_CONSTANTS_BATTLE_TRANSITION_H