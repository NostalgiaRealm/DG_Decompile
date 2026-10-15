/*
 * FUN_18001b774 at 18001b774
 * undefined __fastcall FUN_18001b774(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 18001b774-18001b8e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b774(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

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
    auVar3 = ZEXT816(0x48) * ZEXT416((uint)((int)param_1[1] * 2));
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
          puVar6 = (undefined8 *)(lVar2 + uVar9 * 0x48);
          uVar4 = puVar6[1];
          puVar1 = (undefined8 *)(lVar5 + uVar9 * 0x48);
          *puVar1 = *puVar6;
          puVar1[1] = uVar4;
          puVar6 = (undefined8 *)(lVar2 + 0x10 + uVar9 * 0x48);
          uVar4 = puVar6[1];
          puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar9 * 0x48);
          *puVar1 = *puVar6;
          puVar1[1] = uVar4;
          puVar6 = (undefined8 *)(lVar2 + 0x20 + uVar9 * 0x48);
          uVar4 = puVar6[1];
          puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar9 * 0x48);
          *puVar1 = *puVar6;
          puVar1[1] = uVar4;
          puVar6 = (undefined8 *)(lVar2 + 0x30 + uVar9 * 0x48);
          uVar4 = puVar6[1];
          puVar1 = (undefined8 *)(lVar5 + 0x30 + uVar9 * 0x48);
          *puVar1 = *puVar6;
          puVar1[1] = uVar4;
          *(undefined8 *)(lVar5 + 0x40 + uVar9 * 0x48) =
               *(undefined8 *)(lVar2 + 0x40 + uVar9 * 0x48);
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
    puVar6 = (undefined8 *)(lVar5 + uVar10 * 0x48);
    uVar4 = puVar6[1];
    puVar1 = (undefined8 *)(lVar5 + uVar9 * 0x48);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x10 + uVar10 * 0x48);
    uVar4 = puVar6[1];
    puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar9 * 0x48);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x20 + uVar10 * 0x48);
    uVar4 = puVar6[1];
    puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar9 * 0x48);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x30 + uVar10 * 0x48);
    uVar4 = puVar6[1];
    puVar1 = (undefined8 *)(lVar5 + 0x30 + uVar9 * 0x48);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
    *(undefined8 *)(lVar5 + 0x40 + uVar9 * 0x48) = *(undefined8 *)(lVar5 + 0x40 + uVar10 * 0x48);
    uVar9 = uVar10;
  }
  *(undefined8 *)(*param_1 + uVar7 * 0x48) = param_3;
  lVar5 = *param_1;
  uVar4 = param_4[1];
  puVar6 = (undefined8 *)(lVar5 + 8 + uVar7 * 0x48);
  *puVar6 = *param_4;
  puVar6[1] = uVar4;
  uVar4 = param_4[3];
  puVar6 = (undefined8 *)(lVar5 + 0x18 + uVar7 * 0x48);
  *puVar6 = param_4[2];
  puVar6[1] = uVar4;
  uVar4 = param_4[5];
  puVar6 = (undefined8 *)(lVar5 + 0x28 + uVar7 * 0x48);
  *puVar6 = param_4[4];
  puVar6[1] = uVar4;
  *(undefined4 *)(lVar5 + 0x38 + uVar7 * 0x48) = *(undefined4 *)(param_4 + 6);
  puVar6 = (undefined8 *)FUN_18005db9c(0x34);
  if (puVar6 != (undefined8 *)0x0) {
    uVar4 = param_4[1];
    *puVar6 = *param_4;
    puVar6[1] = uVar4;
    uVar4 = param_4[3];
    puVar6[2] = param_4[2];
    puVar6[3] = uVar4;
    uVar4 = param_4[5];
    puVar6[4] = param_4[4];
    puVar6[5] = uVar4;
    *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_4 + 6);
  }
  *(undefined8 **)(*param_1 + 0x40 + uVar7 * 0x48) = puVar6;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

