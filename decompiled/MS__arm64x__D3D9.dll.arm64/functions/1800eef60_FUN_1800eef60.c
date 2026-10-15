/*
 * FUN_1800eef60 at 1800eef60
 * undefined FUN_1800eef60(void)
 * Address ranges: 1800eef60-1800ef487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800eef60(longlong param_1,longlong *param_2,int param_3,longlong param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  code *pcVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  
  lVar18 = 0;
  lVar17 = 0;
  lVar16 = 0;
  if (*(int *)(param_1 + -0xc) != 0) goto LAB_1800ef460;
  if (*(longlong *)(param_1 + 8) == 0) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
LAB_1800ef08c:
      if (*(int *)(param_1 + 0x20) == 0) {
        local_90[0] = 1;
        local_60 = 0;
        uStack_b8 = 0;
        uStack_a8 = 0;
        local_b0 = (longlong *)0x0;
        uStack_98 = 0;
        local_a0 = 0;
        lStack_80 = ((ulonglong)(*(int *)(param_1 + -0x10) + 0xffU & 0xffffff00) & 0x3fffff) << 10;
        local_88 = 0x10000;
        local_68 = 0x100000000;
        local_78 = 0x1000100000001;
        uStack_70 = 0x100000000;
        bVar7 = false;
        plVar13 = *(longlong **)
                   (*(longlong *)(param_1 + -0x38) + (ulonglong)*(uint *)(param_1 + -0x30) * 0x20);
        iVar10 = (**(code **)(*plVar13 + 0xd8))
                           (plVar13,&DAT_18023bf50,0,local_90,0xac3,0,&DAT_180235458,&local_b0);
        if (-1 < iVar10) {
          uVar14 = (**(code **)(*local_b0 + 0x58))();
          iVar10 = (**(code **)(*local_b0 + 0x40))(local_b0,0,0,&uStack_b8);
          if (-1 < iVar10) {
            iVar10 = *(int *)(param_1 + 0x24);
            if (*(int *)(param_1 + 0x20) == 0) {
              if (iVar10 == 0) {
                lVar15 = thunk_FUN_180102f80(0x300);
                if (lVar15 == 0) goto LAB_1800ef27c;
                thunk_FUN_180001218(lVar15,*(undefined8 *)(param_1 + 0x18),
                                    (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x18));
                *(longlong *)(param_1 + 0x18) = lVar15;
                *(undefined4 *)(param_1 + 0x24) = 0x10;
              }
              bVar7 = true;
              puVar12 = (undefined8 *)
                        (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x30
                        );
              puVar12[1] = uStack_b8;
              *puVar12 = uVar14;
              puVar12[3] = uStack_a8;
              puVar12[2] = local_b0;
              puVar12[5] = uStack_98;
              puVar12[4] = local_a0;
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              goto LAB_1800ef28c;
            }
            iVar2 = *(int *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x20) == iVar10) {
              uVar4 = iVar10 << 1;
              if (iVar10 == 0) {
                uVar4 = 0x10;
              }
              lVar15 = CONCAT44(0,uVar4) * 0x30;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = CONCAT44(0,uVar4);
              if (SUB168(auVar6 * ZEXT816(0x30),8) != 0) {
                lVar15 = -1;
              }
              lVar15 = thunk_FUN_180102f80(lVar15);
              if (lVar15 != 0) {
                thunk_FUN_180001218(lVar15,*(undefined8 *)(param_1 + 0x18),
                                    (ulonglong)*(uint *)(param_1 + 0x24) * 0x30);
                thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x18));
                *(longlong *)(param_1 + 0x18) = lVar15;
                *(uint *)(param_1 + 0x24) = uVar4;
                goto LAB_1800ef1c0;
              }
              bVar7 = false;
            }
            else {
LAB_1800ef1c0:
              uVar3 = *(uint *)(param_1 + 0x20);
              uVar4 = iVar2 + 1;
              while (uVar11 = (ulonglong)uVar3, uVar4 < uVar3) {
                uVar3 = uVar3 - 1;
                puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar11 * 0x30);
                puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 0x30);
                uVar21 = *puVar1;
                uVar20 = puVar1[3];
                uVar19 = puVar1[2];
                puVar12[1] = puVar1[1];
                *puVar12 = uVar21;
                puVar12[3] = uVar20;
                puVar12[2] = uVar19;
                uVar19 = puVar1[4];
                puVar12[5] = puVar1[5];
                puVar12[4] = uVar19;
              }
              bVar7 = true;
              puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar4 * 0x30);
              puVar12[1] = uStack_b8;
              *puVar12 = uVar14;
              puVar12[3] = uStack_a8;
              puVar12[2] = local_b0;
              puVar12[5] = uStack_98;
              puVar12[4] = local_a0;
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
            if (bVar7) goto LAB_1800ef28c;
          }
LAB_1800ef27c:
          (**(code **)(*local_b0 + 0x10))();
        }
LAB_1800ef28c:
        if (!bVar7) goto LAB_1800ef418;
      }
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x20) =
           *(undefined8 *)(param_1 + -0x28);
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 + 0x28) =
           *(undefined8 *)(param_1 + -0x20);
      uVar4 = *(int *)(param_1 + -0x10) + 0xffU & 0xffffff00;
      if (uVar4 * 0x400 <
          *(int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30 +
                  0x18) + uVar4) {
        uVar4 = *(uint *)(param_1 + 0x28) + 1;
        uVar3 = *(uint *)(param_1 + 0x20);
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x1800ef2fc);
          (*pcVar8)();
        }
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar4 = uVar4 - uVar5 * uVar3;
        lVar15 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar4 * 0x30;
        plVar13 = *(longlong **)(lVar15 + 0x20);
        if (plVar13 != (longlong *)0x0) {
          uVar11 = (**(code **)(*plVar13 + 0x40))();
          if (*(ulonglong *)(lVar15 + 0x28) <= uVar11) {
            *(uint *)(param_1 + 0x28) = uVar4;
            *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar4 * 0x30 + 0x18) = 0;
            goto LAB_1800ef3c8;
          }
        }
        uVar11 = FUN_1800ef520(param_1 + -0x40);
        if ((uVar11 & 1) == 0) goto LAB_1800ef418;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
LAB_1800ef3c8:
      plVar13 = (longlong *)
                (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x30);
      lVar16 = plVar13[2];
      *(longlong *)(param_1 + 0x40) = lVar16;
      lVar18 = *plVar13 + (ulonglong)*(uint *)(plVar13 + 3);
      *(longlong *)(param_1 + 0x30) = lVar18;
      lVar17 = plVar13[1] + (ulonglong)*(uint *)(plVar13 + 3);
      *(longlong *)(param_1 + 0x38) = lVar17;
      *(uint *)(plVar13 + 3) = (*(int *)(param_1 + -0x10) + 0xffU & 0xffffff00) + (int)plVar13[3];
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
    else if (param_3 == 2) goto LAB_1800ef08c;
LAB_1800ef418:
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
LAB_1800eefe8:
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1800f0b40(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + -0x10),
                    *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                    *(undefined8 *)(param_1 + -0x28),*(undefined8 *)(param_1 + -0x20));
    }
    bVar9 = FUN_1800f0470(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + -0x10),
                          param_1 + 0x30);
    if ((bVar9 & 1) == 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      bVar9 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,*(undefined4 *)(param_1 + -0x30));
        bVar9 = FUN_1800f0470(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + -0x10),
                              param_1 + 0x30);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    if (bVar9 != 0) {
LAB_1800ef058:
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
    if (((*(longlong **)(param_1 + -0x28) != (longlong *)0x0) &&
        (uVar11 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x40))(),
        uVar11 < *(ulonglong *)(param_1 + -0x20))) || (*(longlong *)(param_1 + -0x28) == 0))
    goto LAB_1800eefe8;
    goto LAB_1800ef058;
  }
  if (param_4 != 0) {
    *(longlong *)(param_1 + -0x28) = param_4;
    *(undefined8 *)(param_1 + -0x20) = param_5;
  }
  if (lVar16 != 0) {
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
LAB_1800ef460:
  *param_2 = lVar18;
  param_2[1] = lVar17;
  param_2[2] = lVar16;
  return param_2;
}

