/*
 * FUN_100034ea at 100034ea
 * uint __stdcall FUN_100034ea(int * param_1)
 * Address ranges: 100034ea-1000351a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100034ea(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_1006c2a4 != 0) {
    do {
      if (*(int *)(DAT_1006c2a0 + uVar1 * 4) == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_1006c2a4);
  }
  return 0xffffffff;
}

