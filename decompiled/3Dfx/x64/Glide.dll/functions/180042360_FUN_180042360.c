/*
 * FUN_180042360 at 180042360
 * undefined __fastcall FUN_180042360(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180042360-180042466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042360(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = (ulonglong)param_2;
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar3 = ZEXT816(0x18) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar4 = auVar3._0_8_;
    if (auVar3._8_8_ != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = thunk_FUN_18005db9c(uVar4);
    if (lVar5 != 0) {
      uVar9 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar2 = *param_1;
          uVar8 = (int)uVar9 + 1;
          puVar6 = (undefined8 *)(lVar2 + uVar9 * 0x18);
          uVar4 = puVar6[1];
          puVar1 = (undefined8 *)(lVar5 + uVar9 * 0x18);
          *puVar1 = *puVar6;
          puVar1[1] = uVar4;
          *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18) =
               *(undefined8 *)(lVar2 + 0x10 + uVar9 * 0x18);
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(param_1 + 1));
      }
      FUN_18005dbc0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar5;
    }
  }
  uVar8 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)uVar8;
  while (param_2 < uVar8) {
    lVar5 = *param_1;
    uVar8 = (int)uVar9 - 1;
    uVar10 = (ulonglong)uVar8;
    puVar6 = (undefined8 *)(lVar5 + uVar10 * 0x18);
    uVar4 = puVar6[1];
    puVar1 = (undefined8 *)(lVar5 + uVar9 * 0x18);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
    *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18) = *(undefined8 *)(lVar5 + 0x10 + uVar10 * 0x18);
    uVar9 = uVar10;
  }
  *(undefined8 *)(*param_1 + uVar7 * 0x18) = param_3;
  *(undefined8 *)(*param_1 + 8 + uVar7 * 0x18) = *param_4;
  puVar6 = (undefined8 *)FUN_18005db9c(0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
  }
  *(undefined8 **)(*param_1 + 0x10 + uVar7 * 0x18) = puVar6;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

