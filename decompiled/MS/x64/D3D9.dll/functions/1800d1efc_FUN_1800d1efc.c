/*
 * FUN_1800d1efc at 1800d1efc
 * undefined8 __fastcall FUN_1800d1efc(longlong * param_1, undefined4 * param_2)
 * Address ranges: 1800d1efc-1800d202a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800d1efc(longlong *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar2) {
    uVar10 = 0x10;
    if (iVar2 != 0) {
      uVar10 = iVar2 * 2;
    }
    uVar12 = CONCAT44(0,uVar10);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12;
    uVar6 = SUB168(ZEXT816(0x18) * auVar4,0);
    if (SUB168(ZEXT816(0x18) * auVar4,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar7 = uVar6 + 8;
    if (0xfffffffffffffff7 < uVar6) {
      lVar7 = -1;
    }
    puVar8 = (ulonglong *)thunk_FUN_1800fbccc(lVar7);
    if (puVar8 != (ulonglong *)0x0) {
      *puVar8 = uVar12;
      puVar1 = puVar8 + 1;
      puVar8 = puVar1;
      if (uVar10 != 0) {
        do {
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8 = puVar8 + 3;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (puVar1 != (ulonglong *)0x0) {
        uVar3 = *(uint *)((longlong)param_1 + 0xc);
        uVar6 = 0;
        lVar7 = *param_1;
        if (uVar3 != 0) {
          do {
            FUN_1800d20f8((undefined4 *)(puVar1 + uVar6 * 3),(undefined4 *)(lVar7 + uVar6 * 0x18));
            uVar11 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar11;
          } while (uVar11 < uVar3);
        }
        lVar7 = *param_1;
        if (lVar7 != 0) {
          lVar13 = *(longlong *)(lVar7 + -8);
          lVar5 = lVar7 + lVar13 * 0x18;
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            FUN_1800d2094((longlong *)(lVar5 + -0x10));
            lVar5 = lVar5 + -0x18;
          }
          FUN_1800fbcf0((longlong *)(lVar7 + -8));
        }
        *param_1 = (longlong)puVar1;
        *(uint *)((longlong)param_1 + 0xc) = uVar10;
        goto LAB_1800d1ffa;
      }
    }
    uVar6 = (ulonglong)puVar8 & 0xffffffffffffff00;
  }
  else {
LAB_1800d1ffa:
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    puVar9 = FUN_1800d20f8((undefined4 *)(*param_1 + (ulonglong)uVar10 * 0x18),param_2);
    uVar6 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
  }
  return uVar6;
}

