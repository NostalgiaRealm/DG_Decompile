/*
 * FUN_180043b88 at 180043b88
 * undefined __fastcall FUN_180043b88(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180043b88-180043c9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043b88(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar8 = (ulonglong)param_2;
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar4 = ZEXT816(0x18) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar5 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_18005d6fc(uVar5);
    if (lVar6 != 0) {
      uVar10 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar3 = *param_1;
          uVar9 = (int)uVar10 + 1;
          puVar1 = (undefined8 *)(lVar3 + uVar10 * 0x18);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + uVar10 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x10 + uVar10 * 0x18) =
               *(undefined8 *)(lVar3 + 0x10 + uVar10 * 0x18);
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(param_1 + 1));
      }
      FUN_18005d720((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar6;
    }
  }
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)uVar9;
  while (param_2 < uVar9) {
    lVar6 = *param_1;
    uVar9 = (int)uVar10 - 1;
    uVar11 = (ulonglong)uVar9;
    puVar1 = (undefined8 *)(lVar6 + uVar11 * 0x18);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar6 + uVar10 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    *(undefined8 *)(lVar6 + 0x10 + uVar10 * 0x18) = *(undefined8 *)(lVar6 + 0x10 + uVar11 * 0x18);
    uVar10 = uVar11;
  }
  *(undefined8 *)(*param_1 + uVar8 * 0x18) = param_3;
  *(undefined8 *)(*param_1 + 8 + uVar8 * 0x18) = *param_4;
  puVar7 = (undefined4 *)FUN_18005d6fc(0x20);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0;
  }
  *(undefined4 **)(*param_1 + 0x10 + uVar8 * 0x18) = puVar7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

