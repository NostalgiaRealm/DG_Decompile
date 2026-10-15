/*
 * FUN_1003c2f0 at 1003c2f0
 * undefined FUN_1003c2f0(void)
 * Address ranges: 1003c2f0-1003c47b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003c2f0(int param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  
  FUN_10037888(auStack_40);
  FUN_100a9d50(auStack_3c);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((((&DAT_100be33c)[*(int *)(param_1 + 0x11c) * 0x228] == '\0') ||
      (iVar7 = -0x7789ff1f, (*(uint *)(param_1 + 0x104) >> 4 & 1) != 0)) &&
     (iVar7 = 0, *(char *)(param_1 + 0x109) == '\0')) {
    if (*(uint *)(param_1 + 300) != 0) {
      uVar6 = 0;
      do {
        if (iVar7 < 0) goto LAB_1003c454;
        iVar1 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x128) + iVar1) + 4) + 0xb0) != 0) {
          iVar7 = -0x7789ff60;
        }
      } while (uVar6 < *(uint *)(param_1 + 300));
      if (iVar7 < 0) goto LAB_1003c454;
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      iVar7 = -0x7fffbffb;
      auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar3 = (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff);
      if (cVar3 != '\0') {
        uVar4 = (*pcVar2)();
        (*extraout_w11_00)(uVar4,*(int *)(param_1 + 0xfc),1,1);
        FUN_10006638(param_1 + 0x10);
        uVar5 = FUN_100389c8(param_1,*(undefined4 *)(param_1 + 0x120));
        if ((uVar5 & 1) != 0) {
          FUN_1003c130(param_1);
          iVar7 = 0;
        }
      }
    }
  }
LAB_1003c454:
  FUN_100a9ca0(auStack_3c);
  FUN_10037900(auStack_40);
  return iVar7;
}

