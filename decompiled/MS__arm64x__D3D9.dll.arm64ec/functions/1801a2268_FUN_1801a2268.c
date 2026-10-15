/*
 * FUN_1801a2268 at 1801a2268
 * undefined FUN_1801a2268(void)
 * Address ranges: 1801a2268-1801a28ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801a2268(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong extraout_x8;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong extraout_x15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  longlong lStack_8;
  
  auVar21 = FUN_180104f10();
  uVar12 = DAT_180258908;
  piVar10 = auVar21._8_8_;
  lVar5 = auVar21._0_8_;
  lVar16 = extraout_x15 * -0x10;
  *(int **)(lVar5 + 8) = piVar10;
  *(undefined8 *)(lVar5 + 0x10) = param_3;
  auVar21 = FUN_180206858(uVar12,0);
  lVar15 = auVar21._0_8_;
  lVar18 = lVar5 + 0x1c000;
  *(longlong *)(lVar5 + 0x1cf10) = lVar15;
  if (lVar15 == 0) goto LAB_1801a28b8;
  *(longlong *)(lVar5 + 0x20) = lVar15;
  *(int **)(lVar5 + 8) = piVar10;
  *(undefined8 *)(lVar5 + 0x10) = param_3;
  if (param_4 == 6) {
LAB_1801a2314:
    uVar13 = 0x1e0000001b;
    uVar12 = 0x1c0000001c;
LAB_1801a231c:
    *(undefined8 *)(lVar5 + 0x38) = uVar13;
    *(undefined8 *)(lVar5 + 0x40) = uVar12;
  }
  else {
    if (param_4 == 0x15) {
      uVar13 = 0x1800000017;
      uVar12 = 0x1800000018;
      goto LAB_1801a231c;
    }
    if (param_4 == 0x16) {
      uVar13 = 0xb00000009;
      uVar12 = 0xb0000000b;
      goto LAB_1801a231c;
    }
    if (param_4 != 0x2a) goto LAB_1801a2314;
    *(undefined8 *)(lVar5 + 0x38) = 0x1e0000001b;
    *(undefined8 *)(lVar5 + 0x40) = 0x1c0000001c;
    uVar13 = 0x1800000017;
    uVar12 = 0x1800000018;
  }
  *(undefined8 *)(lVar5 + 0x48) = uVar13;
  *(undefined8 *)(lVar5 + 0x50) = uVar12;
  FUN_180202728(lVar15,auVar21._8_8_,lVar5);
  if (*piVar10 == 5) {
    uVar11 = 0xb000;
  }
  else {
    uVar11 = 0xb000;
    if (*piVar10 == 6) {
      uVar11 = 0xc000;
    }
  }
  uVar6 = FUN_180215f70(*(undefined8 *)(lVar5 + 0x1cf10),*(undefined4 *)(lVar5 + 0x28),uVar11);
  uVar12 = DAT_180258908;
  if ((uVar6 & 1) != 0) {
    uVar20 = *(uint *)(lVar5 + 0x28);
    lVar15 = *(longlong *)(lVar5 + 0x1cf10);
    *(longlong *)(&stack0x00000010 + lVar16) = lVar5 + 0x1d000;
    *(ulonglong *)(lVar5 + 0x30) = lVar15 + (ulonglong)uVar20 * 0x28 + 0x18;
    *(ulonglong *)(lVar5 + 0x1cf18) = lVar15 + (ulonglong)uVar20 * 0x1ac0 + 0x900;
    uVar6 = FUN_180206a78(uVar6,uVar12,1,&DAT_180248248,lVar5 + 0x1d118);
    if ((uVar6 & 1) != 0) {
      *(longlong *)(&stack0x00000018 + lVar16) = lVar5 + 0x1c000;
      uVar6 = FUN_180206a78(uVar6,DAT_180258908,0x28,&DAT_180248150,lVar5 + 0x1cfd8);
      puVar3 = __hybrid_os_arm64x_dispatch_icall;
      if ((uVar6 & 1) == 0) {
        uVar12 = FUN_180206b80(uVar6,1,lVar5 + 0x1d118);
        lVar16 = lVar5 + 0x1cfd8;
      }
      else {
        if ((DAT_180258cd4 & 1) == 0) {
          DAT_180258cd4 = DAT_180258cd4 | 1;
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar16) = 2;
          *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16) = 0;
          *(undefined4 *)(&stack0xffffffffffffffc8 + lVar16) = 0;
          uRam00000001802587c8 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16);
          _DAT_1802587c0 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar16);
          uRam00000001802587d8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar16);
          _DAT_1802587d0 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar16);
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar16) = 3;
          *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16) = 0;
          *(undefined4 *)(&stack0xffffffffffffffc8 + lVar16) = 5;
          uRam00000001802587e8 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16);
          _DAT_1802587e0 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar16);
          uRam00000001802587f8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar16);
          _DAT_1802587f0 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar16);
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar16) = 3;
          *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16) = 1;
          *(undefined4 *)(&stack0xffffffffffffffc8 + lVar16) = 5;
          uRam0000000180258808 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16);
          _DAT_180258800 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar16);
          uRam0000000180258818 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar16);
          _DAT_180258810 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar16);
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar16) = 3;
          *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16) = 2;
          *(undefined4 *)(&stack0xffffffffffffffc8 + lVar16) = 5;
          uRam0000000180258828 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16);
          _DAT_180258820 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar16);
          uRam0000000180258838 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar16);
          _DAT_180258830 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar16);
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar16) = 3;
          *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16) = 3;
          *(undefined4 *)(&stack0xffffffffffffffc8 + lVar16) = 5;
          uRam0000000180258848 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16);
          _DAT_180258840 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar16);
          uRam0000000180258858 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar16);
          _DAT_180258850 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar16);
          *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16) = 4;
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar16) = 3;
          *(undefined4 *)(&stack0xffffffffffffffc8 + lVar16) = 5;
          uRam0000000180258868 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16);
          _DAT_180258860 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar16);
          uRam0000000180258878 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar16);
          _DAT_180258870 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar16);
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar16) = 0;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar16) = 1;
          *(undefined4 *)(&stack0xffffffffffffffc8 + lVar16) = 5;
          uRam0000000180258888 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16);
          _DAT_180258880 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar16);
          *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16) = 1;
          *(undefined **)(&stack0xffffffffffffffc0 + lVar16) = &DAT_180248250;
          uRam0000000180258898 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar16);
          _DAT_180258890 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar16);
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar16) = 1;
          *(undefined4 *)(&stack0xffffffffffffffc0 + lVar16) = 2;
          *(undefined4 *)(&stack0xffffffffffffffc8 + lVar16) = 5;
          uRam00000001802588a8 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar16);
          _DAT_1802588a0 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar16);
          uRam00000001802588b8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar16);
          _DAT_1802588b0 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar16);
        }
        *(undefined **)(&stack0xffffffffffffffe8 + lVar16) = __hybrid_os_arm64x_dispatch_icall;
        (*(code *)__hybrid_os_arm64x_dispatch_icall)();
        lVar15 = (*extraout_x11)(extraout_x8 + 0x6b0,*(undefined4 *)(lVar5 + 0x28),1,&DAT_180248120,
                                 0);
        *(longlong *)(&stack0x00000008 + lVar16) = lVar5 + 0x1c000;
        *(longlong *)(lVar5 + 0x1cf28) = lVar15;
        uVar12 = 0;
        if (lVar15 != 0) {
          *(undefined4 *)(lVar5 + 0x1cf68) = 0xffffffff;
          *(undefined8 *)(lVar5 + 0x1cf88) = 0x300000000;
          *(undefined8 *)(lVar5 + 0x1cfc0) = 1;
          puVar7 = (undefined8 *)FUN_1802229a8(0x10);
          *(undefined8 **)(lVar5 + 0x1d120) = puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &PTR_s_POSITION_1802481a0;
            *(undefined4 *)(*(longlong *)(lVar5 + 0x1d120) + 8) = 2;
            lVar8 = FUN_18020d430(*(longlong *)(lVar5 + 0x1cf10) + 0x6d0,
                                  *(undefined4 *)(lVar5 + 0x28),0x40000,0,1);
            lVar15 = lVar5 + 0x1c000;
            *(longlong *)(lVar5 + 0x1cf20) = lVar8;
            if (lVar8 != 0) {
              FUN_180222c50(&stack0x00000020 + lVar16,0,0x1000);
              uVar20 = 0;
              do {
                (*(code *)puVar3)();
                cVar4 = (*extraout_x11_00)(lVar5,uVar20,&stack0x00000020 + lVar16);
                if (cVar4 == '\0') {
                  bVar2 = false;
                  goto LAB_1801a25e8;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 < 3);
              bVar2 = true;
LAB_1801a25e8:
              if (bVar2) {
                *(longlong *)(&stack0x00000000 + lVar16) = lVar5 + 0x1c000;
                *(longlong *)(&stack0xffffffffffffffd0 + lVar16) = lVar18;
                *(longlong *)(&stack0xffffffffffffffd8 + lVar16) = lVar15;
                iVar17 = 3;
                *(longlong *)(&stack0xfffffffffffffff0 + lVar16) = lVar5 + 0x58;
                (&lStack_8)[extraout_x15 * -2] = lVar5 + 0x5b;
                uVar6 = 0;
                do {
                  lVar18 = uVar6 * 8;
                  cVar4 = (&DAT_1802483d4)[lVar18];
                  lVar15 = uVar6 * 4;
                  *(char *)(*(longlong *)(&stack0xfffffffffffffff0 + lVar16) + lVar15) = cVar4;
                  if (cVar4 == -1) {
                    uVar9 = FUN_1801b80b8(lVar5,iVar17,(&DAT_1802483d0)[uVar6 * 2],0);
                    if ((uVar9 & 1) != 0) {
                      *(char *)(lVar5 + lVar15 + 0x58) = (char)iVar17;
                      iVar17 = iVar17 + 1;
                      goto LAB_1801a2654;
                    }
LAB_1801a2834:
                    lVar18 = *(longlong *)(&stack0xffffffffffffffd0 + lVar16);
                    lVar15 = *(longlong *)(&stack0xffffffffffffffd8 + lVar16);
                    goto LAB_1801a2838;
                  }
LAB_1801a2654:
                  cVar4 = (&DAT_1802483d5)[lVar18];
                  *(longlong *)(&stack0xffffffffffffffe0 + lVar16) = lVar5 + lVar15;
                  *(char *)(lVar5 + lVar15 + 0x59) = cVar4;
                  if (cVar4 == -1) {
                    uVar9 = FUN_1801b80b8(lVar5,iVar17,(&DAT_1802483d0)[uVar6 * 2],8);
                    if ((uVar9 & 1) == 0) goto LAB_1801a2834;
                    *(char *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar16) + 0x59) =
                         (char)iVar17;
                    iVar17 = iVar17 + 1;
                  }
                  cVar4 = (&DAT_1802483d6)[lVar18];
                  *(char *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar16) + 0x5a) = cVar4;
                  if (cVar4 == -1) {
                    uVar9 = FUN_1801b80b8(lVar5,iVar17,(&DAT_1802483d0)[uVar6 * 2],0x10);
                    if ((uVar9 & 1) == 0) goto LAB_1801a2834;
                    *(char *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar16) + 0x5a) =
                         (char)iVar17;
                    iVar17 = iVar17 + 1;
                  }
                  cVar4 = (&DAT_1802483d7)[lVar18];
                  lVar18 = (&lStack_8)[extraout_x15 * -2];
                  *(char *)(lVar18 + lVar15) = cVar4;
                  if (cVar4 == -1) {
                    uVar9 = FUN_1801b80b8(lVar5,iVar17,(&DAT_1802483d0)[uVar6 * 2],0x18);
                    if ((uVar9 & 1) == 0) goto LAB_1801a2834;
                    *(char *)(lVar18 + lVar15) = (char)iVar17;
                    iVar17 = iVar17 + 1;
                  }
                  uVar20 = (int)uVar6 + 1;
                  uVar6 = (ulonglong)uVar20;
                } while (uVar20 < 0xe);
                lVar19 = *(longlong *)(&stack0x00000000 + lVar16);
                lVar18 = *(longlong *)(&stack0xffffffffffffffd0 + lVar16);
                lVar15 = *(longlong *)(&stack0xffffffffffffffd8 + lVar16);
                FUN_180207cd0(*(undefined8 *)(*(longlong *)(lVar19 + 0xf18) + 0x1518),
                              *(undefined8 *)(lVar15 + 0xf20),0,1,0);
                FUN_180207560(*(longlong *)(*(longlong *)(lVar19 + 0xf18) + 0x1518) + 8,0);
                lVar8 = 0;
                if (*(longlong *)(lVar18 + 0xf10) != 0) {
                  lVar8 = *(longlong *)(lVar18 + 0xf10) + 0x6d0;
                }
                lVar8 = FUN_1802109e8(lVar8,*(undefined4 *)(lVar5 + 0x28),
                                      *(longlong *)(lVar19 + 0xf18) + 0x1520,0xc0,0);
                *(longlong *)(lVar5 + 0x1cfd0) = lVar8;
                if (lVar8 != 0) {
                  lVar14 = *(longlong *)(lVar18 + 0xf10);
                  lVar8 = 0;
                  if (lVar14 != 0) {
                    lVar8 = lVar14 + 0x6a8;
                  }
                  lVar1 = 0;
                  if (lVar14 != 0) {
                    lVar1 = lVar14 + 0x6d0;
                  }
                  lVar8 = FUN_1802109e8(lVar1,*(undefined4 *)(lVar5 + 0x28),
                                        *(longlong *)(lVar19 + 0xf18) + 0x15b0,0x4000,lVar8);
                  *(longlong *)(lVar5 + 0x1cfc8) = lVar8;
                  if (lVar8 != 0) {
                    FUN_1801b8590(lVar5);
                    *(undefined8 *)(lVar5 + 0x1d140) = *(undefined8 *)(lVar18 + 0xf10);
                    *(undefined4 *)(lVar5 + 0x1d148) = *(undefined4 *)(lVar5 + 0x28);
                    *(undefined4 *)(lVar5 + 0x1d16c) = 0;
                    uVar12 = thunk_FUN_180223888(0,0,0,0);
                    uVar20 = *(uint *)(lVar5 + 0x28);
                    *(undefined8 *)(lVar5 + 0x1d170) = uVar12;
                    lVar16 = *(longlong *)(lVar18 + 0xf10);
                    uVar6 = FUN_180215108(FUN_180215388);
                    if ((uVar6 & 1) == 0) {
                      *(undefined8 *)(lVar16 + (ulonglong)uVar20 * 0x28 + 0x38) = 0;
                    }
                    thunk_FUN_18022370c(*(longlong *)(lVar18 + 0xf10) + 0x620);
                    return 1;
                  }
                  if (*(longlong *)(lVar5 + 0x1cfd0) != 0) {
                    FUN_180146480(*(longlong *)(lVar5 + 0x1cfd0),1);
                  }
                  *(undefined8 *)(lVar5 + 0x1cfd0) = 0;
                }
              }
              else {
LAB_1801a2838:
                FUN_1802229d8(*(undefined8 *)(lVar15 + 0xf20),8);
                *(undefined8 *)(lVar15 + 0xf20) = 0;
              }
            }
            FUN_1802229d8(*(undefined8 *)(lVar15 + 0xf20),8);
            *(undefined8 *)(lVar15 + 0xf20) = 0;
          }
          lVar15 = *(longlong *)(&stack0x00000008 + lVar16);
          (**(code **)(&stack0xffffffffffffffe8 + lVar16))();
          uVar12 = (*extraout_x11_01)();
          *(undefined8 *)(lVar15 + 0xf28) = 0;
        }
        uVar12 = FUN_180206b80(uVar12,1,*(longlong *)(&stack0x00000010 + lVar16) + 0x118);
        lVar16 = *(longlong *)(&stack0x00000018 + lVar16) + 0xfd8;
      }
      FUN_180206b80(uVar12,0x28,lVar16);
    }
    FUN_180216420(*(undefined8 *)(lVar18 + 0xf10),*(undefined4 *)(lVar5 + 0x28));
  }
  thunk_FUN_18022370c(*(longlong *)(lVar18 + 0xf10) + 0x620);
LAB_1801a28b8:
  uVar12 = *(undefined8 *)(lVar18 + 0xf10);
  *(undefined8 *)(lVar5 + 0x20) = 0;
  FUN_1801fe510(uVar12);
  *(undefined8 *)(lVar18 + 0xf10) = 0;
  return 0;
}

