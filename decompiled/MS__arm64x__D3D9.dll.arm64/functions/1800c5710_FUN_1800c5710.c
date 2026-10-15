/*
 * FUN_1800c5710 at 1800c5710
 * undefined FUN_1800c5710(void)
 * Address ranges: 1800c5710-1800c5c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c5710(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_50 [16];
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    FUN_18000cd40(auStack_50);
    lVar12 = DAT_18024de50;
    lVar11 = 0;
    if (plVar2 != (longlong *)0x0) {
      lVar11 = param_1 + 0x50;
    }
    if ((DAT_18024de50 != 0) && (uVar17 = *(uint *)(DAT_18024de50 + 0x18), uVar17 != 0)) {
      uVar15 = 0;
      do {
        if (*(longlong *)(*(longlong *)(DAT_18024de50 + 0x10) + uVar15 * 8) == lVar11) {
          if ((int)uVar15 != -1) {
            while (uVar14 = (int)uVar15 + 1, uVar14 < uVar17) {
              *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + uVar15 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)uVar14 * 8);
              uVar15 = (ulonglong)uVar14;
              uVar17 = *(uint *)(lVar12 + 0x18);
            }
            *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + -1;
          }
          break;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar17);
    }
    iVar7 = FUN_180001590(&DAT_18024de3c);
    lVar11 = DAT_18024de50;
    if ((iVar7 == 0) && (DAT_18024de50 != 0)) {
      if (DAT_18024de50 != 0) {
        FUN_18001f498(DAT_18024de50);
        FUN_180102fc0(lVar11,0x90);
      }
      DAT_18024de50 = 0;
    }
    if (*(char *)(param_1 + 0x101) == '\0') {
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      auVar22 = func_0x000180220598(DAT_18024de60,uVar10);
      lVar11 = auVar22._0_8_;
      if (lVar11 != 0) {
        uVar10 = FUN_180100d48(lVar11,auVar22._8_8_,FUN_180100f08);
        *(undefined8 *)(lVar11 + 0x30) = uVar10;
      }
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0xf0))
                (*(longlong **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
      uVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
      auVar22 = func_0x000180220598(DAT_18024de60,uVar10);
      lVar11 = auVar22._0_8_;
      uVar10 = 0;
      if (lVar11 != 0) {
        uVar10 = FUN_180100d48(lVar11,auVar22._8_8_,*(undefined8 *)(lVar11 + 0x30));
        *(undefined8 *)(lVar11 + 0x30) = 0;
      }
      uVar15 = (ulonglong)*(uint *)(param_1 + 0xf0);
      FUN_180020640(uVar10,uVar15,(&DAT_180253870)[uVar15 * 0x96]);
      (&DAT_180253344)[uVar15 * 0x28] = 0;
      uVar8 = FUN_180022668(plVar2);
      FUN_180022760(plVar2,1,uVar8);
      lVar11 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (lVar11 != 0) {
        (*__imp_USER32_dll_PostMessageW)(lVar11,0x20,0,0);
      }
    }
    lVar11 = DAT_18024de60;
    lVar19 = *(longlong *)(param_1 + 0x90);
    lVar12 = func_0x000180220598(DAT_18024de60,lVar19);
    if (*(uint *)(lVar11 + 0x138) != 0) {
      lVar16 = *(longlong *)(lVar11 + 0x130);
      uVar15 = 0;
LAB_1800c5914:
      lVar18 = uVar15 * 0x60;
      lVar3 = lVar18 + lVar16;
      uVar17 = (uint)uVar15;
      if ((*(longlong *)(lVar18 + lVar16) != lVar19) ||
         (*(longlong **)(lVar16 + 0x10 + lVar18) != plVar2)) goto LAB_1800c593c;
      if ((*(longlong *)(lVar3 + 0x20) == 0) ||
         (*(int *)(lVar11 + 0x128) = *(int *)(lVar11 + 0x128) + -1, lVar12 != lVar3))
      goto LAB_1800c5b64;
      iVar7 = *(int *)(lVar3 + 0x40);
      while (iVar7 != 0) {
        (*__imp_USER32_dll_ShowCursor)(0);
        iVar7 = *(int *)(lVar3 + 0x40) + -1;
        *(int *)(lVar3 + 0x40) = iVar7;
      }
      uVar14 = uVar17;
      do {
        iVar7 = (int)uVar15;
        if (uVar14 == 0) {
          lVar12 = *(longlong *)(lVar18 + *(longlong *)(lVar11 + 0x130) + 0x20);
          (*__imp_USER32_dll_KillTimer)(lVar19,0xaaaa);
          goto LAB_1800c59d8;
        }
        uVar14 = iVar7 - 1;
        uVar15 = (ulonglong)uVar14;
        plVar2 = (longlong *)(*(longlong *)(lVar11 + 0x130) + uVar15 * 0x60);
      } while (*plVar2 != lVar19);
      lVar12 = plVar2[5];
LAB_1800c59d8:
      if (lVar12 != 0) {
        uVar14 = *(uint *)(lVar18 + *(longlong *)(lVar11 + 0x130) + 0x38);
        iVar9 = (*__imp_USER32_dll_IsWindowUnicode)(lVar19);
        pcVar13 = __imp_USER32_dll_GetWindowLongPtrA;
        if (iVar9 != 0) {
          pcVar13 = __imp_USER32_dll_GetWindowLongPtrW;
        }
        lVar16 = (*pcVar13)(lVar19,0xfffffffc);
        bVar6 = lVar16 == *(longlong *)(lVar11 + 0x110) + (ulonglong)(uVar14 * 0x70);
        if (*(uint *)(lVar11 + 0x148) != 0) {
          uVar15 = 0;
          do {
            plVar2 = (longlong *)(*(longlong *)(lVar11 + 0x140) + uVar15 * 0x18);
            if (*plVar2 == lVar19) {
              iVar9 = (int)plVar2[2];
              if (iVar9 != -1) {
                uVar1 = iVar9 * 0x2c;
                *(longlong *)(*(longlong *)(lVar11 + 0x108) + 0x1c + (ulonglong)uVar1) = lVar12;
                if ((iVar7 != 0) ||
                   (bVar6 = true, lVar16 != *(longlong *)(lVar11 + 0x108) + (ulonglong)uVar1)) {
                  bVar6 = false;
                }
              }
              break;
            }
            uVar1 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(lVar11 + 0x148));
        }
        if (bVar6) {
          FUN_180100d48(lVar16,lVar19,lVar12);
          lVar12 = lVar11 + ((ulonglong)(uVar14 >> 6) + 0x2a) * 8;
          uVar15 = (ulonglong)(uVar14 >> 3) & 7;
          *(byte *)(lVar12 + uVar15) =
               *(byte *)(lVar12 + uVar15) & ((byte)(1 << ((ulonglong)uVar14 & 7)) ^ 0xff);
        }
        else {
          *(longlong *)(*(longlong *)(lVar11 + 0x110) + 0x68 + (ulonglong)(uVar14 * 0x70)) = lVar12;
          if (*(uint *)(lVar11 + 0x148) != 0) {
            uVar15 = 0;
            do {
              plVar2 = (longlong *)(*(longlong *)(lVar11 + 0x140) + uVar15 * 0x18);
              if (*plVar2 == lVar19) {
                *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(lVar11 + 0x158);
                *(int *)(lVar11 + 0x158) = *(int *)(lVar11 + 0x158) + 1;
                break;
              }
              uVar14 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(lVar11 + 0x148));
          }
        }
      }
LAB_1800c5b64:
      uVar14 = *(uint *)(lVar11 + 0x138);
      if (uVar17 < uVar14) {
        while( true ) {
          uVar1 = uVar17 + 1;
          if (uVar14 <= uVar1) break;
          puVar4 = (undefined8 *)(*(longlong *)(lVar11 + 0x130) + (ulonglong)uVar17 * 0x60);
          puVar5 = (undefined8 *)(*(longlong *)(lVar11 + 0x130) + (ulonglong)uVar1 * 0x60);
          uVar21 = *puVar5;
          uVar20 = puVar5[3];
          uVar10 = puVar5[2];
          puVar4[1] = puVar5[1];
          *puVar4 = uVar21;
          puVar4[3] = uVar20;
          puVar4[2] = uVar10;
          uVar21 = puVar5[4];
          uVar20 = puVar5[7];
          uVar10 = puVar5[6];
          puVar4[5] = puVar5[5];
          puVar4[4] = uVar21;
          puVar4[7] = uVar20;
          puVar4[6] = uVar10;
          uVar21 = puVar5[8];
          uVar20 = puVar5[0xb];
          uVar10 = puVar5[10];
          puVar4[9] = puVar5[9];
          puVar4[8] = uVar21;
          puVar4[0xb] = uVar20;
          puVar4[10] = uVar10;
          uVar14 = *(uint *)(lVar11 + 0x138);
          uVar17 = uVar1;
        }
        *(uint *)(lVar11 + 0x138) = uVar14 - 1;
      }
    }
LAB_1800c5bc4:
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))();
    *(undefined8 *)(param_1 + 0x108) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x88) + 200))
              (*(longlong **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
    FUN_18000cde0(auStack_50);
  }
  lVar11 = DAT_18024de60;
  iVar7 = *(int *)(DAT_18024de60 + 0x160) + -1;
  *(int *)(DAT_18024de60 + 0x160) = iVar7;
  if ((iVar7 == 0) && (*(char *)(lVar11 + 0x825) != '\0')) {
    (*__imp_KERNEL32_dll_SetThreadExecutionState)(*(undefined4 *)(lVar11 + 0x15c));
    *(undefined4 *)(lVar11 + 0x15c) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1800c43c0();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar11 = 0;
  do {
    if (*(longlong *)(param_1 + 0x60 + lVar11 * 8) != 0) {
      FUN_1800c43c0();
      *(undefined8 *)(param_1 + 0x60 + lVar11 * 8) = 0;
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 4);
  return;
LAB_1800c593c:
  uVar15 = (ulonglong)(uVar17 + 1);
  if (*(uint *)(lVar11 + 0x138) <= uVar17 + 1) goto LAB_1800c5bc4;
  goto LAB_1800c5914;
}

