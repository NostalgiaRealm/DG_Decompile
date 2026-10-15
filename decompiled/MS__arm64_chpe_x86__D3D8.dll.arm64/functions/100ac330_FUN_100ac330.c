/*
 * FUN_100ac330 at 100ac330
 * undefined FUN_100ac330(void)
 * Address ranges: 100ac330-100ac397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ac330(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0xc18 + 0x100a8;
  FUN_100ff660(iVar1,param_1 + 0x1c228,0xc00);
  if (param_3 != 0) {
    FUN_100de818(*(undefined4 *)(param_1 + 0x10),param_3,iVar1,param_1 + 0xc);
  }
  return;
}

