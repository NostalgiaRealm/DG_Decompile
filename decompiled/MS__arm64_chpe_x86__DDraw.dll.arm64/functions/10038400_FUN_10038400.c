/*
 * FUN_10038400 at 10038400
 * undefined FUN_10038400(void)
 * Address ranges: 10038400-10038613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038400(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_40 [16];
  
  FUN_10037888(auStack_40);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x14f) != '\0') {
    if (*(int *)(param_1 + 0xc) != 0) {
      auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff);
      *(int *)(param_1 + 0xc) = 0;
    }
    uVar6 = FUN_1003c490(param_1,0,8,1);
    *(char *)(param_1 + 0x14f) = '\0';
    uVar7 = 0;
    if (*(uint *)(param_1 + 300) != 0) {
      do {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x128) + uVar7 * 4);
        uVar6 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          uVar6 = FUN_10042af0(uVar2);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 300));
    }
    uVar7 = 0;
    if (*(uint *)(param_1 + 0x138) != 0) {
      do {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x134) + uVar7 * 4);
        uVar6 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          uVar5 = (*pcVar4)();
          uVar6 = (*extraout_w11_00)(uVar5);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x138));
    }
    uVar7 = 0;
    if (*(uint *)(param_1 + 0x144) != 0) {
      do {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x140) + uVar7 * 4);
        uVar6 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          uVar5 = (*pcVar4)();
          uVar6 = (*extraout_w11_01)(uVar5);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x144));
    }
    uVar7 = 0;
    do {
      iVar3 = *(int *)(param_1 + 100 + uVar7 * 0x1c);
      if (iVar3 != 0) {
        iVar1 = param_1 + 0x4c + uVar7 * 0x1c;
        uVar6 = FUN_100382d8(uVar6,iVar1,iVar3);
        *(undefined4 *)(iVar1 + 0x18) = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 6);
    FUN_10037bb8(param_1);
  }
  (*pcVar4)();
  (*extraout_w11_02)(param_1,1);
  FUN_10037900(auStack_40);
  return;
}

