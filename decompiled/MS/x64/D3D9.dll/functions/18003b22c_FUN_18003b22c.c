/*
 * FUN_18003b22c at 18003b22c
 * undefined __fastcall FUN_18003b22c(longlong param_1, uint * param_2)
 * Address ranges: 18003b22c-18003b2b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b22c(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar4 = *param_2;
  uVar1 = *(uint *)(param_1 + 0xf75c);
  while (uVar8 = uVar1, uVar8 != 0) {
    uVar1 = uVar8 - 1;
    if ((*(uint *)(*(longlong *)(param_1 + 0xf750) + (ulonglong)uVar1 * 0x20) & 0x7fffffff) ==
        (uVar4 & 0x7fffffff)) {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xf750) + 0x18 + (ulonglong)uVar1 * 0x20)
                  + 0x10))();
      for (; uVar8 < *(uint *)(param_1 + 0xf75c); uVar8 = uVar8 + 1) {
        lVar5 = *(longlong *)(param_1 + 0xf750);
        lVar7 = (ulonglong)(uVar8 - 1) * 0x20;
        puVar2 = (undefined8 *)(lVar5 + (ulonglong)uVar8 * 0x20);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lVar5 + lVar7);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar2 = (undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar8 * 0x20);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lVar5 + 0x10 + lVar7);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
      }
      *(uint *)(param_1 + 0xf75c) = *(uint *)(param_1 + 0xf75c) - 1;
    }
  }
  return;
}

