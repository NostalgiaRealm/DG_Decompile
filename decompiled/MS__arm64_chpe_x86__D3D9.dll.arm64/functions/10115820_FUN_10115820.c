/*
 * FUN_10115820 at 10115820
 * undefined FUN_10115820(void)
 * Address ranges: 10115820-101159a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10115820(int param_1,uint param_2,int *param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  code *extraout_w11;
  
  bVar3 = true;
  uVar5 = 0;
  if (param_4 == 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x4a8 + uVar5 * 4);
      if (uVar5 < param_2) {
        if (iVar2 != param_3[uVar5]) {
          *(int *)(param_1 + uVar5 * 4 + 0x4a8) = param_3[uVar5];
LAB_101158fc:
          bVar3 = false;
        }
      }
      else if (iVar2 != 0) {
        *(undefined4 *)(param_1 + uVar5 * 4 + 0x4a8) = 0;
        goto LAB_101158fc;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
  }
  else {
    do {
      piVar1 = (int *)(param_1 + 0x4a8 + uVar5 * 4);
      if (uVar5 < param_2) {
        iVar2 = *param_3 + *(int *)(param_1 + 0x950) * uVar5;
        if (*piVar1 != iVar2) {
          *(int *)(param_1 + uVar5 * 4 + 0x4a8) = iVar2;
LAB_101158a8:
          bVar3 = false;
        }
      }
      else if (*piVar1 != 0) {
        *(undefined4 *)(param_1 + uVar5 * 4 + 0x4a8) = 0;
        goto LAB_101158a8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
  }
  piVar1 = param_5;
  if (param_5 == (int *)0x0) {
    piVar1 = &DAT_10175b78;
  }
  if ((!bVar3) || (*piVar1 != *(int *)(param_1 + 0x4c8))) {
    FUN_10113218(param_1);
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,param_2,param_3,param_4,param_5);
    *(int *)(param_1 + 0x4c8) = *piVar1;
    *(undefined1 *)(param_1 + 0x620) = 1;
  }
  return;
}

