/*
 * FUN_18000b920 at 18000b920
 * undefined4 * __cdecl FUN_18000b920(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 18000b920-18000ba53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18000b920(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  SIZE_T SVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  *param_1 = *param_2;
  lVar11 = *(longlong *)(param_1 + 2);
  if (lVar11 != 0) {
    lVar9 = *(longlong *)(lVar11 + -8);
    lVar6 = lVar11 + lVar9 * 0x28;
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      thunk_FUN_18005fbc8(*(LPVOID *)(lVar6 + -0x10));
      thunk_FUN_18005fbc8(*(LPVOID *)(lVar6 + -0x20));
      lVar6 = lVar6 + -0x28;
    }
    thunk_FUN_18005fbc8((LPVOID)(lVar11 + -8));
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    uVar4 = param_2[5];
    uVar10 = CONCAT44(0,uVar4);
    uVar8 = uVar10 * 0x28;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    if (SUB168(auVar5 * ZEXT816(0x28),8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    SVar2 = uVar8 + 8;
    if (0xfffffffffffffff7 < uVar8) {
      SVar2 = 0xffffffffffffffff;
    }
    puVar7 = (ulonglong *)thunk_FUN_18005fb88(SVar2);
    if (puVar7 == (ulonglong *)0x0) {
      *(undefined8 *)(param_1 + 2) = 0;
    }
    else {
      puVar3 = puVar7 + 1;
      *puVar7 = uVar10;
      puVar7 = puVar3;
      if (uVar4 != 0) {
        do {
          puVar7[1] = 0;
          puVar7[2] = 0;
          uVar10 = uVar10 - 1;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7 = puVar7 + 5;
        } while (uVar10 != 0);
      }
      *(ulonglong **)(param_1 + 2) = puVar3;
      if (puVar3 != (ulonglong *)0x0) {
        uVar4 = param_2[4];
        uVar8 = 0;
        lVar11 = *(longlong *)(param_2 + 2);
        if (uVar4 != 0) {
          do {
            FUN_18000baf8((undefined4 *)(puVar3 + uVar8 * 5),(undefined4 *)(lVar11 + uVar8 * 0x28));
            uVar1 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar1;
          } while (uVar1 < uVar4);
        }
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
      }
    }
  }
  return param_1;
}

