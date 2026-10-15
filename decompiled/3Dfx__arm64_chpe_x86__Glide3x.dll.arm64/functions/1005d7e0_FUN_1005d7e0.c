/*
 * FUN_1005d7e0 at 1005d7e0
 * undefined FUN_1005d7e0(void)
 * Address ranges: 1005d7e0-1005d8eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1005d7e0(int param_1,undefined4 param_2)

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
  
  local_2c[0] = 0;
  local_30 = param_2;
  (*(code *)PTR_FUN_100a003c)(param_1 + 0x1c);
  uVar5 = 1;
  iVar1 = FUN_1005d978(param_1,&local_30);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_1005dbe0(iVar1 + 4,local_2c);
    if (piVar2 == (int *)0x0) {
      local_2c[0] = 0xffffffff;
      piVar2 = (int *)FUN_1005dbe0(extraout_x15 & 0xffffffff,local_2c);
      if (piVar2 == (int *)0x0) goto LAB_1005d8c8;
    }
    if ((piVar2[3] == 0) || (*(int *)(*piVar2 + 0x20) == 3)) {
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar4 = (*extraout_w11)(uVar3);
      uVar5 = 1;
      if (*(ulonglong *)(piVar2 + 4) <= uVar4) goto LAB_1005d8c8;
    }
    uVar5 = 0;
  }
LAB_1005d8c8:
  (*(code *)PTR_FUN_100a0090)(param_1 + 0x1c);
  return uVar5;
}

