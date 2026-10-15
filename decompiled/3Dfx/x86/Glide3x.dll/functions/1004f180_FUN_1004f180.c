/*
 * FUN_1004f180 at 1004f180
 * uint __cdecl FUN_1004f180(int param_1, uint param_2)
 * Address ranges: 1004f180-1004f1ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1004f180(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (7 < param_2) {
    uVar1 = param_2 - 8;
    uVar2 = 0;
    if (param_2 != 8) {
      do {
        param_2 = *(uint *)(uVar2 + param_1);
        if ((DAT_1005b500 + param_2 == -0x4625eb46) &&
           (param_2 = *(uint *)(uVar2 + 4 + param_1), DAT_1005b494 + param_2 == 0xf1bdb2c)) break;
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return param_2 & 0xffffff00;
}

