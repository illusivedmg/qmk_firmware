# illusive

A 3-layer Preonic layout that incorporates media keys w/ base-layer play/pause, standard arrow key layout, a full standard Numpad on a toggled layer, and simplified F keys.

* Colemak layer is Mod-DH by default

* Moves /? to RAISE + . or RAISE + Enter

* Trades the default LOWER layer behavior for RAISE + Shift + __ in the cases of _, +, {, }, |, and ?

* LOWER layer now provides the default ADJUST layer behavior with the addition of a full numpad.

* Fx is accessed with RAISE + F(x-1), e.g. RAISE + 9 = F10.


### Reference Sheet



### Layers
```
/* QWERTY
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Esc  │   1  │   2  │   3  │   4  │   5  │   6  │   7  │   8  │   9  │   0  │ Bksp │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Tab  │   Q  │   W  │   E  │   R  │   T  │   Y  │   U  │   I  │   O  │   P  │  Del │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Bksp │   A  │   S  │   D  │   F  │   G  │   H  │   J  │   K  │   L  │   ;  │   '  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shft │   Z  │   X  │   C  │   V  │   B  │   N  │   M  │   ,  │   .  │  Up  │Enter │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │Lower │ Gui  │ Alt  │Raise │    Space    │Raise │ Play │ Left │ Down │ Right│
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */

/* COLEMAK
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Esc  │   1  │   2  │   3  │   4  │   5  │   6  │   7  │   8  │   9  │   0  │ Bksp │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Tab  │   Q  │   W  │   F  │   P  │   B  │   J  │   L  │   U  │   Y  │   ;  │  Del │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Bksp │   A  │   R  │   S  │   T  │   G  │   K  │   N  │   E  │   I  │   O  │   '  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shft │   Z  │   X  │   C  │   D  │   V  │   M  │   H  │   ,  │   .  │  Up  │Enter │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │Lower │ Gui  │ Alt  │Raise │    Space    │Raise │ Play │ Left │ Down │ Right│
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */

/* RAISE
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │  F1  │  F2  │  F3  │  F4  │  F5  │  F6  │  F7  │  F8  │  F9  │  F10 │  F11 │  F12 │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │   `  │      │      │      │      │      │      │      │      │  -   │  =   │PrtScn│
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │  Del │      │      │      │      │      │      │  End │ PgUp │  [   │  ]   │  \   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │ Home │ PgDn │   /  │ Vol+ │   /  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │ Mute │ Prev │ Vol- │ Next │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */

/* LOWER
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │      │      │ Calc │   /  │   *  │  -   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ Reset│ Debug│Qwerty│Colmak│      │      │      │  7   │  8   │  9   │   +  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ Light│Mu Mod│Au On │Au Off│      │      │      │  4   │  5   │  6   │   +  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │Voice-│Voice+│Mu On │Mu Off│Mi On │Mi Off│      │  1   │  2   │  3   │ Entr │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │  0   │  0   │   .  │ Entr │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */
```