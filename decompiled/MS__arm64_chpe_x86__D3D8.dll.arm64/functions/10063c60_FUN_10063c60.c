/*
 * FUN_10063c60 at 10063c60
 * undefined FUN_10063c60(void)
 * Address ranges: 10063c60-10063ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10063c60(void)

{
  int iVar1;
  
  iVar1 = FUN_100febf0(0x1b210);
  if (iVar1 != 0) {
    FUN_1005e800(iVar1);
    FUN_1005e800(iVar1 + 0xd8e0);
    FUN_100ff690(iVar1,0,0x1b210);
    return iVar1;
  }
  return 0;
}

