/*
 * FUN_10004408 at 10004408
 * undefined FUN_10004408(void)
 * Address ranges: 10004408-10004547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004408(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  undefined8 local_60;
  int local_58;
  int iStack_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (*(code *)PTR_FUN_100ba02c)();
  local_60 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x60);
  puVar5 = (undefined4 *)(param_1 + 0x5c);
  local_58 = *(int *)(param_1 + 0x1c) + -1;
  iStack_54 = *(int *)(param_1 + 0x20) + -1;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,0,0,*puVar5,*puVar4,&local_60);
  local_4c = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  iVar2 = *(int *)(param_1 + 4);
  local_50 = *(undefined4 *)(param_1 + 0x6c);
  local_44 = FUN_1008e100(iVar2 + 4);
  local_40 = 0x200000002;
  uStack_38 = 0;
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 4);
  }
  local_60 = CONCAT44(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x70));
  local_58 = *(undefined4 *)(param_1 + 0x74);
  iStack_54 = *(int *)(param_1 + 0x20);
  FUN_10006d50(*(undefined4 *)(param_1 + 0x68),&local_50,iVar2,piVar1,0,0,0,0,param_1 + 0x78);
  return;
}

