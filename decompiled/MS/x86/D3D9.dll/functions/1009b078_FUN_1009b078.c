/*
 * FUN_1009b078 at 1009b078
 * undefined4 __stdcall FUN_1009b078(int param_1, uint param_2, uint * param_3)
 * Address ranges: 1009b078-1009b0b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b078(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x591c)) {
    iVar1 = *(int *)(*(int *)(param_1 + -0x5920) + param_2 * 4);
    uVar2 = FUN_1009d780(-(uint)(iVar1 != 0) & iVar1 - 8U,0x100d1390,param_3);
  }
  return uVar2;
}

