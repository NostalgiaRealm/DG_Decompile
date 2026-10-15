/*
 * FUN_18001b300 at 18001b300
 * undefined __fastcall FUN_18001b300(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 18001b300-18001b43e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b300(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar2 = ZEXT816(0x40) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar3 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar4 = thunk_FUN_18005db9c(uVar3);
    if (lVar4 != 0) {
      uVar9 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar5 = *param_1;
          uVar7 = (ulonglong)uVar9;
          uVar9 = uVar9 + 1;
          lVar8 = uVar7 * 0x40;
          uVar3 = ((undefined8 *)(lVar5 + lVar8))[1];
          *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar5 + lVar8);
          ((undefined8 *)(lVar4 + lVar8))[1] = uVar3;
          puVar6 = (undefined8 *)(lVar5 + 0x10 + lVar8);
          uVar3 = puVar6[1];
          puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar8);
          *puVar1 = *puVar6;
          puVar1[1] = uVar3;
          puVar6 = (undefined8 *)(lVar5 + 0x20 + lVar8);
          uVar3 = puVar6[1];
          puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar8);
          *puVar1 = *puVar6;
          puVar1[1] = uVar3;
          puVar6 = (undefined8 *)(lVar5 + 0x30 + lVar8);
          uVar3 = puVar6[1];
          puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar8);
          *puVar1 = *puVar6;
          puVar1[1] = uVar3;
        } while (uVar9 < *(uint *)(param_1 + 1));
      }
      FUN_18005dbc0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar4;
    }
  }
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  while (param_2 < uVar9) {
    lVar4 = *param_1;
    lVar8 = (ulonglong)uVar9 * 0x40;
    lVar5 = (ulonglong)(uVar9 - 1) * 0x40;
    uVar3 = ((undefined8 *)(lVar4 + lVar5))[1];
    *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar4 + lVar5);
    ((undefined8 *)(lVar4 + lVar8))[1] = uVar3;
    puVar6 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    uVar3 = puVar6[1];
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar8);
    *puVar1 = *puVar6;
    puVar1[1] = uVar3;
    puVar6 = (undefined8 *)(lVar4 + 0x20 + lVar5);
    uVar3 = puVar6[1];
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar8);
    *puVar1 = *puVar6;
    puVar1[1] = uVar3;
    puVar6 = (undefined8 *)(lVar4 + 0x30 + lVar5);
    uVar3 = puVar6[1];
    puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar8);
    *puVar1 = *puVar6;
    puVar1[1] = uVar3;
    uVar9 = uVar9 - 1;
  }
  lVar5 = (ulonglong)param_2 * 0x40;
  *(undefined8 *)(lVar5 + *param_1) = param_3;
  uVar3 = param_4[1];
  lVar4 = *param_1;
  puVar6 = (undefined8 *)(lVar5 + 8 + lVar4);
  *puVar6 = *param_4;
  puVar6[1] = uVar3;
  uVar3 = param_4[3];
  puVar6 = (undefined8 *)(lVar5 + 0x18 + lVar4);
  *puVar6 = param_4[2];
  puVar6[1] = uVar3;
  uVar3 = *(undefined8 *)((longlong)param_4 + 0x24);
  puVar6 = (undefined8 *)(lVar5 + 0x24 + lVar4);
  *puVar6 = *(undefined8 *)((longlong)param_4 + 0x1c);
  puVar6[1] = uVar3;
  puVar6 = (undefined8 *)FUN_18005db9c(0x2c);
  if (puVar6 != (undefined8 *)0x0) {
    uVar3 = param_4[1];
    *puVar6 = *param_4;
    puVar6[1] = uVar3;
    uVar3 = param_4[3];
    puVar6[2] = param_4[2];
    puVar6[3] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_4 + 0x24);
    *(undefined8 *)((longlong)puVar6 + 0x1c) = *(undefined8 *)((longlong)param_4 + 0x1c);
    *(undefined8 *)((longlong)puVar6 + 0x24) = uVar3;
  }
  *(undefined8 **)(lVar5 + 0x38 + *param_1) = puVar6;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

