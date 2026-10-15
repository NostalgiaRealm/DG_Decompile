/*
 * FUN_1800d18e0 at 1800d18e0
 * undefined1 __fastcall FUN_1800d18e0(longlong param_1)
 * Address ranges: 1800d18e0-1800d1b41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800d18e0(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  undefined1 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  
  iVar4 = FUN_1800d1c00(param_1,*(undefined8 **)(param_1 + 0x58),*(uint *)(param_1 + 0x60));
  if (iVar4 == -1) {
    return 0;
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x80);
  uVar15 = 0;
  lVar14 = *(longlong *)(param_1 + 0x90);
  uVar16 = 0;
  if (*(int *)(lVar14 + 0x10 + uVar6 * 0x18) != 0) {
    do {
      uVar16 = (uint)uVar15;
      iVar5 = FUN_1800fc514((byte *)((ulonglong)
                                     *(uint *)(*(longlong *)(lVar14 + 8 + uVar6 * 0x18) +
                                              uVar15 * 0x28) + *(longlong *)(param_1 + 0x70)),
                            (byte *)((longlong)iVar4 + *(longlong *)(param_1 + 0x70)));
      if (iVar5 == 0) {
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (-1 - *(int *)(param_1 + 0x60));
        break;
      }
      uVar16 = uVar16 + 1;
      uVar15 = (ulonglong)uVar16;
      lVar14 = *(longlong *)(param_1 + 0x90);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x80);
    } while (uVar16 < *(uint *)(lVar14 + 0x10 + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18));
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x80);
  lVar14 = *(longlong *)(param_1 + 0x90);
  uVar12 = 1;
  if (uVar16 != *(uint *)(lVar14 + 0x10 + uVar6 * 0x18)) goto LAB_1800d1b23;
  iVar5 = *(int *)(lVar14 + 0x14 + uVar6 * 0x18);
  if (*(int *)(lVar14 + 0x10 + uVar6 * 0x18) == iVar5) {
    uVar15 = 0x10;
    if (iVar5 != 0) {
      uVar15 = (ulonglong)(uint)(iVar5 * 2);
    }
    iVar5 = (int)uVar15;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar15;
    uVar7 = SUB168(ZEXT816(0x28) * auVar2,0);
    if (SUB168(ZEXT816(0x28) * auVar2,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = uVar7 + 8;
    if (0xfffffffffffffff7 < uVar7) {
      lVar8 = -1;
    }
    puVar9 = (ulonglong *)thunk_FUN_1800fbccc(lVar8);
    if (puVar9 != (ulonglong *)0x0) {
      *puVar9 = uVar15;
      puVar9 = puVar9 + 1;
      puVar10 = puVar9;
      if (iVar5 != 0) {
        do {
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10 = puVar10 + 5;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (puVar9 != (ulonglong *)0x0) {
        uVar1 = *(uint *)(lVar14 + 0x14 + uVar6 * 0x18);
        uVar15 = 0;
        if (uVar1 != 0) {
          lVar8 = *(longlong *)(lVar14 + 8 + uVar6 * 0x18);
          do {
            FUN_1800d2234((undefined4 *)(puVar9 + uVar15 * 5),(undefined4 *)(lVar8 + uVar15 * 0x28))
            ;
            uVar11 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar11;
          } while (uVar11 < uVar1);
        }
        lVar8 = *(longlong *)(lVar14 + 8 + uVar6 * 0x18);
        if (lVar8 != 0) {
          lVar13 = *(longlong *)(lVar8 + -8);
          lVar3 = lVar8 + lVar13 * 0x28;
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            FUN_1800fbcf0(*(LPVOID *)(lVar3 + -0x10));
            FUN_1800fbcf0(*(LPVOID *)(lVar3 + -0x20));
            lVar3 = lVar3 + -0x28;
          }
          FUN_1800fbcf0((longlong *)(lVar8 + -8));
        }
        *(ulonglong **)(lVar14 + 8 + uVar6 * 0x18) = puVar9;
        *(int *)(lVar14 + 0x14 + uVar6 * 0x18) = iVar5;
        goto LAB_1800d1acd;
      }
    }
    uVar12 = 0;
  }
  else {
LAB_1800d1acd:
    uVar1 = *(uint *)(lVar14 + 0x10 + uVar6 * 0x18);
    uVar15 = (ulonglong)uVar1;
    lVar8 = *(longlong *)(lVar14 + 8 + uVar6 * 0x18);
    *(uint *)(lVar14 + 0x10 + uVar6 * 0x18) = uVar1 + 1;
    *(int *)(lVar8 + uVar15 * 0x28) = iVar4;
    FUN_1800fbcf0(*(LPVOID *)(lVar8 + 8 + uVar15 * 0x28));
    *(undefined8 *)(lVar8 + 8 + uVar15 * 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x28) = 0;
    FUN_1800fbcf0(*(LPVOID *)(lVar8 + 0x18 + uVar15 * 0x28));
    *(undefined8 *)(lVar8 + 0x18 + uVar15 * 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20 + uVar15 * 0x28) = 0;
    uVar12 = 1;
  }
  FUN_1800fbcf0((LPVOID)0x0);
  FUN_1800fbcf0((LPVOID)0x0);
LAB_1800d1b23:
  *(uint *)(param_1 + 0x84) = uVar16;
  return uVar12;
}

