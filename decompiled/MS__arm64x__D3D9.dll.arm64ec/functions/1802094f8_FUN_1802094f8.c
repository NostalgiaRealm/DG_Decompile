/*
 * FUN_1802094f8 at 1802094f8
 * undefined FUN_1802094f8(void)
 * Address ranges: 1802094f8-180209637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802094f8(longlong param_1,uint param_2,longlong *param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  code *extraout_x11;
  
  lVar1 = param_1 + 0x4d8;
  bVar3 = true;
  uVar5 = 0;
  if (param_4 == 0) {
    do {
      lVar6 = *(longlong *)(lVar1 + (ulonglong)uVar5 * 8);
      if (uVar5 < param_2) {
        if (lVar6 != param_3[uVar5]) {
          *(longlong *)(lVar1 + (ulonglong)uVar5 * 8) = param_3[uVar5];
LAB_1802095a4:
          bVar3 = false;
        }
      }
      else if (lVar6 != 0) {
        *(undefined8 *)(lVar1 + (ulonglong)uVar5 * 8) = 0;
        goto LAB_1802095a4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
  }
  else {
    do {
      if (uVar5 < param_2) {
        lVar6 = *param_3 + (ulonglong)(*(int *)(param_1 + 0xb98) * uVar5);
        if (*(longlong *)(lVar1 + (ulonglong)uVar5 * 8) != lVar6) {
          *(longlong *)(lVar1 + (ulonglong)uVar5 * 8) = lVar6;
LAB_180209568:
          bVar3 = false;
        }
      }
      else if (*(longlong *)(lVar1 + (ulonglong)uVar5 * 8) != 0) {
        *(undefined8 *)(lVar1 + (ulonglong)uVar5 * 8) = 0;
        goto LAB_180209568;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
  }
  plVar2 = param_5;
  if (param_5 == (longlong *)0x0) {
    plVar2 = &DAT_180258a28;
  }
  if ((!bVar3) || (*plVar2 != *(longlong *)(param_1 + 0x518))) {
    FUN_180206ff8(param_1);
    uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
    (*extraout_x11)(uVar4,param_2,param_3,param_4,param_5);
    *(longlong *)(param_1 + 0x518) = *plVar2;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

