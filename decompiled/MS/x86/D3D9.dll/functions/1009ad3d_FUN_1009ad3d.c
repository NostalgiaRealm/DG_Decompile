/*
 * FUN_1009ad3d at 1009ad3d
 * undefined4 __stdcall FUN_1009ad3d(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009ad3d-1009ad7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009ad3d(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar2 = FUN_100195cd((void *)(iVar1 + -0x66b4),param_2,param_3);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

