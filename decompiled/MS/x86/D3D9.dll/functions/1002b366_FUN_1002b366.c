/*
 * FUN_1002b366 at 1002b366
 * uint __stdcall FUN_1002b366(int * param_1)
 * Address ranges: 1002b366-1002b396
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002b366(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_100df2dc != 0) {
    do {
      if (*(int *)(DAT_100df2d8 + uVar1 * 4) == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_100df2dc);
  }
  return 0xffffffff;
}

