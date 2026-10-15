/*
 * FUN_1800deb88 at 1800deb88
 * undefined FUN_1800deb88(void)
 * Address ranges: 1800deb88-1800df13f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800deb88(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint local_350 [2];
  longlong *local_348;
  longlong *local_340;
  undefined1 auStack_338 [80];
  int local_2e8;
  undefined8 local_2e0;
  undefined1 auStack_2d8 [296];
  int local_1b0;
  int iStack_1ac;
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [256];
  undefined8 local_60;
  
  local_348 = (longlong *)0x0;
  lVar11 = *(longlong *)(param_1 + 0x10);
  if ((*(longlong **)(lVar11 + 0x688) == (longlong *)0x0) ||
     (iVar8 = (**(code **)(**(longlong **)(lVar11 + 0x688) + 0x68))(), iVar8 == 0)) {
    iVar8 = (**(code **)(lVar11 + 0x2b8))(&DAT_18023b850,&local_348);
    if (-1 < iVar8) {
      if (*(longlong **)(lVar11 + 0x688) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar11 + 0x688) + 0x10))();
      }
      *(longlong **)(lVar11 + 0x688) = local_348;
    }
    local_348 = *(longlong **)(lVar11 + 0x688);
    if (local_348 == (longlong *)0x0) {
      return 0;
    }
    thunk_FUN_180102fc0(*(undefined8 *)(lVar11 + 0x690));
    local_340 = (longlong *)0x0;
    *(undefined8 *)(lVar11 + 0x690) = 0;
    *(undefined8 *)(lVar11 + 0x698) = 0;
    iVar8 = 0;
    while (iVar9 = (**(code **)(*local_348 + 0x60))(local_348,iVar8,&local_340), -1 < iVar9) {
      iVar9 = (**(code **)(*local_340 + 0x50))(local_340,auStack_2d8);
      if (-1 < iVar9) {
        uVar12 = 0xffffffff;
        uVar14 = 0;
        do {
          lVar13 = uVar14 * 0x28;
          if (((*(int *)(lVar11 + 0x20 + lVar13) == local_1b0) &&
              (*(int *)(lVar11 + lVar13 + 0x24) == iStack_1ac)) &&
             ((local_1b0 != 0 || (iStack_1ac != 0)))) {
            (**(code **)(*local_340 + 0x10))();
            local_340 = (longlong *)0x0;
            goto LAB_1800decb8;
          }
          uVar4 = uVar12;
          if (uVar12 == 0xffffffff) {
            uVar4 = (uint)uVar14;
          }
          uVar1 = (uint)uVar14 + 1;
          uVar14 = (ulonglong)uVar1;
          if (*(longlong *)(lVar11 + lVar13 + 0x18) == 0) {
            uVar12 = uVar4;
          }
        } while (uVar1 < 0x10);
        uVar14 = (ulonglong)uVar12;
LAB_1800decb8:
        uVar12 = (uint)uVar14;
        if (local_340 == (longlong *)0x0) {
          if (uVar12 != 0xffffffff) goto LAB_1800ded18;
        }
        else if (uVar12 == 0xffffffff) {
          (**(code **)(*local_340 + 0x10))();
        }
        else {
          *(longlong **)(lVar11 + 0x18 + (longlong)(int)uVar12 * 0x28) = local_340;
          lVar13 = lVar11 + (longlong)(int)uVar12 * 0x28;
          *(undefined1 *)(lVar13 + 0x2c) = 1;
          *(ulonglong *)(lVar13 + 0x20) = CONCAT44(iStack_1ac,local_1b0);
LAB_1800ded18:
          local_350[0] = uVar12;
          FUN_1800032e8(lVar11 + 0x690,local_350);
        }
      }
      iVar8 = iVar8 + 1;
    }
    uVar14 = 0;
    do {
      lVar13 = uVar14 * 0x28;
      if (*(char *)(lVar11 + 0x2c + lVar13) != '\0') {
        if (*(uint *)(lVar11 + 0x698) != 0) {
          uVar10 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar11 + 0x690) + uVar10 * 4) == (int)uVar14) {
              if ((int)uVar10 != -1) goto LAB_1800dedb0;
              break;
            }
            uVar12 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(lVar11 + 0x698));
        }
        (**(code **)(**(longlong **)(lVar11 + 0x18 + lVar13) + 0x10))();
        *(undefined1 *)(lVar11 + 0x2c + lVar13) = 0;
      }
LAB_1800dedb0:
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while (uVar12 < 0x10);
  }
  lVar11 = 0;
  uVar12 = 1;
  if (*(char *)(param_1 + 0x478) == '\0') {
    uVar12 = 0x10;
  }
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x698);
  if (uVar12 < uVar4) {
    uVar4 = uVar12;
  }
  do {
    lVar13 = lVar11 * 0x10;
    uVar14 = 0;
    if (*(int *)(param_1 + 0x28 + lVar13) != 0) {
      do {
        thunk_FUN_180102fc0(*(undefined8 *)
                             (*(longlong *)(param_1 + (lVar11 + 2) * 0x10) + uVar14 * 8));
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(lVar13 + param_1 + 0x28));
    }
    lVar2 = param_1 + lVar13;
    thunk_FUN_180102fc0(*(undefined8 *)(lVar2 + 0x20));
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28 + lVar13) = 0;
    *(undefined4 *)(lVar2 + 0x2c) = 0;
    thunk_FUN_180102fc0(*(undefined8 *)(lVar2 + 0x120));
    *(undefined8 *)(lVar2 + 0x120) = 0;
    *(undefined8 *)(lVar2 + 0x128) = 0;
    thunk_FUN_180102fc0(*(undefined8 *)(lVar2 + 0x220));
    lVar11 = lVar11 + 1;
    *(undefined8 *)(lVar2 + 0x220) = 0;
    *(undefined8 *)(lVar2 + 0x228) = 0;
  } while (lVar11 != 0x10);
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 800));
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  uVar14 = 0;
  if (uVar4 != 0) {
    local_340 = (longlong *)CONCAT44(local_340._4_4_,uVar4);
    do {
      uVar12 = (uint)uVar14;
      if ((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x18) == uVar12 + 1)) {
        lVar11 = *(longlong *)(param_1 + 0x10);
        if (uVar12 < *(uint *)(lVar11 + 0x698)) {
          uVar14 = (ulonglong)*(uint *)(*(longlong *)(lVar11 + 0x690) + uVar14 * 4);
        }
        else {
          uVar14 = 0;
        }
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x328);
        local_350[0] = (uint)uVar14;
        FUN_1800032e8(param_1 + 800,local_350);
        lVar11 = lVar11 + uVar14 * 0x28;
        (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x50))
                  (*(longlong **)(lVar11 + 0x18),auStack_2d8);
        local_348 = (longlong *)0x0;
        iVar8 = 0;
        iVar9 = (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x38))
                          (*(longlong **)(lVar11 + 0x18),0,&local_348);
        while (iVar9 != -0x7785fffe) {
          local_350[0] = uVar12;
          (**(code **)(*local_348 + 0x38))(local_348,auStack_338);
          if (local_2e8 != 0) {
            func_0x000180223210(auStack_1a0,auStack_2d8);
            func_0x000180223210(auStack_160,auStack_338);
            local_60 = local_2e0;
            plVar3 = (longlong *)(param_1 + (uVar10 + 0x22) * 0x10);
            iVar9 = *(int *)((longlong)plVar3 + 0xc);
            if ((int)plVar3[1] == iVar9) {
              uVar12 = iVar9 << 1;
              if (iVar9 == 0) {
                uVar12 = 0x10;
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = CONCAT44(0,uVar12);
              lVar13 = CONCAT44(0,uVar12) * 0x150;
              if (SUB168(auVar5 * ZEXT816(0x150),8) != 0) {
                lVar13 = -1;
              }
              lVar13 = thunk_FUN_180102f80(lVar13);
              if (lVar13 != 0) {
                thunk_FUN_180001218(lVar13,*plVar3,
                                    (ulonglong)*(uint *)((longlong)plVar3 + 0xc) * 0x150);
                thunk_FUN_180102fc0(*plVar3);
                *plVar3 = lVar13;
                *(uint *)((longlong)plVar3 + 0xc) = uVar12;
                goto LAB_1800defb8;
              }
            }
            else {
LAB_1800defb8:
              thunk_FUN_180001218(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 0x150,auStack_1a0,
                                  0x150);
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            }
            plVar3 = (longlong *)(param_1 + (uVar10 + 2) * 0x10);
            iVar9 = *(int *)((longlong)plVar3 + 0xc);
            if ((int)plVar3[1] == iVar9) {
              uVar12 = iVar9 << 1;
              if (iVar9 == 0) {
                uVar12 = 0x10;
              }
              auVar6._8_8_ = 0;
              auVar6._0_8_ = CONCAT44(0,uVar12);
              lVar13 = CONCAT44(0,uVar12) << 3;
              if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
                lVar13 = -1;
              }
              lVar13 = thunk_FUN_180102f80(lVar13);
              if (lVar13 != 0) {
                thunk_FUN_180001218(lVar13,*plVar3,(ulonglong)*(uint *)((longlong)plVar3 + 0xc) << 3
                                   );
                thunk_FUN_180102fc0(*plVar3);
                *plVar3 = lVar13;
                *(uint *)((longlong)plVar3 + 0xc) = uVar12;
                goto LAB_1800df038;
              }
            }
            else {
LAB_1800df038:
              *(undefined8 *)(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 8) = 0;
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            }
            plVar3 = (longlong *)(param_1 + (uVar10 + 0x12) * 0x10);
            iVar9 = *(int *)((longlong)plVar3 + 0xc);
            if ((int)plVar3[1] == iVar9) {
              uVar12 = iVar9 << 1;
              if (iVar9 == 0) {
                uVar12 = 0x10;
              }
              auVar7._8_8_ = 0;
              auVar7._0_8_ = CONCAT44(0,uVar12);
              lVar13 = CONCAT44(0,uVar12) << 3;
              if (SUB168(auVar7 * ZEXT816(8),8) != 0) {
                lVar13 = -1;
              }
              lVar13 = thunk_FUN_180102f80(lVar13);
              if (lVar13 == 0) goto LAB_1800df0c4;
              thunk_FUN_180001218(lVar13,*plVar3,(ulonglong)*(uint *)((longlong)plVar3 + 0xc) << 3);
              thunk_FUN_180102fc0(*plVar3);
              *plVar3 = lVar13;
              *(uint *)((longlong)plVar3 + 0xc) = uVar12;
            }
            *(undefined8 *)(*plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 8) = 0;
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          }
LAB_1800df0c4:
          (**(code **)(*local_348 + 0x10))();
          iVar8 = iVar8 + 1;
          iVar9 = (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x38))
                            (*(longlong **)(lVar11 + 0x18),iVar8,&local_348);
          uVar12 = local_350[0];
        }
      }
      uVar14 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < (uint)local_340);
  }
  return 1;
}

