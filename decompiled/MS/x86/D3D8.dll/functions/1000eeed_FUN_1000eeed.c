/*
 * FUN_1000eeed at 1000eeed
 * uint __fastcall FUN_1000eeed(int param_1)
 * Address ranges: 1000eeed-1000ef02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000eeed(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100ad475(param_1 + 0x24);
  uVar2 = iVar1 + 0x23U & 0xffffffe0;
  *(int *)(uVar2 - 4) = iVar1;
  return uVar2;
}

