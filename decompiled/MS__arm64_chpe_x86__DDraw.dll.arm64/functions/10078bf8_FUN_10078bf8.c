/*
 * FUN_10078bf8 at 10078bf8
 * undefined FUN_10078bf8(void)
 * Address ranges: 10078bf8-10078d03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10078bf8(int param_1,undefined4 param_2,undefined4 param_3)

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
  (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x1c);
  uVar5 = 1;
  iVar1 = FUN_10078e68(param_1,&local_30);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_100790d0(iVar1 + 4,local_2c);
    if (piVar2 == (int *)0x0) {
      local_2c[0] = 0xffffffff;
      piVar2 = (int *)FUN_100790d0(extraout_x15 & 0xffffffff,local_2c);
      if (piVar2 == (int *)0x0) goto LAB_10078ce0;
    }
    if ((piVar2[3] == 0) || (*(int *)(*piVar2 + 0x20) == 3)) {
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar4 = (*extraout_w11)(uVar3);
      uVar5 = 1;
      if (*(ulonglong *)(piVar2 + 4) <= uVar4) goto LAB_10078ce0;
    }
    uVar5 = 0;
  }
LAB_10078ce0:
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x1c);
  return uVar5;
}

