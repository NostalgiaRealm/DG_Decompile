/*
 * FUN_10020190 at 10020190
 * undefined FUN_10020190(void)
 * Address ranges: 10020190-100203eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020190(int param_1)

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
  
  piVar1 = (int *)(param_1 + 0x3188);
  FUN_100559d8(*piVar1 + 0x11c0);
  uVar3 = *(undefined4 *)(*(int *)(*piVar1 + 0x1300) + 0xc);
  uVar7 = *(undefined8 *)(*(int *)(*piVar1 + 0x1304) + 0x938);
  iVar4 = *(int *)(param_1 + 0x3194);
  if (iVar4 != 0) {
    FUN_10058480(iVar4);
    FUN_1007a470(iVar4,0x78);
  }
  piVar2 = (int *)(param_1 + 0x3180);
  FUN_1005d6e0(*piVar2,*(undefined4 *)(param_1 + 0x3198));
  FUN_1005d6e0(*piVar2,*(undefined4 *)(param_1 + 0x31a8));
  *(undefined4 *)(param_1 + 0x31a8) = 0;
  iVar4 = *(int *)(param_1 + 0x31b4);
  if (iVar4 != 0) {
    FUN_100595a0(*(undefined4 *)(*piVar2 + 0x172c0),iVar4,0,1);
  }
  iVar4 = *(int *)(param_1 + 0x31b0);
  if (iVar4 != 0) {
    FUN_100595a0(*(undefined4 *)(*piVar2 + 0x172c0),iVar4,0,1);
  }
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6);
  uVar6 = (*pcVar5)();
  (*extraout_w11_00)(uVar6);
  *(int *)(param_1 + 0x31b4) = 0;
  *(int *)(param_1 + 0x31b0) = 0;
  FUN_1005d6e0(*piVar2,*(undefined4 *)(param_1 + 0x31ac));
  *(undefined4 *)(param_1 + 0x31ac) = 0;
  iVar4 = *(int *)(param_1 + 0x318c);
  if (iVar4 != 0) {
    FUN_1005dd50(iVar4);
    FUN_1007a470(iVar4,0x30);
  }
  *(int *)(param_1 + 0x318c) = 0;
  iVar4 = *(int *)(param_1 + 0x31a4);
  if (iVar4 != 0) {
    FUN_10058480(iVar4);
    FUN_1007a470(iVar4,0x78);
  }
  FUN_1005d6e0(*piVar2,*(undefined4 *)(param_1 + 0x319c));
  FUN_1005d6e0(*piVar2,*(undefined4 *)(param_1 + 0x31a0));
  *(undefined8 *)(param_1 + 0x319c) = 0;
  *(int *)(param_1 + 0x31a4) = 0;
  FUN_1005ee10(*(undefined4 *)(*piVar1 + 0x15dc),*(undefined4 *)(param_1 + 0x31b8),2,uVar3,uVar7);
  *(undefined4 *)(param_1 + 0x31b8) = 0xffffffff;
  return;
}

