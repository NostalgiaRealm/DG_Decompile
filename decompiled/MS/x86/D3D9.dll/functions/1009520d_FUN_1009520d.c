/*
 * FUN_1009520d at 1009520d
 * undefined4 __stdcall FUN_1009520d(int param_1, undefined4 param_2)
 * Address ranges: 1009520d-1009524d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009520d(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  *(undefined4 *)(iVar1 + 0x5c20) = param_2;
  FUN_10092113(iVar1 + -0x66b4);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return 0;
}

