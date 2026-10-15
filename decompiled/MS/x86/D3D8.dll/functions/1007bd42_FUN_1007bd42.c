/*
 * FUN_1007bd42 at 1007bd42
 * undefined4 __stdcall FUN_1007bd42(int param_1, uint * param_2)
 * Address ranges: 1007bd42-1007bd7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007bd42(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = FUN_100072f9((void *)(iVar1 + -0x58e0),param_2);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

