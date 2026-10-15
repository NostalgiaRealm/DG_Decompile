/*
 * FUN_1801fe720 at 1801fe720
 * undefined FUN_1801fe720(void)
 * Address ranges: 1801fe720-1801fe893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801fe720(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                 longlong param_5,longlong param_6,longlong param_7,undefined8 param_8)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  longlong lVar8;
  longlong extraout_x8;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  
  auVar11 = FUN_180222c50(param_7,0,(ulonglong)param_4 << 3);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  iVar10 = 1;
  uVar9 = 0;
  if (param_4 != 0) {
    do {
      if (iVar10 == 0) goto LAB_1801fe86c;
      sVar2 = *(short *)(param_5 + uVar9 * 2);
      if (sVar2 != 0) {
        uVar4 = FUN_180222950(param_3,sVar2,u_RT_CUSTOM_1802381f0);
        lVar6 = FUN_1802227d0(param_3,*(undefined2 *)(param_5 + uVar9 * 2),u_RT_CUSTOM_1802381f0);
        if (lVar6 != 0) {
          uVar7 = (*(code *)puVar3)(0x180224000);
          iVar5 = (*extraout_x11)(uVar7,lVar6,uVar4,0,param_7 + uVar9 * 8);
          if (-1 < iVar5) {
            lVar8 = uVar9 * 0x10;
            uVar7 = (*(code *)puVar3)(*(undefined8 *)
                                       (param_1 + (param_2 & 0xffffffff) * 0x18c0 + 0x6b0),
                                      extraout_x1,*(undefined2 *)(param_6 + 8 + lVar8));
            iVar5 = (*extraout_x11_00)(uVar7,*(undefined8 *)(extraout_x8 + lVar8));
            if (-1 < iVar5) {
              auVar11 = FUN_1802229d8(lVar6);
              goto LAB_1801fe85c;
            }
          }
        }
        auVar11 = FUN_1802229d8(lVar6);
        iVar10 = 0;
      }
LAB_1801fe85c:
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < param_4);
    if (iVar10 == 0) {
LAB_1801fe86c:
      FUN_1801fe898(auVar11._0_8_,auVar11._8_8_,(ulonglong)param_4,param_7,param_8);
    }
  }
  return iVar10;
}

