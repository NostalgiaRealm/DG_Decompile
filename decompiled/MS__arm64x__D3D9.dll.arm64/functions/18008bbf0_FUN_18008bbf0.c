/*
 * FUN_18008bbf0 at 18008bbf0
 * undefined FUN_18008bbf0(void)
 * Address ranges: 18008bbf0-18008c243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18008bbf0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong extraout_x15;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  
  auVar18 = FUN_180001640();
  uVar6 = DAT_18024e2d0;
  piVar10 = auVar18._8_8_;
  plVar4 = auVar18._0_8_;
  lVar9 = extraout_x15 * -0x10;
  plVar4[1] = (longlong)piVar10;
  plVar4[2] = param_3;
  auVar18 = FUN_1800eceb0(uVar6,0);
  lVar14 = auVar18._0_8_;
  plVar4[0x39e2] = lVar14;
  if (lVar14 == 0) goto LAB_18008c1f8;
  plVar4[4] = lVar14;
  plVar4[1] = (longlong)piVar10;
  plVar4[2] = param_3;
  if (param_4 == 6) {
LAB_18008bca0:
    lVar13 = 0x1e0000001b;
    lVar12 = 0x1c0000001c;
LAB_18008bca8:
    plVar4[7] = lVar13;
    plVar4[8] = lVar12;
  }
  else {
    if (param_4 == 0x15) {
      lVar13 = 0x1800000017;
      lVar12 = 0x1800000018;
      goto LAB_18008bca8;
    }
    if (param_4 == 0x16) {
      lVar13 = 0xb00000009;
      lVar12 = 0xb0000000b;
      goto LAB_18008bca8;
    }
    if (param_4 != 0x2a) goto LAB_18008bca0;
    plVar4[7] = 0x1e0000001b;
    plVar4[8] = 0x1c0000001c;
    lVar13 = 0x1800000017;
    lVar12 = 0x1800000018;
  }
  plVar4[9] = lVar13;
  plVar4[10] = lVar12;
  FUN_1800e5470(lVar14,auVar18._8_8_,plVar4);
  if (*piVar10 == 5) {
    uVar11 = 0xb000;
  }
  else {
    uVar11 = 0xb000;
    if (*piVar10 == 6) {
      uVar11 = 0xc000;
    }
  }
  uVar5 = FUN_1800f8ca8(plVar4[0x39e2],(int)plVar4[5],uVar11);
  uVar6 = DAT_18024e2d0;
  if ((uVar5 & 1) != 0) {
    uVar16 = *(uint *)(plVar4 + 5);
    lVar14 = plVar4[0x39e2];
    *(longlong **)(&stack0xffffffffffffffd8 + lVar9) = plVar4 + 0x3a00;
    plVar4[6] = lVar14 + (ulonglong)uVar16 * 0x28 + 0x18;
    plVar4[0x39e3] = lVar14 + (ulonglong)uVar16 * 0x1ac0 + 0x900;
    uVar5 = FUN_1800ed058(uVar5,uVar6,1,&DAT_18024a8d0,plVar4 + 0x3a23);
    if ((uVar5 & 1) != 0) {
      *(longlong **)(&stack0xffffffffffffffe0 + lVar9) = plVar4 + 0x3800;
      uVar5 = FUN_1800ed058(uVar5,DAT_18024e2d0,0x28,&DAT_18024a880,plVar4 + 0x39fb);
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_1800ed150(uVar5,1,plVar4 + 0x3a23);
        plVar15 = plVar4 + 0x39fb;
      }
      else {
        if ((DAT_180258ce0 & 1) == 0) {
          DAT_180258ce0 = DAT_180258ce0 | 1;
          *(undefined4 *)(&stack0xffffffffffffffa0 + lVar9) = 2;
          *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9) = 0;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar9) = 0;
          uRam0000000180258928 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
          _DAT_180258920 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
          uRam0000000180258938 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9);
          _DAT_180258930 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
          *(undefined4 *)(&stack0xffffffffffffffa0 + lVar9) = 3;
          *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9) = 0;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar9) = 5;
          uRam0000000180258948 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
          _DAT_180258940 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
          uRam0000000180258958 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9);
          _DAT_180258950 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
          *(undefined4 *)(&stack0xffffffffffffffa0 + lVar9) = 3;
          *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9) = 1;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar9) = 5;
          uRam0000000180258968 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
          _DAT_180258960 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
          uRam0000000180258978 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9);
          _DAT_180258970 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
          *(undefined4 *)(&stack0xffffffffffffffa0 + lVar9) = 3;
          *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9) = 2;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar9) = 5;
          uRam0000000180258988 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
          _DAT_180258980 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
          uRam0000000180258998 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9);
          _DAT_180258990 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
          *(undefined4 *)(&stack0xffffffffffffffa0 + lVar9) = 3;
          *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9) = 3;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar9) = 5;
          uRam00000001802589a8 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
          _DAT_1802589a0 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
          uRam00000001802589b8 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9);
          _DAT_1802589b0 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
          *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9) = 4;
          *(undefined4 *)(&stack0xffffffffffffffa0 + lVar9) = 3;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar9) = 5;
          uRam00000001802589c8 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
          _DAT_1802589c0 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
          uRam00000001802589d8 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9);
          _DAT_1802589d0 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
          *(undefined4 *)(&stack0xffffffffffffffa0 + lVar9) = 0;
          *(undefined4 *)(&stack0xffffffffffffffa8 + lVar9) = 1;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar9) = 5;
          uRam00000001802589e8 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
          _DAT_1802589e0 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
          *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9) = 1;
          *(undefined **)(&stack0xffffffffffffffb0 + lVar9) = &DAT_18024c578;
          uRam00000001802589f8 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9);
          _DAT_1802589f0 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
          *(undefined4 *)(&stack0xffffffffffffffa0 + lVar9) = 1;
          *(undefined4 *)(&stack0xffffffffffffffb0 + lVar9) = 2;
          *(undefined4 *)(&stack0xffffffffffffffb8 + lVar9) = 5;
          uRam0000000180258a08 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
          _DAT_180258a00 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
          uRam0000000180258a18 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar9);
          _DAT_180258a10 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar9);
        }
        lVar14 = (**(code **)(*(longlong *)(plVar4[0x39e2] + 0x6b0) + 8))
                           (plVar4[0x39e2] + 0x6b0,(int)plVar4[5],1,&DAT_18024c4a8,0);
        *(longlong **)(&stack0xffffffffffffffd0 + lVar9) = plVar4 + 0x3800;
        plVar4[0x39e5] = lVar14;
        uVar6 = 0;
        if (lVar14 != 0) {
          *(undefined4 *)(plVar4 + 0x39ed) = 0xffffffff;
          plVar4[0x39f1] = 0x300000000;
          plVar4[0x39f8] = 1;
          puVar7 = (undefined8 *)FUN_180102f80(0x10);
          plVar4[0x3a24] = (longlong)puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &PTR_s_POSITION_18024c4d0;
            *(undefined4 *)(plVar4[0x3a24] + 8) = 2;
            lVar14 = FUN_1800e7bb8(plVar4[0x39e2] + 0x6d0,(int)plVar4[5],0x40000,0,1);
            plVar15 = plVar4 + 0x3800;
            plVar4[0x39e4] = lVar14;
            if (lVar14 != 0) {
              func_0x000180222c50(&stack0xffffffffffffffe8 + lVar9,0,0x1000);
              uVar16 = 0;
              do {
                cVar3 = (**(code **)(*plVar4 + 0x158))
                                  (plVar4,uVar16,&stack0xffffffffffffffe8 + lVar9,uVar16 == 0);
                if (cVar3 == '\0') {
                  bVar2 = false;
                  goto LAB_18008bf54;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < 3);
              bVar2 = true;
LAB_18008bf54:
              if (bVar2) {
                iVar17 = 3;
                *(longlong **)(&stack0xffffffffffffffc0 + lVar9) = plVar15;
                *(longlong **)(&stack0xffffffffffffffc8 + lVar9) = plVar4 + 0x3800;
                uVar5 = 0;
                do {
                  lVar14 = uVar5 * 8;
                  lVar12 = uVar5 * 4;
                  cVar3 = (&DAT_18024a8e4)[lVar14];
                  *(char *)((longlong)plVar4 + lVar12 + 0x58) = cVar3;
                  if (cVar3 == -1) {
                    uVar8 = FUN_1800a01a0(plVar4,iVar17,(&DAT_18024a8e0)[uVar5 * 2],0);
                    if ((uVar8 & 1) != 0) {
                      *(char *)((longlong)plVar4 + lVar12 + 0x58) = (char)iVar17;
                      iVar17 = iVar17 + 1;
                      goto LAB_18008bfa8;
                    }
LAB_18008c17c:
                    plVar15 = *(longlong **)(&stack0xffffffffffffffc0 + lVar9);
                    goto LAB_18008c180;
                  }
LAB_18008bfa8:
                  cVar3 = (&DAT_18024a8e5)[lVar14];
                  *(char *)((longlong)plVar4 + lVar12 + 0x59) = cVar3;
                  if (cVar3 == -1) {
                    uVar8 = FUN_1800a01a0(plVar4,iVar17,(&DAT_18024a8e0)[uVar5 * 2],8);
                    if ((uVar8 & 1) == 0) goto LAB_18008c17c;
                    *(char *)((longlong)plVar4 + lVar12 + 0x59) = (char)iVar17;
                    iVar17 = iVar17 + 1;
                  }
                  cVar3 = (&DAT_18024a8e6)[lVar14];
                  *(char *)((longlong)plVar4 + lVar12 + 0x5a) = cVar3;
                  if (cVar3 == -1) {
                    uVar8 = FUN_1800a01a0(plVar4,iVar17,(&DAT_18024a8e0)[uVar5 * 2],0x10);
                    if ((uVar8 & 1) == 0) goto LAB_18008c17c;
                    *(char *)((longlong)plVar4 + lVar12 + 0x5a) = (char)iVar17;
                    iVar17 = iVar17 + 1;
                  }
                  cVar3 = (&DAT_18024a8e7)[lVar14];
                  *(char *)((longlong)plVar4 + lVar12 + 0x5b) = cVar3;
                  if (cVar3 == -1) {
                    uVar8 = FUN_1800a01a0(plVar4,iVar17,(&DAT_18024a8e0)[uVar5 * 2],0x18);
                    if ((uVar8 & 1) == 0) goto LAB_18008c17c;
                    *(char *)((longlong)plVar4 + lVar12 + 0x5b) = (char)iVar17;
                    iVar17 = iVar17 + 1;
                  }
                  uVar16 = (int)uVar5 + 1;
                  uVar5 = (ulonglong)uVar16;
                } while (uVar16 < 0xe);
                plVar15 = *(longlong **)(&stack0xffffffffffffffc0 + lVar9);
                lVar12 = *(longlong *)(&stack0xffffffffffffffc8 + lVar9);
                FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar12 + 0xf18) + 0x1518),plVar15[0x1e4]
                              ,0,1,0);
                FUN_1800e8548(*(longlong *)(*(longlong *)(lVar12 + 0xf18) + 0x1518) + 8,0);
                lVar14 = 0;
                if (plVar4[0x39e2] != 0) {
                  lVar14 = plVar4[0x39e2] + 0x6d0;
                }
                lVar14 = FUN_1800eeec0(lVar14,(int)plVar4[5],*(longlong *)(lVar12 + 0xf18) + 0x1520,
                                       0xc0,0);
                plVar4[0x39fa] = lVar14;
                if (lVar14 != 0) {
                  lVar13 = plVar4[0x39e2];
                  lVar14 = 0;
                  if (lVar13 != 0) {
                    lVar14 = lVar13 + 0x6a8;
                  }
                  lVar1 = 0;
                  if (lVar13 != 0) {
                    lVar1 = lVar13 + 0x6d0;
                  }
                  lVar14 = FUN_1800eeec0(lVar1,(int)plVar4[5],*(longlong *)(lVar12 + 0xf18) + 0x15b0
                                         ,0x4000,lVar14);
                  plVar4[0x39f9] = lVar14;
                  if (lVar14 != 0) {
                    FUN_1800a0480(plVar4);
                    plVar4[0x3a28] = plVar4[0x39e2];
                    *(int *)(plVar4 + 0x3a29) = (int)plVar4[5];
                    *(undefined4 *)((longlong)plVar4 + 0x1d16c) = 0;
                    lVar9 = (*__imp_KERNEL32_dll_CreateEventA)(0,0,0,0);
                    uVar16 = *(uint *)(plVar4 + 5);
                    lVar14 = plVar4[0x39e2];
                    plVar4[0x3a2e] = lVar9;
                    uVar5 = FUN_1800f6098(FUN_1800f62c8);
                    if ((uVar5 & 1) == 0) {
                      *(undefined8 *)(lVar14 + (ulonglong)uVar16 * 0x28 + 0x38) = 0;
                    }
                    (*__imp_KERNEL32_dll_LeaveCriticalSection)(plVar4[0x39e2] + 0x620);
                    return 1;
                  }
                  if (plVar4[0x39fa] != 0) {
                    FUN_1800380e0(plVar4[0x39fa],1);
                  }
                  plVar4[0x39fa] = 0;
                }
              }
              else {
LAB_18008c180:
                FUN_180102fc0(plVar15[0x1e4],8);
                plVar15[0x1e4] = 0;
              }
            }
            FUN_180102fc0(plVar15[0x1e4],8);
            plVar15[0x1e4] = 0;
          }
          lVar14 = *(longlong *)(&stack0xffffffffffffffd0 + lVar9);
          uVar6 = (**(code **)(**(longlong **)(lVar14 + 0xf28) + 0x10))();
          *(undefined8 *)(lVar14 + 0xf28) = 0;
        }
        uVar6 = FUN_1800ed150(uVar6,1,*(longlong *)(&stack0xffffffffffffffd8 + lVar9) + 0x118);
        plVar15 = (longlong *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar9) + 0xfd8);
      }
      FUN_1800ed150(uVar6,0x28,plVar15);
    }
    FUN_1800f9060(plVar4[0x39e2],(int)plVar4[5]);
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(plVar4[0x39e2] + 0x620);
LAB_18008c1f8:
  plVar4[4] = 0;
  FUN_1800e12c8(plVar4[0x39e2]);
  plVar4[0x39e2] = 0;
  return 0;
}

