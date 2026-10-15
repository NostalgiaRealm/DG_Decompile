/*
 * FUN_18007fb30 at 18007fb30
 * undefined FUN_18007fb30(void)
 * Address ranges: 18007fb30-18008026b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18007fb30(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int *piVar14;
  undefined *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong extraout_x15;
  longlong extraout_x18;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  undefined1 auVar24 [16];
  
  auVar24 = FUN_180001640();
  uVar16 = DAT_18024e2d0;
  piVar14 = auVar24._8_8_;
  plVar20 = auVar24._0_8_;
  lVar19 = extraout_x15 * -0x10;
  plVar20[1] = (longlong)piVar14;
  plVar20[2] = param_3;
  auVar24 = FUN_1800e1240(uVar16);
  lVar7 = auVar24._0_8_;
  plVar8 = plVar20 + 0x3800;
  plVar20[0x39e2] = lVar7;
  if (lVar7 == 0) {
    return 0;
  }
  plVar20[4] = lVar7;
  plVar20[1] = (longlong)piVar14;
  plVar20[2] = param_3;
  if (param_4 == 6) {
LAB_18007fbdc:
    lVar18 = 0x1e0000001b;
    lVar17 = 0x1c0000001c;
LAB_18007fbe4:
    plVar20[7] = lVar18;
    plVar20[8] = lVar17;
  }
  else {
    if (param_4 == 0x15) {
      lVar18 = 0x1800000017;
      lVar17 = 0x1800000018;
      goto LAB_18007fbe4;
    }
    if (param_4 == 0x16) {
      lVar18 = 0xb00000009;
      lVar17 = 0xb0000000b;
      goto LAB_18007fbe4;
    }
    if (param_4 != 0x2a) goto LAB_18007fbdc;
    plVar20[7] = 0x1e0000001b;
    plVar20[8] = 0x1c0000001c;
    lVar18 = 0x1800000017;
    lVar17 = 0x1800000018;
  }
  plVar20[9] = lVar18;
  plVar20[10] = lVar17;
  FUN_1800e5470(lVar7,auVar24._8_8_,plVar20);
  iVar5 = *piVar14;
  uVar4 = 5;
  if (iVar5 != 3) {
    uVar4 = 0;
  }
  if (iVar5 - 2U < 2) {
    puVar15 = &DAT_18023b0ec;
LAB_18007fc50:
    uVar16 = 1;
  }
  else {
    if (iVar5 == 1) {
      puVar15 = &DAT_18023b0f0;
      goto LAB_18007fc50;
    }
    if (iVar5 == 4) {
      puVar15 = &DAT_18023b0f4;
      goto LAB_18007fc50;
    }
    puVar15 = &DAT_18023b0f8;
    uVar16 = 3;
  }
  uVar6 = FUN_1800e2e40(plVar20[0x39e2],(int)plVar20[5],uVar4,puVar15,uVar16,iVar5 == 0);
  uVar16 = DAT_18024e2d0;
  if ((uVar6 & 1) == 0) goto LAB_180080224;
  bVar2 = true;
  uVar6 = 0;
  plVar20[6] = plVar20[0x39e2] + (ulonglong)*(uint *)(plVar20 + 5) * 0x28 + 0x18;
  puVar1 = (undefined8 *)(plVar20[0x39e2] + (ulonglong)*(uint *)(plVar20 + 5) * 0x18c0 + 0x6b0);
  plVar20[0x39e3] = (longlong)puVar1;
  *(longlong **)(&stack0xffffffffffffffa0 + lVar19) = plVar8;
  *(longlong **)(&stack0xffffffffffffffa8 + lVar19) = plVar20 + 0x3800;
  plVar13 = plVar20 + 0x39e4;
  plVar20[0x39e5] = 0;
  *plVar13 = 0;
  plVar20[0x39e7] = 0;
  plVar20[0x39e6] = 0;
  plVar20[0x39e9] = 0;
  plVar20[0x39e8] = 0;
  plVar20[0x39eb] = 0;
  plVar20[0x39ea] = 0;
  plVar20[0x39ed] = 0;
  plVar20[0x39ec] = 0;
  plVar20[0x39ef] = 0;
  plVar20[0x39ee] = 0;
  plVar20[0x39f1] = 0;
  plVar20[0x39f0] = 0;
  plVar20[0x39f3] = 0;
  plVar20[0x39f2] = 0;
  plVar20[0x39f5] = 0;
  plVar20[0x39f4] = 0;
  plVar20[0x39f7] = 0;
  plVar20[0x39f6] = 0;
  plVar20[0x39f9] = 0;
  plVar20[0x39f8] = 0;
  plVar20[0x39fb] = 0;
  plVar20[0x39fa] = 0;
  plVar20[0x39fd] = 0;
  plVar20[0x39fc] = 0;
  plVar20[0x39ff] = 0;
  plVar20[0x39fe] = 0;
  plVar20[0x3a01] = 0;
  plVar20[0x3a00] = 0;
  plVar20[0x3a03] = 0;
  plVar20[0x3a02] = 0;
  plVar20[0x3a05] = 0;
  plVar20[0x3a04] = 0;
  plVar20[0x3a07] = 0;
  plVar20[0x3a06] = 0;
  plVar20[0x3a09] = 0;
  plVar20[0x3a08] = 0;
  plVar20[0x3a0b] = 0;
  plVar20[0x3a0a] = 0;
  do {
    if (!bVar2) {
      plVar8 = *(longlong **)(&stack0xffffffffffffffa0 + lVar19);
      goto LAB_18007fd84;
    }
    if ((&DAT_18024a7f0)[uVar6] != 0) {
      uVar4 = FUN_180102160(uVar16,(&DAT_18024a7f0)[uVar6],u_RT_CUSTOM_18023b3e8);
      lVar7 = FUN_1801021b0(uVar16,(&DAT_18024a7f0)[uVar6],u_RT_CUSTOM_18023b3e8);
      if ((lVar7 == 0) ||
         (plVar8 = (longlong *)*puVar1,
         iVar5 = (**(code **)(*plVar8 + 0x78))(plVar8,lVar7,uVar4,0,plVar13 + uVar6), iVar5 < 0)) {
        thunk_FUN_180102fc0(lVar7);
        bVar2 = false;
      }
      else {
        thunk_FUN_180102fc0(lVar7);
      }
    }
    uVar22 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar22;
  } while (uVar22 < 0x28);
  plVar8 = *(longlong **)(&stack0xffffffffffffffa0 + lVar19);
  if (bVar2) {
LAB_18007fdb0:
    plVar21 = plVar20 + 0x3a00;
    uVar22 = *(uint *)(plVar20 + 5);
    lVar7 = plVar8[0x1e2];
    plVar23 = plVar20 + 0x3a00;
    plVar20[0x3a0c] = 0;
    uVar16 = DAT_18024e2d0;
    if (DAT_18024a7e0 == 0) {
LAB_18007fe68:
      lVar7 = *(longlong *)(&stack0xffffffffffffffa8 + lVar19);
      plVar9 = plVar20 + 0x3a00;
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar19) = 0xd0;
      *(undefined8 *)(&stack0xffffffffffffffd8 + lVar19) = 4;
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar19) = 0xd000000000;
      plVar10 = (longlong *)**(undefined8 **)(lVar7 + 0xf18);
      auVar24 = (**(code **)(*plVar10 + 0x18))
                          (plVar10,&stack0xffffffffffffffd0 + lVar19,0,plVar20 + 15000);
      if (-1 < auVar24._0_4_) {
        *(undefined8 *)(&stack0xffffffffffffffe8 + lVar19) = 0x4000;
        *(undefined8 *)(&stack0xfffffffffffffff0 + lVar19) = 1;
        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar19) = 0x4000000000;
        plVar10 = plVar20 + 0x3a00;
        plVar11 = (longlong *)**(undefined8 **)(lVar7 + 0xf18);
        iVar5 = (**(code **)(*plVar11 + 0x18))
                          (plVar11,&stack0xffffffffffffffe8 + lVar19,0,plVar20 + 14999);
        if (-1 < iVar5) {
          func_0x000180222c50(&stack0x00000000 + lVar19,0,0x1000);
          uVar22 = 0;
          do {
            cVar3 = (**(code **)(*plVar20 + 0x158))
                              (plVar20,uVar22,&stack0x00000000 + lVar19,uVar22 == 0);
            if (cVar3 == '\0') {
              bVar2 = false;
              goto LAB_18007ff44;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < 3);
          bVar2 = true;
LAB_18007ff44:
          if (bVar2) {
            *(longlong **)(&stack0xffffffffffffffc0 + lVar19) = plVar9;
            *(longlong **)(&stack0xffffffffffffffc8 + lVar19) = plVar10;
            *(longlong **)(&stack0xffffffffffffffb0 + lVar19) = plVar23;
            *(longlong **)(&stack0xffffffffffffffb8 + lVar19) = plVar21;
            iVar5 = 3;
            *(longlong **)(&stack0xffffffffffffffa0 + lVar19) = plVar13;
            uVar6 = 0;
            do {
              lVar7 = uVar6 * 8;
              lVar17 = uVar6 * 4;
              cVar3 = (&DAT_18024a8e4)[lVar7];
              *(char *)((longlong)plVar20 + lVar17 + 0x58) = cVar3;
              if (cVar3 == -1) {
                uVar12 = FUN_1800a01a0(plVar20,iVar5,(&DAT_18024a8e0)[uVar6 * 2],0);
                if ((uVar12 & 1) != 0) {
                  *(char *)((longlong)plVar20 + lVar17 + 0x58) = (char)iVar5;
                  iVar5 = iVar5 + 1;
                  goto LAB_18007ffa0;
                }
LAB_1800801a4:
                plVar13 = *(longlong **)(&stack0xffffffffffffffa0 + lVar19);
                plVar23 = *(longlong **)(&stack0xffffffffffffffb0 + lVar19);
                plVar21 = *(longlong **)(&stack0xffffffffffffffb8 + lVar19);
                plVar9 = *(longlong **)(&stack0xffffffffffffffc0 + lVar19);
                plVar10 = *(longlong **)(&stack0xffffffffffffffc8 + lVar19);
                goto LAB_1800801b0;
              }
LAB_18007ffa0:
              cVar3 = (&DAT_18024a8e5)[lVar7];
              *(char *)((longlong)plVar20 + lVar17 + 0x59) = cVar3;
              if (cVar3 == -1) {
                uVar12 = FUN_1800a01a0(plVar20,iVar5,(&DAT_18024a8e0)[uVar6 * 2],8);
                if ((uVar12 & 1) == 0) goto LAB_1800801a4;
                *(char *)((longlong)plVar20 + lVar17 + 0x59) = (char)iVar5;
                iVar5 = iVar5 + 1;
              }
              cVar3 = (&DAT_18024a8e6)[lVar7];
              *(char *)((longlong)plVar20 + lVar17 + 0x5a) = cVar3;
              if (cVar3 == -1) {
                uVar12 = FUN_1800a01a0(plVar20,iVar5,(&DAT_18024a8e0)[uVar6 * 2],0x10);
                if ((uVar12 & 1) == 0) goto LAB_1800801a4;
                *(char *)((longlong)plVar20 + lVar17 + 0x5a) = (char)iVar5;
                iVar5 = iVar5 + 1;
              }
              cVar3 = (&DAT_18024a8e7)[lVar7];
              *(char *)((longlong)plVar20 + lVar17 + 0x5b) = cVar3;
              if (cVar3 == -1) {
                uVar12 = FUN_1800a01a0(plVar20,iVar5,(&DAT_18024a8e0)[uVar6 * 2],0x18);
                if ((uVar12 & 1) == 0) goto LAB_1800801a4;
                *(char *)((longlong)plVar20 + lVar17 + 0x5b) = (char)iVar5;
                iVar5 = iVar5 + 1;
              }
              uVar22 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar22;
            } while (uVar22 < 0xe);
            uVar6 = 0;
            do {
              FUN_1800a1058(plVar20,uVar6,0);
              thunk_FUN_180001218(plVar20 + uVar6 * 0x183 + 0x2018,plVar20 + 0x3848,0xc00);
              uVar22 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar22;
            } while (uVar22 < 0x10);
            lVar7 = *(longlong *)(&stack0xffffffffffffffa8 + lVar19);
            *(undefined4 *)(&stack0xffffffffffffffa0 + lVar19) = 0;
            plVar13 = (longlong *)**(undefined8 **)(lVar7 + 0xf18);
            (**(code **)(*plVar13 + 0xe8))(plVar13,0x1e,&stack0xffffffffffffffa0 + lVar19);
            lVar17 = plVar8[0x1e2];
            uVar22 = *(uint *)(plVar20 + 5);
            lVar19 = *(longlong *)(lVar7 + 0xf18);
            plVar20[0x3a9b] = lVar17;
            *(uint *)(plVar20 + 0x3a9c) = uVar22;
            plVar20[0x3a9d] = lVar17 + (ulonglong)uVar22 * 0x18c0 + 0x6b0;
            plVar20[0x3a11] = lVar17;
            *(uint *)(plVar20 + 0x3a12) = uVar22;
            cVar3 = *(char *)(plVar20[1] + 0x1f8);
            *(undefined1 *)(plVar20 + 0x3a16) = 0;
            plVar20[0x3a15] = lVar19;
            if (((cVar3 == '\0') && (*(int *)(lVar19 + 0x20) == 0x1002)) &&
               (iVar5 = *(int *)(lVar19 + 0x24),
               (((iVar5 == 0x15dd || iVar5 == 0x15d8) || iVar5 == 0x1636) || iVar5 == 0x67df) ||
               iVar5 == 0x1638)) {
              *(undefined1 *)(plVar20 + 0x3a16) = 1;
            }
            puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(extraout_x18 + 0x60) + 0x18) + 0x20)
            ;
            for (plVar20 = (longlong *)*puVar1; (undefined8 *)*plVar20 != puVar1;
                plVar20 = (longlong *)*plVar20) {
              uVar6 = FUN_1800f62c8(plVar20 + -2);
              if ((uVar6 & 1) != 0) goto LAB_180080188;
            }
            *(undefined8 *)(lVar17 + (ulonglong)uVar22 * 0x28 + 0x38) = 0;
LAB_180080188:
            (*__imp_KERNEL32_dll_LeaveCriticalSection)(plVar8[0x1e2] + 0x620);
            return 1;
          }
LAB_1800801b0:
          FUN_18007bdd8(plVar20);
          (**(code **)(*(longlong *)plVar10[0x97] + 0x10))();
          plVar10[0x97] = 0;
        }
        auVar24 = (**(code **)(*(longlong *)plVar9[0x98] + 0x10))();
        plVar9[0x98] = 0;
      }
    }
    else {
      uVar4 = FUN_180102160(DAT_18024e2d0,DAT_18024a7e0,u_RT_CUSTOM_18023b3e8);
      lVar17 = FUN_1801021b0(uVar16,DAT_18024a7e0,u_RT_CUSTOM_18023b3e8);
      if (lVar17 != 0) {
        lVar7 = lVar7 + (ulonglong)uVar22 * 0x18c0;
        plVar9 = *(longlong **)(lVar7 + 0x6b0);
        iVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar17,uVar4,0,plVar20 + 0x3a0c);
        if ((-1 < iVar5) &&
           (plVar9 = *(longlong **)(lVar7 + 0x6b0),
           iVar5 = (**(code **)(*plVar9 + 0x58))
                             (plVar9,PTR_PTR_18024a7d0,DAT_18024a7d8,lVar17,uVar4,plVar20 + 0x3a0d),
           -1 < iVar5)) {
          thunk_FUN_180102fc0(lVar17);
          goto LAB_18007fe68;
        }
      }
      auVar24 = thunk_FUN_180102fc0(lVar17);
    }
    FUN_1800e15f0(auVar24._0_8_,auVar24._8_8_,1,plVar21 + 0xc,plVar23 + 0xd);
    lVar19 = 0;
    do {
      if ((longlong *)plVar13[lVar19] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar13[lVar19] + 0x10))();
        plVar13[lVar19] = 0;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x28);
  }
  else {
LAB_18007fd84:
    lVar7 = 0;
    do {
      if ((longlong *)plVar13[lVar7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar13[lVar7] + 0x10))();
        plVar13[lVar7] = 0;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x28);
    if (bVar2) goto LAB_18007fdb0;
  }
  FUN_1800e32e0(plVar8[0x1e2],(int)plVar20[5]);
LAB_180080224:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(plVar8[0x1e2] + 0x620);
  lVar19 = plVar8[0x1e2];
  plVar20[4] = 0;
  FUN_1800e12c8(lVar19);
  plVar8[0x1e2] = 0;
  return 0;
}

