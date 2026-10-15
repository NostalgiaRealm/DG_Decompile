/*
 * FUN_1002a0b7 at 1002a0b7
 * int __stdcall FUN_1002a0b7(void)
 * Address ranges: 1002a0b7-1002a0dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1002a0b7(void)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)DAT_100dea74 >> 8);
  if (((*(char *)(DAT_100dea74 + 0x786) != '\0') && (*(int *)(DAT_100dea74 + 0x7d4) != 0)) &&
     (*(int *)(DAT_100dea74 + 0x7d8) != 0)) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}

