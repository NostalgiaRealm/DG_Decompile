/*
 * FUN_1000f4e0 at 1000f4e0
 * undefined FUN_1000f4e0(void)
 * Address ranges: 1000f4e0-1000f73b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000f4e0(int param_1)

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
  
  piVar1 = (int *)(param_1 + 0x3308);
  FUN_100462b8(*piVar1 + 0x11c0);
  uVar3 = *(undefined4 *)(*(int *)(*piVar1 + 0x1300) + 0xc);
  uVar7 = *(undefined8 *)(*(int *)(*piVar1 + 0x1304) + 0x938);
  iVar4 = *(int *)(param_1 + 0x3314);
  if (iVar4 != 0) {
    FUN_1005bc90(iVar4);
    FUN_1007dd10(iVar4,0x78);
  }
  piVar2 = (int *)(param_1 + 0x3300);
  FUN_10060ef0(*piVar2,*(undefined4 *)(param_1 + 0x3318));
  FUN_10060ef0(*piVar2,*(undefined4 *)(param_1 + 0x3328));
  *(undefined4 *)(param_1 + 0x3328) = 0;
  iVar4 = *(int *)(param_1 + 0x3334);
  if (iVar4 != 0) {
    FUN_1005cdb0(*(undefined4 *)(*piVar2 + 0x172c0),iVar4,0,1);
  }
  iVar4 = *(int *)(param_1 + 0x3330);
  if (iVar4 != 0) {
    FUN_1005cdb0(*(undefined4 *)(*piVar2 + 0x172c0),iVar4,0,1);
  }
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6);
  uVar6 = (*pcVar5)();
  (*extraout_w11_00)(uVar6);
  *(int *)(param_1 + 0x3334) = 0;
  *(int *)(param_1 + 0x3330) = 0;
  FUN_10060ef0(*piVar2,*(undefined4 *)(param_1 + 0x332c));
  *(undefined4 *)(param_1 + 0x332c) = 0;
  iVar4 = *(int *)(param_1 + 0x330c);
  if (iVar4 != 0) {
    FUN_10061560(iVar4);
    FUN_1007dd10(iVar4,0x30);
  }
  *(int *)(param_1 + 0x330c) = 0;
  iVar4 = *(int *)(param_1 + 0x3324);
  if (iVar4 != 0) {
    FUN_1005bc90(iVar4);
    FUN_1007dd10(iVar4,0x78);
  }
  FUN_10060ef0(*piVar2,*(undefined4 *)(param_1 + 0x331c));
  FUN_10060ef0(*piVar2,*(undefined4 *)(param_1 + 0x3320));
  *(undefined8 *)(param_1 + 0x331c) = 0;
  *(int *)(param_1 + 0x3324) = 0;
  FUN_10062620(*(undefined4 *)(*piVar1 + 0x15dc),*(undefined4 *)(param_1 + 0x3338),2,uVar3,uVar7);
  *(undefined4 *)(param_1 + 0x3338) = 0xffffffff;
  return;
}

