/*
 * FUN_10022a31 at 10022a31
 * int __stdcall FUN_10022a31(void)
 * Address ranges: 10022a31-10022a56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10022a31(void)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)DAT_100ba2b4 >> 8);
  if (((*(char *)(DAT_100ba2b4 + 0x786) != '\0') && (*(int *)(DAT_100ba2b4 + 0x7d4) != 0)) &&
     (*(int *)(DAT_100ba2b4 + 0x7d8) != 0)) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}

