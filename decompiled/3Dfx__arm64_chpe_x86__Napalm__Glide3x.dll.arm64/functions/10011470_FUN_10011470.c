/*
 * FUN_10011470 at 10011470
 * undefined FUN_10011470(void)
 * Address ranges: 10011470-100116cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10011470(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar7;
  
  piVar1 = (int *)(param_1 + 0x3688);
  FUN_1004b978(*piVar1 + 0x11c0);
  uVar3 = *(undefined4 *)(*(int *)(*piVar1 + 0x1300) + 0xc);
  uVar7 = *(undefined8 *)(*(int *)(*piVar1 + 0x1304) + 0x938);
  iVar4 = *(int *)(param_1 + 0x3694);
  if (iVar4 != 0) {
    FUN_10061340(iVar4);
    FUN_100833b0(iVar4,0x78);
  }
  piVar2 = (int *)(param_1 + 0x3680);
  FUN_10066590(*piVar2,*(undefined4 *)(param_1 + 0x3698));
  FUN_10066590(*piVar2,*(undefined4 *)(param_1 + 0x36a8));
  *(undefined4 *)(param_1 + 0x36a8) = 0;
  iVar4 = *(int *)(param_1 + 0x36b4);
  if (iVar4 != 0) {
    FUN_10062460(*(undefined4 *)(*piVar2 + 0x172c0),iVar4,0,1);
  }
  iVar4 = *(int *)(param_1 + 14000);
  if (iVar4 != 0) {
    FUN_10062460(*(undefined4 *)(*piVar2 + 0x172c0),iVar4,0,1);
  }
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6);
  uVar6 = (*pcVar5)();
  (*extraout_w11_00)(uVar6);
  *(int *)(param_1 + 0x36b4) = 0;
  *(int *)(param_1 + 14000) = 0;
  FUN_10066590(*piVar2,*(undefined4 *)(param_1 + 0x36ac));
  *(undefined4 *)(param_1 + 0x36ac) = 0;
  iVar4 = *(int *)(param_1 + 0x368c);
  if (iVar4 != 0) {
    FUN_10066c00(iVar4);
    FUN_100833b0(iVar4,0x30);
  }
  *(int *)(param_1 + 0x368c) = 0;
  iVar4 = *(int *)(param_1 + 0x36a4);
  if (iVar4 != 0) {
    FUN_10061340(iVar4);
    FUN_100833b0(iVar4,0x78);
  }
  FUN_10066590(*piVar2,*(undefined4 *)(param_1 + 0x369c));
  FUN_10066590(*piVar2,*(undefined4 *)(param_1 + 0x36a0));
  *(undefined8 *)(param_1 + 0x369c) = 0;
  *(int *)(param_1 + 0x36a4) = 0;
  FUN_10067cc0(*(undefined4 *)(*piVar1 + 0x15dc),*(undefined4 *)(param_1 + 0x36b8),2,uVar3,uVar7);
  *(undefined4 *)(param_1 + 0x36b8) = 0xffffffff;
  return;
}

