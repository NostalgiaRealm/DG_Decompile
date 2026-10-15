/*
 * FUN_1009b3ec at 1009b3ec
 * undefined4 __stdcall FUN_1009b3ec(int param_1, uint param_2, int param_3)
 * Address ranges: 1009b3ec-1009b450
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b3ec(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_3;
  uVar2 = 0x8876086c;
  if ((param_3 != 0) && (param_2 < *(uint *)(param_1 + -0x591c))) {
    FUN_10003e40((void *)((int)&param_3 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    uVar2 = FUN_1000734a((void *)(param_1 + -0x66b4),
                         *(int *)(*(int *)(param_1 + -0x5920) + param_2 * 4),
                         (undefined4 *)(iVar1 + -0x5c));
    FUN_10003e89((char *)((int)&param_3 + 3));
  }
  return uVar2;
}

