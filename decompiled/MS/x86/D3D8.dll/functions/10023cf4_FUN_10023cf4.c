/*
 * FUN_10023cf4 at 10023cf4
 * uint __stdcall FUN_10023cf4(int * param_1)
 * Address ranges: 10023cf4-10023d24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10023cf4(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_100ba718 != 0) {
    do {
      if (*(int *)(DAT_100ba714 + uVar1 * 4) == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_100ba718);
  }
  return 0xffffffff;
}

