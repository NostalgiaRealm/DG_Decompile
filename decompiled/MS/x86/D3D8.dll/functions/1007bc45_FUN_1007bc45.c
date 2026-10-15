/*
 * FUN_1007bc45 at 1007bc45
 * undefined4 __stdcall FUN_1007bc45(int param_1)
 * Address ranges: 1007bc45-1007bc7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007bc45(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = FUN_1001657e(iVar1 + -0x58e0);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

