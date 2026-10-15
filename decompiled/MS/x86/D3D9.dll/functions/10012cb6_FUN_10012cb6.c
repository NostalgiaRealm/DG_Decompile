/*
 * FUN_10012cb6 at 10012cb6
 * uint __fastcall FUN_10012cb6(int param_1)
 * Address ranges: 10012cb6-10012ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10012cb6(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100cfd55(param_1 + 0x24);
  uVar2 = iVar1 + 0x23U & 0xffffffe0;
  *(int *)(uVar2 - 4) = iVar1;
  return uVar2;
}

