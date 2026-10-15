/*
 * FUN_1003e540 at 1003e540
 * undefined FUN_1003e540(void)
 * Address ranges: 1003e540-1003e64f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e540(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  code *extraout_w11;
  int local_50 [8];
  
  puVar1 = (undefined4 *)(param_1 + 0x31a8);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,local_50,0);
  if (((iVar3 < 0) || (local_50[0] != 4)) ||
     (uVar4 = FUN_10059b50(*(undefined4 *)(*(int *)(param_1 + 0x3180) + 0x172c0),*puVar1),
     (uVar4 & 1) == 0)) {
    FUN_100638d0(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),*puVar1,
                 *(int *)(param_1 + 0x3188) + 0x1430,param_3,param_3 + param_4,param_2);
  }
  else {
    FUN_10063610(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),*puVar1,param_3,
                 param_3 + param_4,param_2,0);
  }
  return;
}

