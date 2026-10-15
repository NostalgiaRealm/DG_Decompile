/*
 * FUN_10037330 at 10037330
 * undefined FUN_10037330(void)
 * Address ranges: 10037330-10037397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10037330(void)

{
  int iVar1;
  
  iVar1 = FUN_10081cb0(0x3990);
  if (iVar1 != 0) {
    FUN_10031da0(iVar1);
    FUN_10031da0(iVar1 + 0x1cb0);
    FUN_10081f10(iVar1,0,0x3990);
    return iVar1;
  }
  return 0;
}

