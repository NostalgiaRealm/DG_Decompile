/*
 * FUN_1801d6a60 at 1801d6a60
 * undefined FUN_1801d6a60(void)
 * Address ranges: 1801d6a60-1801d6d67;1801d6e04-1801d6e53;1801d6e84-1801d6f4b;1801d6f6c-1801d6faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801d6a60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  code *extraout_x11;
  longlong extraout_x15;
  ulonglong uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_8;
  uint *puVar12;
  
  auVar26 = FUN_180104f10();
  puVar12 = auVar26._8_8_;
  lVar18 = auVar26._0_8_;
  lVar7 = extraout_x15 * -0x10;
  *(longlong *)(&stack0x00000000 + lVar7) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffc4 + lVar7) = 0x8876086c;
  if ((puVar12 == (uint *)0x0) || (param_3 == 0)) goto LAB_1801d6f90;
  if (((*(uint *)(lVar18 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    uVar20 = 0;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
LAB_1801d6ad4:
    *(undefined4 *)(&stack0xffffffffffffffc0 + lVar7) = uVar20;
  }
  else {
    uVar20 = 1;
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar9 != 0) goto LAB_1801d6ad4;
    FUN_1801085c8();
    *(undefined4 *)(&stack0xffffffffffffffc0 + lVar7) = 1;
  }
  uVar3 = *puVar12;
  if ((uVar3 + 0xff00 < 5) || (uVar3 + 0xfe00 < 2 || uVar3 == 0xffff0300)) {
    lVar17 = *(longlong *)(lVar18 + 0x60);
    *(undefined4 *)(&stack0xffffffffffffffb0 + lVar7) = 0;
    uVar4 = *(uint *)(lVar17 + 0xcc);
    lVar22 = 0;
    if (uVar4 < uVar3) {
      uVar20 = 0x7fffffff;
    }
    else {
      uVar20 = *(undefined4 *)(lVar17 + 300);
      lVar22 = lVar17 + 0x108;
    }
    if ((uVar3 & 0xff00) == 0x100) {
      cVar8 = FUN_18011af00(puVar12,&stack0x00000240 + lVar7,&stack0xffffffffffffffb0 + lVar7);
    }
    else if ((uVar3 & 0xff00) == 0x200) {
      cVar8 = FUN_1801e7400(puVar12,lVar22,&stack0x00000240 + lVar7,&stack0xffffffffffffffb0 + lVar7
                           );
    }
    else {
      if ((uVar3 & 0xff00) != 0x300) goto LAB_1801d6e9c;
      cVar8 = FUN_1801e87c8(puVar12,uVar20,&stack0x00000240 + lVar7,&stack0xffffffffffffffb0 + lVar7
                           );
    }
    if ((cVar8 != '\0' && uVar3 <= uVar4) &&
       (puVar10 = (undefined8 *)FUN_1802229a8(0x38), puVar10 != (undefined8 *)0x0)) {
      *puVar10 = &PTR_FUN_18022ecf0;
      puVar10[1] = 0;
      puVar10[4] = 0;
      *(undefined4 *)(puVar10 + 5) = 0;
      lVar22 = 0;
      puVar10[2] = puVar10;
      puVar10[3] = lVar18 + -0x6838;
      uVar24 = 0;
      puVar10[6] = 0;
      uVar15 = 0;
      uVar3 = *(uint *)(&stack0xffffffffffffffb0 + lVar7);
      uVar21 = CONCAT44(0,uVar3);
      (&uStack_8)[extraout_x15 * -2] = puVar10;
      if (uVar3 != 0) {
        do {
          puVar1 = puVar12 + uVar15;
          uVar19 = uVar15 & 1;
          uVar4 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar4;
          uVar24 = ((ulonglong)*puVar1 << (uVar19 << 5)) + uVar24;
        } while (uVar4 < uVar3);
      }
      uVar4 = *(uint *)(lVar18 + 0xe8);
      *(undefined **)(&stack0xfffffffffffffff0 + lVar7) = __hybrid_os_arm64x_dispatch_icall;
      if (uVar4 != 0) {
        uVar16 = 0;
        uVar14 = uVar4;
        do {
          uVar5 = uVar14 + uVar16 >> 1;
          uVar15 = (ulonglong)uVar5;
          uVar19 = *(ulonglong *)(*(longlong *)(lVar18 + 0xe0) + uVar15 * 0x18);
          if (uVar19 <= uVar24) {
            if (uVar24 <= uVar19) break;
            uVar16 = uVar5 + 1;
            uVar15 = (ulonglong)(uVar5 + 1);
            uVar5 = uVar14;
          }
          uVar14 = uVar5;
        } while (uVar14 != uVar16);
        if (((uint)uVar15 != uVar4) &&
           (puVar2 = (ulonglong *)(*(longlong *)(lVar18 + 0xe0) + uVar15 * 0x18), *puVar2 == uVar24)
           ) {
          puVar2 = puVar2 + 2;
          *(ulonglong **)(&stack0xffffffffffffffd8 + lVar7) = puVar2;
          if (puVar2 != (ulonglong *)0x0) {
            uVar4 = *(uint *)((longlong *)*puVar2 + 1);
            if (uVar4 != 0) {
              lVar22 = *(longlong *)*puVar2;
              *(longlong *)(&stack0xffffffffffffffe0 + lVar7) = lVar18;
              *(undefined8 **)(&stack0xffffffffffffffe8 + lVar7) = puVar10;
              uVar15 = 0;
              *(ulonglong *)(&stack0xffffffffffffffb8 + lVar7) = uVar24;
              *(undefined8 *)(&stack0xffffffffffffffc8 + lVar7) = 0;
              *(longlong *)(&stack0xffffffffffffffd0 + lVar7) = lVar22 + 0x228;
              do {
                lVar18 = uVar15 * 0x238;
                uVar16 = (uint)uVar15;
                if (*(uint *)(lVar22 + 0x224 + lVar18) == uVar3) {
                  iVar9 = FUN_180222c00(puVar12,*(undefined8 *)
                                                 (*(longlong *)(&stack0xffffffffffffffd0 + lVar7) +
                                                 lVar18),uVar21 << 2);
                  if (iVar9 == 0) {
                    *(longlong *)(&stack0xffffffffffffffd0 + lVar7) = lVar18 + lVar22;
                    lVar18 = *(longlong *)(&stack0xffffffffffffffe0 + lVar7);
                    puVar10 = *(undefined8 **)(&stack0xffffffffffffffe8 + lVar7);
                    puVar23 = *(undefined8 **)(&stack0xffffffffffffffd0 + lVar7);
                    uVar25 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar7);
                    uVar11 = (**(code **)(&stack0xfffffffffffffff0 + lVar7))();
                    (*extraout_x11)(uVar11,puVar10);
                    *puVar23 = puVar10;
                    lVar18 = FUN_1801dbc88(lVar18 + 0xf8,&uStack_8 + extraout_x15 * -2,puVar23);
                    plVar13 = (longlong *)**(longlong **)(&stack0xffffffffffffffd8 + lVar7);
                    uVar3 = *(uint *)(plVar13 + 1);
                    if (uVar16 < uVar3) {
                      if (uVar16 + 1 < uVar3) {
                        *(undefined8 *)(&stack0xffffffffffffffb8 + lVar7) = uVar25;
                        *(longlong *)(&stack0xffffffffffffffc8 + lVar7) = lVar18 + 8;
                        *(longlong *)(&stack0xffffffffffffffd8 + lVar7) = lVar18;
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_180104c48(*plVar13 + uVar15 * 0x238,
                                            *plVar13 + (ulonglong)(uVar16 + 1) * 0x238,0x238);
                      }
                      *(uint *)(plVar13 + 1) = uVar3 - 1;
                    }
                    lVar22 = 0;
                    if (lVar18 + 8 == 0) goto LAB_1801d6d24;
                    lVar22 = lVar18 + 8;
                    goto LAB_1801d6e1c;
                  }
                }
                uVar15 = (ulonglong)(uVar16 + 1);
              } while (uVar16 + 1 < uVar4);
              puVar10 = *(undefined8 **)(&stack0xffffffffffffffe8 + lVar7);
              lVar22 = *(longlong *)(&stack0xffffffffffffffc8 + lVar7);
            }
          }
        }
      }
LAB_1801d6d24:
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar21;
      lVar18 = uVar21 << 2;
      if (SUB168(auVar26 * ZEXT816(4),8) != 0) {
        lVar18 = -1;
      }
      lVar18 = FUN_1802229a8(lVar18);
      *(longlong *)(&stack0xffffffffffffffb8 + lVar7) = lVar18;
      if ((lVar18 != 0) && (lVar18 = FUN_1802229a8(0x1270), lVar18 != 0)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(*(undefined8 *)(&stack0xffffffffffffffb8 + lVar7),puVar12,uVar21 << 2);
      }
      if (lVar22 == 0) {
        FUN_1802229d8(*(undefined8 *)(&stack0xffffffffffffffb8 + lVar7));
        FUN_1802229d8(0,0x1270);
      }
LAB_1801d6e1c:
      if (lVar22 != 0) {
        uVar24 = CONCAT44(0,*(uint *)(&stack0xffffffffffffffb0 + lVar7));
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar24;
        lVar18 = uVar24 << 2;
        if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
          lVar18 = -1;
        }
        lVar18 = FUN_1802229a8(lVar18);
        if (lVar18 != 0) {
          puVar10[4] = lVar22;
          puVar10[6] = lVar18;
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar18,puVar12,uVar24 << 2);
        }
      }
      *puVar10 = &PTR_FUN_18022ecf0;
      FUN_1802229d8(puVar10,0x38);
    }
  }
LAB_1801d6e9c:
  if (*(int *)(&stack0xffffffffffffffc0 + lVar7) == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
LAB_1801d6f90:
  return *(undefined4 *)(&stack0xffffffffffffffc4 + lVar7);
}

