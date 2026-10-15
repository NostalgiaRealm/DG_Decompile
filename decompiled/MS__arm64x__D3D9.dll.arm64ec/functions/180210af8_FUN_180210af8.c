/*
 * FUN_180210af8 at 180210af8
 * undefined FUN_180210af8(void)
 * Address ranges: 180210af8-180210d87;180210da0-180210f77;180210f90-18021109b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180210af8(longlong param_1,longlong *param_2,int param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  code *pcVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  puVar8 = __hybrid_os_arm64x_dispatch_icall;
  lVar18 = 0;
  lVar17 = 0;
  lVar16 = 0;
  local_80 = param_2;
  if (*(int *)(param_1 + -0xc) != 0) goto LAB_180211074;
  if (*(longlong *)(param_1 + 8) == 0) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
LAB_180210c44:
      if (*(int *)(param_1 + 0x20) == 0) {
        local_78[0] = 1;
        local_48 = 0;
        uStack_a8 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        local_90 = 0;
        lStack_68 = ((ulonglong)(*(int *)(param_1 + -0x10) + 0xffU & 0xffffff00) & 0x3fffff) << 10;
        local_70 = 0x10000;
        local_50 = 0x100000000;
        local_60 = 0x1000100000001;
        uStack_58 = 0x100000000;
        bVar7 = false;
        uVar12 = FUN_18020d338(*(undefined8 *)(param_1 + -0x38),*(undefined4 *)(param_1 + -0x30),
                               &DAT_1802390e0,0,local_78,0xac3,0,param_8,&local_a0);
        if ((uVar12 & 1) == 0) goto LAB_180210e7c;
        (*(code *)puVar8)();
        uVar13 = (*extraout_x11_01)();
        uVar14 = (*(code *)puVar8)();
        iVar11 = (*extraout_x11_02)(uVar14,0,0,&uStack_a8);
        if (iVar11 < 0) {
LAB_180210e5c:
          (*(code *)puVar8)();
          (*extraout_x11_03)();
        }
        else {
          iVar11 = *(int *)(param_1 + 0x24);
          if (*(int *)(param_1 + 0x20) == 0) {
            if (iVar11 == 0) {
              lVar15 = FUN_1802229a8(0x300);
              if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(lVar15,*(undefined8 *)(param_1 + 0x18),
                                    (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
              }
              goto LAB_180210e5c;
            }
            bVar7 = true;
            puVar1 = (undefined8 *)
                     (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
            puVar1[1] = uStack_a8;
            *puVar1 = uVar13;
            puVar1[3] = uStack_98;
            puVar1[2] = local_a0;
            puVar1[5] = uStack_88;
            puVar1[4] = local_90;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          else {
            if (*(int *)(param_1 + 0x20) == iVar11) {
              uVar5 = iVar11 << 1;
              if (iVar11 == 0) {
                uVar5 = 0x10;
              }
              lVar15 = (ulonglong)uVar5 * 0x30;
              if (SUB168(ZEXT416(uVar5) * ZEXT816(0x30),8) != 0) {
                lVar15 = -1;
              }
              lVar15 = FUN_1802229a8(lVar15);
              if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(lVar15,*(undefined8 *)(param_1 + 0x18),
                                    (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
              }
              bVar7 = false;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x20);
              uVar5 = *(int *)(param_1 + 0x28) + 1;
              while (uVar12 = (ulonglong)uVar4, uVar5 < uVar4) {
                uVar4 = uVar4 - 1;
                puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 0x30);
                puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar4 * 0x30);
                uVar14 = *puVar2;
                uVar20 = puVar2[3];
                uVar19 = puVar2[2];
                puVar1[1] = puVar2[1];
                *puVar1 = uVar14;
                puVar1[3] = uVar20;
                puVar1[2] = uVar19;
                uVar14 = puVar2[4];
                puVar1[5] = puVar2[5];
                puVar1[4] = uVar14;
              }
              bVar7 = true;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar5 * 0x30);
              puVar1[1] = uStack_a8;
              *puVar1 = uVar13;
              puVar1[3] = uStack_98;
              puVar1[2] = local_a0;
              puVar1[5] = uStack_88;
              puVar1[4] = local_90;
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
            if (!bVar7) goto LAB_180210e5c;
          }
        }
LAB_180210e7c:
        if (!bVar7) goto LAB_18021102c;
      }
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x20) =
           *(undefined8 *)(param_1 + -0x28);
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x28) =
           *(undefined8 *)(param_1 + -0x20);
      uVar5 = *(int *)(param_1 + -0x10) + 0xffU & 0xffffff00;
      if (uVar5 * 0x400 <
          *(int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 +
                  0x18) + uVar5) {
        uVar5 = *(uint *)(param_1 + 0x28) + 1;
        uVar4 = *(uint *)(param_1 + 0x20);
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x180210eec);
          (*pcVar9)();
        }
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar5 = uVar5 - uVar6 * uVar4;
        lVar15 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar5 * 0x30;
        if (*(longlong *)(lVar15 + 0x20) != 0) {
          (*(code *)puVar8)();
          uVar12 = (*extraout_x11_04)();
          if (*(ulonglong *)(lVar15 + 0x28) <= uVar12) {
            *(uint *)(param_1 + 0x28) = uVar5;
            *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar5 * 0x30 + 0x18) = 0;
            goto LAB_180210fdc;
          }
        }
        uVar12 = FUN_180211158(param_1 + -0x40);
        if ((uVar12 & 1) == 0) goto LAB_18021102c;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
LAB_180210fdc:
      plVar3 = (longlong *)
               (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30);
      lVar16 = plVar3[2];
      *(longlong *)(param_1 + 0x40) = lVar16;
      lVar18 = *plVar3 + (ulonglong)*(uint *)(plVar3 + 3);
      *(longlong *)(param_1 + 0x30) = lVar18;
      lVar17 = plVar3[1] + (ulonglong)*(uint *)(plVar3 + 3);
      *(longlong *)(param_1 + 0x38) = lVar17;
      *(uint *)(plVar3 + 3) = (*(int *)(param_1 + -0x10) + 0xffU & 0xffffff00) + (int)plVar3[3];
    }
    else if (param_3 == 1) {
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x20) =
           *(undefined8 *)(param_1 + -0x28);
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x28) =
           *(undefined8 *)(param_1 + -0x20);
      lVar18 = *(longlong *)(param_1 + 0x30);
      lVar17 = *(longlong *)(param_1 + 0x38);
      lVar16 = *(longlong *)(param_1 + 0x40);
    }
    else if (param_3 == 2) goto LAB_180210c44;
LAB_18021102c:
    if (*(longlong *)(param_1 + 0x40) != 0) {
      *(longlong *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x20) =
           param_4;
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x28) =
           param_5;
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) {
LAB_180210b94:
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_180210140(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + -0x10),
                    *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                    *(undefined8 *)(param_1 + -0x28),*(undefined8 *)(param_1 + -0x20));
    }
    bVar10 = FUN_18020fa48(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + -0x10),
                           param_1 + 0x30);
    if ((bVar10 & 1) == 0) {
      bVar10 = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        uVar13 = (*(code *)puVar8)(0x180224000);
        (*extraout_x11_00)(uVar13,*(undefined4 *)(param_1 + -0x30));
        bVar10 = FUN_18020fa48(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + -0x10),
                               param_1 + 0x30);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    if (bVar10 != 0) {
LAB_180210c10:
      lVar18 = *(longlong *)(param_1 + 0x40);
      lVar17 = *(longlong *)(param_1 + 0x30);
      lVar16 = *(longlong *)(param_1 + 0x38);
    }
  }
  else if (param_3 == 1) {
    lVar17 = *(longlong *)(param_1 + 0x30);
    lVar18 = *(longlong *)(param_1 + 0x40);
    lVar16 = *(longlong *)(param_1 + 0x38);
  }
  else if (param_3 == 2) {
    if (*(longlong *)(param_1 + -0x28) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar12 = (*extraout_x11)();
      if (uVar12 < *(ulonglong *)(param_1 + -0x20)) goto LAB_180210b94;
    }
    if (*(longlong *)(param_1 + -0x28) == 0) goto LAB_180210b94;
    goto LAB_180210c10;
  }
  if (param_4 != 0) {
    *(longlong *)(param_1 + -0x28) = param_4;
    *(undefined8 *)(param_1 + -0x20) = param_5;
  }
  if (lVar16 != 0) {
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
LAB_180211074:
  *local_80 = lVar18;
  local_80[1] = lVar17;
  local_80[2] = lVar16;
  return;
}

