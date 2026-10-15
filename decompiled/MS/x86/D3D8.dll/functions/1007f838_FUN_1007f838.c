/*
 * FUN_1007f838 at 1007f838
 * undefined4 __stdcall FUN_1007f838(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1007f838-1007f878
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f838(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = FUN_10015491((void *)(iVar1 + -0x58e0),param_2,param_3);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

