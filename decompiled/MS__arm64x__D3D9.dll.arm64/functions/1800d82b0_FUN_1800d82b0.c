/*
 * FUN_1800d82b0 at 1800d82b0
 * undefined FUN_1800d82b0(void)
 * Address ranges: 1800d82b0-1800d8507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800d82b0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  bool bVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  int local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  local_80[0] = FUN_1800d8778(param_1,*(undefined8 *)(param_1 + 0x58),
                              *(undefined4 *)(param_1 + 0x60));
  bVar7 = local_80[0] != -1;
  if (local_80[0] == -1) {
    return false;
  }
  uVar11 = (ulonglong)*(uint *)(param_1 + 0x80);
  uVar13 = 0;
  lVar10 = *(longlong *)(param_1 + 0x90);
  if (*(int *)(lVar10 + uVar11 * 0x18 + 0x10) != 0) {
    do {
      iVar8 = func_0x000180222cb8(*(longlong *)(param_1 + 0x70) +
                                  (ulonglong)
                                  *(uint *)(uVar13 * 0x28 +
                                           *(longlong *)(lVar10 + uVar11 * 0x18 + 8)),
                                  *(longlong *)(param_1 + 0x70) + (longlong)local_80[0]);
      if (iVar8 == 0) {
        *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x60)) + -1;
        break;
      }
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x80);
      uVar1 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar1;
      lVar10 = *(longlong *)(param_1 + 0x90);
    } while (uVar1 < *(uint *)(lVar10 + uVar11 * 0x18 + 0x10));
  }
  lVar10 = *(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18;
  if ((int)uVar13 != *(int *)(lVar10 + 0x10)) goto LAB_1800d84dc;
  iVar8 = *(int *)(lVar10 + 0x14);
  uVar12 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar15 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(lVar10 + 0x10) == iVar8) {
    uVar1 = iVar8 << 1;
    if (iVar8 == 0) {
      uVar1 = 0x10;
    }
    uVar14 = CONCAT44(0,uVar1);
    uVar11 = uVar14 * 0x28;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar14;
    if (SUB168(auVar5 * ZEXT816(0x28),8) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    lVar17 = uVar11 + 8;
    if (0xfffffffffffffff7 < uVar11) {
      lVar17 = -1;
    }
    puVar9 = (ulonglong *)thunk_FUN_180102f80(lVar17);
    if (puVar9 != (ulonglong *)0x0) {
      puVar3 = puVar9 + 1;
      *puVar9 = uVar14;
      puVar9 = puVar3;
      if (uVar1 != 0) {
        do {
          puVar9[1] = 0;
          puVar9[2] = 0;
          uVar14 = uVar14 - 1;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9 = puVar9 + 5;
        } while (uVar14 != 0);
      }
      if (puVar3 != (ulonglong *)0x0) {
        uVar4 = *(uint *)(lVar10 + 0x14);
        uVar11 = 0;
        lVar17 = *(longlong *)(lVar10 + 8);
        if (uVar4 != 0) {
          do {
            FUN_1800d8e08(puVar3 + uVar11 * 5,lVar17 + uVar11 * 0x28);
            uVar2 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar2;
          } while (uVar2 < uVar4);
        }
        lVar17 = *(longlong *)(lVar10 + 8);
        if (lVar17 != 0) {
          lVar16 = *(longlong *)(lVar17 + -8);
          lVar6 = lVar17 + lVar16 * 0x28;
          for (; lVar16 != 0; lVar16 = lVar16 + -1) {
            thunk_FUN_180102fc0(*(undefined8 *)(lVar6 + -0x10));
            thunk_FUN_180102fc0(*(undefined8 *)(lVar6 + -0x20));
            lVar6 = lVar6 + -0x28;
          }
          thunk_FUN_180102fc0(lVar17 + -8,*(longlong *)(lVar17 + -8) * 0x28 + 8);
        }
        *(ulonglong **)(lVar10 + 8) = puVar3;
        *(uint *)(lVar10 + 0x14) = uVar1;
        goto LAB_1800d84a0;
      }
    }
    bVar7 = false;
  }
  else {
LAB_1800d84a0:
    uVar1 = *(uint *)(lVar10 + 0x10);
    *(uint *)(lVar10 + 0x10) = uVar1 + 1;
    FUN_1800d8e08(*(longlong *)(lVar10 + 8) + (ulonglong)uVar1 * 0x28,local_80);
    bVar7 = true;
    uVar12 = local_78;
    uVar15 = local_68;
  }
  thunk_FUN_180102fc0(uVar15);
  thunk_FUN_180102fc0(uVar12);
LAB_1800d84dc:
  *(int *)(param_1 + 0x84) = (int)uVar13;
  return bVar7;
}

