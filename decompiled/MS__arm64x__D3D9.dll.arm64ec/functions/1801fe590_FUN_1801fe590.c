/*
 * FUN_1801fe590 at 1801fe590
 * undefined FUN_1801fe590(void)
 * Address ranges: 1801fe590-1801fe6af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801fe590(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 longlong param_5,longlong param_6)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *extraout_x11;
  ulonglong uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  auVar10 = FUN_180222c50(param_6,0,(ulonglong)param_4 << 3);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  iVar9 = 1;
  uVar8 = 0;
  if (param_4 != 0) {
    do {
      if (iVar9 == 0) goto LAB_1801fe688;
      sVar2 = *(short *)(param_5 + uVar8 * 2);
      if (sVar2 != 0) {
        uVar4 = FUN_180222950(param_3,sVar2,u_RT_CUSTOM_1802381f0);
        lVar6 = FUN_1802227d0(param_3,*(undefined2 *)(param_5 + uVar8 * 2),u_RT_CUSTOM_1802381f0);
        if (lVar6 != 0) {
          uVar7 = (*(code *)puVar3)();
          iVar5 = (*extraout_x11)(uVar7,lVar6,uVar4,0,param_6 + uVar8 * 8);
          if (-1 < iVar5) {
            auVar10 = FUN_1802229d8(lVar6);
            goto LAB_1801fe678;
          }
        }
        auVar10 = FUN_1802229d8(lVar6);
        iVar9 = 0;
      }
LAB_1801fe678:
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < param_4);
    if (iVar9 == 0) {
LAB_1801fe688:
      FUN_1801fe6b0(auVar10._0_8_,auVar10._8_8_,(ulonglong)param_4,param_6);
    }
  }
  return iVar9;
}

