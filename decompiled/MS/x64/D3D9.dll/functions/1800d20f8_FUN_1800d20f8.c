/*
 * FUN_1800d20f8 at 1800d20f8
 * undefined4 * __fastcall FUN_1800d20f8(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 1800d20f8-1800d2231
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1800d20f8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  lVar5 = *(longlong *)(param_1 + 2);
  if (lVar5 != 0) {
    lVar10 = *(longlong *)(lVar5 + -8);
    lVar3 = lVar5 + lVar10 * 0x28;
    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
      FUN_1800fbcf0(*(LPVOID *)(lVar3 + -0x10));
      FUN_1800fbcf0(*(LPVOID *)(lVar3 + -0x20));
      lVar3 = lVar3 + -0x28;
    }
    FUN_1800fbcf0((longlong *)(lVar5 + -8));
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    uVar1 = param_2[5];
    uVar9 = CONCAT44(0,uVar1);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9;
    uVar4 = SUB168(ZEXT816(0x28) * auVar2,0);
    if (SUB168(ZEXT816(0x28) * auVar2,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = uVar4 + 8;
    if (0xfffffffffffffff7 < uVar4) {
      lVar5 = -1;
    }
    puVar6 = (ulonglong *)thunk_FUN_1800fbccc(lVar5);
    if (puVar6 == (ulonglong *)0x0) {
      *(undefined8 *)(param_1 + 2) = 0;
    }
    else {
      *puVar6 = uVar9;
      puVar6 = puVar6 + 1;
      puVar7 = puVar6;
      if (uVar1 != 0) {
        do {
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7 = puVar7 + 5;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      *(ulonglong **)(param_1 + 2) = puVar6;
      if (puVar6 != (ulonglong *)0x0) {
        uVar1 = param_2[4];
        uVar4 = 0;
        lVar5 = *(longlong *)(param_2 + 2);
        if (uVar1 != 0) {
          do {
            FUN_1800d2234((undefined4 *)(puVar6 + uVar4 * 5),(undefined4 *)(lVar5 + uVar4 * 0x28));
            uVar8 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar8;
          } while (uVar8 < uVar1);
        }
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
      }
    }
  }
  return param_1;
}

