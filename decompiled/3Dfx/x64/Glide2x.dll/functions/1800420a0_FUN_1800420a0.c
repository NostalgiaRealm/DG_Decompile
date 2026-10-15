/*
 * FUN_1800420a0 at 1800420a0
 * undefined __fastcall FUN_1800420a0(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 1800420a0-1800421b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800420a0(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar4 = ZEXT816(0x48) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar5 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_18005d6fc(uVar5);
    if (lVar6 != 0) {
      uVar8 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar3 = *param_1;
          uVar7 = (int)uVar8 + 1;
          puVar1 = (undefined8 *)(lVar3 + uVar8 * 0x48);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + uVar8 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar8 * 0x48);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x10 + uVar8 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x20 + uVar8 * 0x48);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x20 + uVar8 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar3 + 0x30 + uVar8 * 0x48);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x30 + uVar8 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x40 + uVar8 * 0x48) =
               *(undefined8 *)(lVar3 + 0x40 + uVar8 * 0x48);
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(param_1 + 1));
      }
      FUN_18005d720((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar6;
    }
  }
  uVar7 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)uVar7;
  while (param_2 < uVar7) {
    lVar6 = *param_1;
    uVar7 = (int)uVar8 - 1;
    uVar9 = (ulonglong)uVar7;
    puVar1 = (undefined8 *)(lVar6 + uVar9 * 0x48);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar6 + uVar8 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar9 * 0x48);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar6 + 0x10 + uVar8 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(lVar6 + 0x20 + uVar9 * 0x48);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar6 + 0x20 + uVar8 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar1 = (undefined8 *)(lVar6 + 0x30 + uVar9 * 0x48);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(lVar6 + 0x30 + uVar8 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    *(undefined8 *)(lVar6 + 0x40 + uVar8 * 0x48) = *(undefined8 *)(lVar6 + 0x40 + uVar9 * 0x48);
    uVar8 = uVar9;
  }
  FUN_1800421bc(param_1,(ulonglong)param_2,param_3,param_4);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

