/*
 * FUN_100ecac0 at 100ecac0
 * undefined FUN_100ecac0(void)
 * Address ranges: 100ecac0-100ecbcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100ecac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  ulonglong extraout_x15;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  local_30 = param_2;
  local_2c[0] = param_3;
  (*(code *)PTR_FUN_10134070)(param_1 + 0x1c);
  uVar5 = 1;
  iVar1 = FUN_100ecd30(param_1,&local_30);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_100ecf98(iVar1 + 4,local_2c);
    if (piVar2 == (int *)0x0) {
      local_2c[0] = 0xffffffff;
      piVar2 = (int *)FUN_100ecf98(extraout_x15 & 0xffffffff,local_2c);
      if (piVar2 == (int *)0x0) goto LAB_100ecba8;
    }
    if ((piVar2[3] == 0) || (*(int *)(*piVar2 + 0x20) == 3)) {
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar4 = (*extraout_w11)(uVar3);
      uVar5 = 1;
      if (*(ulonglong *)(piVar2 + 4) <= uVar4) goto LAB_100ecba8;
    }
    uVar5 = 0;
  }
LAB_100ecba8:
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x1c);
  return uVar5;
}

