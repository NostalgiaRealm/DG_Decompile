/*
 * FUN_1801e0b70 at 1801e0b70
 * undefined FUN_1801e0b70(void)
 * Address ranges: 1801e0b70-1801e111f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801e0b70(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  ulonglong uVar17;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_50 [8];
  ulonglong local_48;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar18 = param_1 + 8;
    FUN_1801181c0(auStack_50);
    lVar13 = DAT_18024d950;
    lVar12 = 0;
    if (lVar18 != 0) {
      lVar12 = param_1 + 0x50;
    }
    if ((DAT_18024d950 != 0) && (uVar19 = *(uint *)(DAT_18024d950 + 0x18), uVar19 != 0)) {
      uVar15 = 0;
      do {
        iVar8 = (int)uVar15;
        if (*(longlong *)(*(longlong *)(DAT_18024d950 + 0x10) + uVar15 * 8) == lVar12) {
          if (iVar8 != -1) {
            uVar14 = iVar8 + 1;
            if (uVar14 < uVar19) {
              do {
                uVar19 = uVar14 - 1;
                uVar15 = (ulonglong)uVar14;
                uVar14 = uVar14 + 1;
                *(undefined8 *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)uVar19 * 8) =
                     *(undefined8 *)(*(longlong *)(lVar13 + 0x10) + uVar15 * 8);
              } while (uVar14 < *(uint *)(lVar13 + 0x18));
            }
            *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          }
          break;
        }
        uVar15 = (ulonglong)(iVar8 + 1U);
      } while (iVar8 + 1U < uVar19);
    }
    iVar8 = FUN_1801042d0(&DAT_18024d940);
    lVar12 = DAT_18024d950;
    if ((iVar8 == 0) && (DAT_18024d950 != 0)) {
      if (DAT_18024d950 != 0) {
        FUN_18012b770(DAT_18024d950);
        FUN_1802229d8(lVar12,0x90);
      }
      DAT_18024d950 = 0;
    }
    puVar6 = __hybrid_os_arm64x_dispatch_icall;
    if (*(char *)(param_1 + 0x101) == '\0') {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar11 = (*extraout_x11)(lVar18);
      auVar23 = FUN_180220598(DAT_18024d928,uVar11);
      lVar12 = auVar23._0_8_;
      if (lVar12 != 0) {
        uVar11 = FUN_180220550(lVar12,auVar23._8_8_,FUN_180220748);
        *(undefined8 *)(lVar12 + 0x30) = uVar11;
      }
      uVar11 = (*(code *)puVar6)(0x180224000);
      (*extraout_x11_00)(uVar11,*(undefined8 *)(param_1 + 0x90));
      (*(code *)puVar6)(0x180224000);
      uVar11 = (*extraout_x11_01)(lVar18);
      auVar23 = FUN_180220598(DAT_18024d928,uVar11);
      lVar12 = auVar23._0_8_;
      uVar11 = 0;
      if (lVar12 != 0) {
        uVar11 = FUN_180220550(lVar12,auVar23._8_8_,*(undefined8 *)(lVar12 + 0x30));
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      uVar15 = (ulonglong)*(uint *)(param_1 + 0xf0);
      FUN_18012ca90(uVar11,uVar15,(&DAT_18024e860)[uVar15 * 0x96]);
      (&DAT_18024e334)[uVar15 * 0x28] = 0;
      uVar9 = FUN_18012ec60(lVar18);
      FUN_18012eda8(lVar18,1,uVar9);
      (*(code *)puVar6)(0x180224000);
      lVar12 = (*extraout_x11_02)(lVar18);
      if (lVar12 != 0) {
        thunk_FUN_180223d88(lVar12,0x20,0,0);
      }
    }
    lVar12 = DAT_18024d928;
    lVar20 = *(longlong *)(param_1 + 0x90);
    lVar13 = FUN_180220598(DAT_18024d928,lVar20);
    if (*(uint *)(lVar12 + 0x138) != 0) {
      lVar16 = *(longlong *)(lVar12 + 0x130);
      uVar15 = 0;
LAB_1801e0db8:
      uVar17 = uVar15 * 0x60;
      lVar2 = uVar17 + lVar16;
      uVar19 = (uint)uVar15;
      if ((*(longlong *)(uVar17 + lVar16) != lVar20) ||
         (*(longlong *)(lVar16 + 0x10 + uVar17) != lVar18)) goto LAB_1801e0de0;
      local_48 = uVar17;
      if ((*(longlong *)(lVar2 + 0x20) == 0) ||
         (*(int *)(lVar12 + 0x128) = *(int *)(lVar12 + 0x128) + -1, lVar13 != lVar2))
      goto LAB_1801e1000;
      iVar8 = *(int *)(lVar2 + 0x40);
      while (iVar8 != 0) {
        thunk_FUN_180224148(0);
        iVar8 = *(int *)(lVar2 + 0x40) + -1;
        *(int *)(lVar2 + 0x40) = iVar8;
      }
      uVar14 = uVar19;
      do {
        iVar8 = (int)uVar15;
        if (uVar14 == 0) {
          lVar18 = *(longlong *)(local_48 + *(longlong *)(lVar12 + 0x130) + 0x20);
          thunk_FUN_180224184(lVar20,0xaaaa);
          goto LAB_1801e0e74;
        }
        uVar14 = iVar8 - 1;
        uVar15 = (ulonglong)uVar14;
        plVar3 = (longlong *)(*(longlong *)(lVar12 + 0x130) + uVar15 * 0x60);
      } while (*plVar3 != lVar20);
      lVar18 = plVar3[5];
LAB_1801e0e74:
      if (lVar18 != 0) {
        local_48 = CONCAT44(local_48._4_4_,
                            *(undefined4 *)(local_48 + *(longlong *)(lVar12 + 0x130) + 0x38));
        iVar10 = thunk_FUN_180224170(lVar20);
        if (iVar10 == 0) {
          lVar13 = thunk_FUN_180223e64(lVar20,0xfffffffc);
        }
        else {
          lVar13 = thunk_FUN_180223d4c(lVar20);
        }
        uVar14 = (uint)local_48 * DAT_180246040;
        bVar7 = lVar13 == *(longlong *)(lVar12 + 0x110) + (ulonglong)uVar14;
        if (*(uint *)(lVar12 + 0x148) != 0) {
          uVar15 = 0;
          do {
            plVar3 = (longlong *)(*(longlong *)(lVar12 + 0x140) + uVar15 * 0x18);
            if (*plVar3 == lVar20) {
              iVar10 = (int)plVar3[2];
              if (iVar10 != -1) {
                uVar1 = iVar10 * DAT_180246028;
                *(longlong *)
                 (*(longlong *)(lVar12 + 0x108) + (ulonglong)DAT_18024602c + (ulonglong)uVar1) =
                     lVar18;
                if ((iVar8 != 0) ||
                   (bVar7 = true, lVar13 != *(longlong *)(lVar12 + 0x108) + (ulonglong)uVar1)) {
                  bVar7 = false;
                }
              }
              break;
            }
            uVar1 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar12 + 0x148));
        }
        if (bVar7) {
          FUN_180220550(lVar13,lVar20,lVar18);
          lVar18 = lVar12 + ((ulonglong)((uint)local_48 >> 6) + 0x2a) * 8;
          uVar15 = (ulonglong)((uint)local_48 >> 3) & 7;
          *(byte *)(lVar18 + uVar15) =
               *(byte *)(lVar18 + uVar15) & ((byte)(1 << (local_48 & 7)) ^ 0xff);
        }
        else {
          *(longlong *)
           (*(longlong *)(lVar12 + 0x110) + (ulonglong)DAT_18024604c + (ulonglong)uVar14) = lVar18;
          if (*(uint *)(lVar12 + 0x148) != 0) {
            uVar15 = 0;
            do {
              plVar3 = (longlong *)(*(longlong *)(lVar12 + 0x140) + uVar15 * 0x18);
              if (*plVar3 == lVar20) {
                *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(lVar12 + 0x158);
                *(int *)(lVar12 + 0x158) = *(int *)(lVar12 + 0x158) + 1;
                break;
              }
              uVar14 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(lVar12 + 0x148));
          }
        }
      }
LAB_1801e1000:
      uVar14 = *(uint *)(lVar12 + 0x138);
      if (uVar19 < uVar14) {
        while( true ) {
          uVar1 = uVar19 + 1;
          if (uVar14 <= uVar1) break;
          puVar4 = (undefined8 *)(*(longlong *)(lVar12 + 0x130) + (ulonglong)uVar19 * 0x60);
          puVar5 = (undefined8 *)(*(longlong *)(lVar12 + 0x130) + (ulonglong)uVar1 * 0x60);
          uVar11 = *puVar5;
          uVar22 = puVar5[3];
          uVar21 = puVar5[2];
          puVar4[1] = puVar5[1];
          *puVar4 = uVar11;
          puVar4[3] = uVar22;
          puVar4[2] = uVar21;
          uVar11 = puVar5[4];
          uVar22 = puVar5[7];
          uVar21 = puVar5[6];
          puVar4[5] = puVar5[5];
          puVar4[4] = uVar11;
          puVar4[7] = uVar22;
          puVar4[6] = uVar21;
          uVar11 = puVar5[8];
          uVar22 = puVar5[0xb];
          uVar21 = puVar5[10];
          puVar4[9] = puVar5[9];
          puVar4[8] = uVar11;
          puVar4[0xb] = uVar22;
          puVar4[10] = uVar21;
          uVar14 = *(uint *)(lVar12 + 0x138);
          uVar19 = uVar1;
        }
        *(uint *)(lVar12 + 0x138) = uVar14 - 1;
      }
    }
LAB_1801e1060:
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_03)();
    *(undefined8 *)(param_1 + 0x108) = 0;
    uVar11 = (*(code *)puVar6)(0x180224000);
    (*extraout_x11_04)(uVar11,*(undefined8 *)(param_1 + 0x90));
    FUN_180118248(auStack_50);
  }
  lVar18 = DAT_18024d928;
  iVar8 = *(int *)(DAT_18024d928 + 0x160) + -1;
  *(int *)(DAT_18024d928 + 0x160) = iVar8;
  if ((iVar8 == 0) && (*(char *)(lVar18 + 0x825) != '\0')) {
    thunk_FUN_180223a2c(*(undefined4 *)(lVar18 + 0x15c));
    *(undefined4 *)(lVar18 + 0x15c) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1801df750();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar18 = 0;
  do {
    if (*(longlong *)(param_1 + 0x60 + lVar18 * 8) != 0) {
      FUN_1801df750();
      *(undefined8 *)(param_1 + 0x60 + lVar18 * 8) = 0;
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 4);
  return;
LAB_1801e0de0:
  uVar15 = (ulonglong)(uVar19 + 1);
  if (*(uint *)(lVar12 + 0x138) <= uVar19 + 1) goto LAB_1801e1060;
  goto LAB_1801e0db8;
}

