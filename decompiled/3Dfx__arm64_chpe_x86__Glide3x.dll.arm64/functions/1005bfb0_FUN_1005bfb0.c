/*
 * FUN_1005bfb0 at 1005bfb0
 * undefined FUN_1005bfb0(void)
 * Address ranges: 1005bfb0-1005c43b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1005bfb0(int param_1,longlong *param_2,int param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  undefined8 uVar12;
  char cVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + -0xc);
  lVar20 = 0;
  iVar19 = 0;
  iVar17 = 0;
  iVar18 = iVar17;
  if (*piVar1 != 0) goto LAB_1005c408;
  piVar2 = (int *)(param_1 + 8);
  if (*piVar2 == 0) {
    piVar2 = (int *)(param_1 + 0x34);
    if (*piVar2 == 0) {
LAB_1005c198:
      if ((*(uint *)(param_1 + 0x14) != 0) ||
         (uVar15 = FUN_1005c500(param_1 + -0x38), (uVar15 & 1) != 0)) {
        piVar3 = (int *)(param_1 + 0x1c);
        piVar4 = (int *)(param_1 + 0x10);
        *(undefined4 *)(*piVar4 + *piVar3 * 0x20 + 0x14) = *(undefined4 *)(param_1 + -0x28);
        *(undefined8 *)(*piVar4 + *piVar3 * 0x20 + 0x18) = *(undefined8 *)(param_1 + -0x20);
        uVar7 = *(int *)(param_1 + -0x10) + 0xffU & 0xffffff00;
        if (uVar7 * 0x400 < *(int *)(*piVar4 + *piVar3 * 0x20 + 0x10) + uVar7) {
          uVar7 = *piVar3 + 1;
          uVar8 = *(uint *)(param_1 + 0x14);
          if (uVar8 == 0) {
                    /* WARNING: Does not return */
            uVar12 = SoftwareBreakpoint(0xf004,0x1005c244);
            (*(code *)uVar12)();
          }
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar7 / uVar8;
          }
          iVar9 = uVar7 - uVar10 * uVar8;
          iVar17 = *piVar4 + iVar9 * 0x20;
          if (*(int *)(iVar17 + 0x14) != 0) {
            uVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            uVar15 = (*extraout_w11_01)(uVar14);
            if (*(ulonglong *)(iVar17 + 0x18) <= uVar15) {
              *piVar3 = iVar9;
              *(undefined4 *)(*piVar4 + iVar9 * 0x20 + 0x10) = 0;
              goto LAB_1005c330;
            }
          }
          uVar15 = FUN_1005c500(param_1 + -0x38);
          if ((uVar15 & 1) == 0) goto LAB_1005c3a4;
          *piVar3 = *piVar3 + 1;
        }
LAB_1005c330:
        plVar6 = (longlong *)(*piVar4 + *piVar3 * 0x20);
        iVar18 = *(int *)((int)plVar6 + 0xc);
        puVar5 = (uint *)(plVar6 + 2);
        *piVar2 = iVar18;
        lVar20 = *plVar6 + (ulonglong)*puVar5;
        *(longlong *)(param_1 + 0x28) = lVar20;
        iVar19 = (int)plVar6[1] + *puVar5;
        *(int *)(param_1 + 0x30) = iVar19;
        *puVar5 = (*(int *)(param_1 + -0x10) + 0xffU & 0xffffff00) + *puVar5;
      }
    }
    else if (param_3 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) * 0x20 + 0x14) =
           *(undefined4 *)(param_1 + -0x28);
      *(undefined8 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) * 0x20 + 0x18) =
           *(undefined8 *)(param_1 + -0x20);
      iVar18 = *piVar2;
      iVar19 = *(int *)(param_1 + 0x30);
      lVar20 = *(longlong *)(param_1 + 0x28);
    }
    else if (param_3 == 2) goto LAB_1005c198;
LAB_1005c3a4:
    if (*piVar2 != 0) {
      *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) * 0x20 + 0x14) = param_4;
      *(undefined8 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) * 0x20 + 0x18) = param_5;
    }
  }
  else {
    iVar18 = *(int *)(param_1 + 0x2c);
    if (iVar18 == 0) {
LAB_1005c084:
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_10076140(*piVar2,*(undefined4 *)(param_1 + -0x10),*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + -0x28),
                     *(undefined8 *)(param_1 + -0x20));
      }
      cVar13 = FUN_10075948(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + -0x10),
                            param_1 + 0x28);
      if ((cVar13 == '\0') && (*(int *)(param_1 + 0xc) != 0)) {
        puVar16 = (undefined4 *)(param_1 + -0x2c);
        uVar14 = (*pcVar11)();
        (*extraout_w11_00)(uVar14,*puVar16);
        cVar13 = FUN_10075948(*piVar2,*(undefined4 *)(param_1 + -0x10),param_1 + 0x28);
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      iVar18 = iVar17;
      if (cVar13 != '\0') {
LAB_1005c144:
        iVar19 = *(int *)(param_1 + 0x28);
        lVar20 = *(longlong *)(param_1 + 0x30);
        iVar18 = *(int *)(param_1 + 0x2c);
      }
    }
    else if (param_3 == 1) {
      iVar19 = *(int *)(param_1 + 0x28);
      lVar20 = *(longlong *)(param_1 + 0x30);
    }
    else {
      iVar18 = iVar17;
      if (param_3 == 2) {
        if (*(int *)(param_1 + -0x28) != 0) {
          uVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          uVar15 = (*extraout_w11)(uVar14);
          if (uVar15 < *(ulonglong *)(param_1 + -0x20)) goto LAB_1005c084;
        }
        if (*(int *)(param_1 + -0x28) == 0) goto LAB_1005c084;
        goto LAB_1005c144;
      }
    }
  }
  if (param_4 != 0) {
    *(int *)(param_1 + -0x28) = param_4;
    *(undefined8 *)(param_1 + -0x20) = param_5;
  }
  if (iVar18 != 0) {
    *piVar1 = *piVar1 + 1;
  }
LAB_1005c408:
  *param_2 = lVar20;
  *(int *)(param_2 + 1) = iVar19;
  *(int *)((int)param_2 + 0xc) = iVar18;
  return param_2;
}

