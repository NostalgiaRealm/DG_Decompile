/*
 * FUN_10052bf0 at 10052bf0
 * undefined FUN_10052bf0(void)
 * Address ranges: 10052bf0-10052d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10052bf0(int param_1,char param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar4;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_50);
  uVar4 = 0;
  do {
    FUN_100575f0(param_1,uVar4,0,0);
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,1,1,&local_38,&local_48);
  if ((*(int *)(param_1 + 0xa74) != 0) &&
     (*(undefined4 *)(*(int *)(param_1 + 0xa74) + 0x10) = 0, param_2 != '\0')) {
    uVar3 = (*pcVar1)();
    (*extraout_w11_00)(uVar3,1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_10063390(*(undefined4 *)(*(int *)(param_1 + 0xa70) + 0xc),param_1);
  FUN_10053620(param_1);
  FUN_10059020(param_1 + 0x9dc);
  (*pcVar1)();
  (*extraout_w11_01)(param_1,1);
  FUN_10096790(auStack_50);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return;
}

