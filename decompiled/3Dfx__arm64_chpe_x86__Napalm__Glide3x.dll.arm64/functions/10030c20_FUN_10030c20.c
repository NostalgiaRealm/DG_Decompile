/*
 * FUN_10030c20 at 10030c20
 * undefined FUN_10030c20(void)
 * Address ranges: 10030c20-10030d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030c20(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  code *extraout_w11;
  int local_50 [8];
  
  puVar1 = (undefined4 *)(param_1 + 0x36a8);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,local_50,0);
  if (((iVar3 < 0) || (local_50[0] != 4)) ||
     (uVar4 = FUN_10062e90(*(undefined4 *)(*(int *)(param_1 + 0x3680) + 0x172c0),*puVar1),
     (uVar4 & 1) == 0)) {
    FUN_1006cc08(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),*puVar1,
                 *(int *)(param_1 + 0x3688) + 0x1430,param_3,param_3 + param_4,param_2);
  }
  else {
    FUN_1006c948(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),*puVar1,param_3,
                 param_3 + param_4,param_2,0);
  }
  return;
}

