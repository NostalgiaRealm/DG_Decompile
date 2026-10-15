/*
 * FUN_10106d00 at 10106d00
 * undefined FUN_10106d00(void)
 * Address ranges: 10106d00-10106d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10106d00(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x254) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x250) + uVar1 * 4) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x254));
  }
  return 0xffffffff;
}

