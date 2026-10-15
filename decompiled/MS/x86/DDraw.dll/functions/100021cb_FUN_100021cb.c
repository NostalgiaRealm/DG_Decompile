/*
 * FUN_100021cb at 100021cb
 * int __stdcall FUN_100021cb(void)
 * Address ranges: 100021cb-100021f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100021cb(void)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)DAT_1006c210 >> 8);
  if (((*(char *)(DAT_1006c210 + 0x786) != '\0') && (*(int *)(DAT_1006c210 + 0x7d4) != 0)) &&
     (*(int *)(DAT_1006c210 + 0x7d8) != 0)) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}

