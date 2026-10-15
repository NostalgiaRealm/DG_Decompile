/*
 * FUN_10072130 at 10072130
 * undefined FUN_10072130(void)
 * Address ranges: 10072130-10072207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10072130(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  uVar1 = *param_2;
  uVar9 = 0xffffffff;
  (*(code *)PTR_FUN_1016c074)(param_1 + 0x90);
  uVar2 = *(uint *)(param_1 + 0x80);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar7 = uVar5 + uVar6 >> 1;
      uVar8 = *(ulonglong *)(*(int *)(param_1 + 0x7c) + uVar7 * 0x298);
      uVar4 = uVar7;
      if (uVar8 <= uVar1) {
        if (uVar1 <= uVar8) break;
        uVar6 = uVar7 + 1;
        uVar7 = uVar6;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar6);
    if (((uVar7 != uVar2) &&
        (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x7c) + uVar7 * 0x298),
        *puVar3 == (ulonglong)uVar1)) && (puVar3 != (ulonglong *)0xfffffff4)) {
      uVar9 = *(undefined4 *)((int)puVar3 + 0x254);
    }
  }
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x90);
  return uVar9;
}

