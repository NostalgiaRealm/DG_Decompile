/*
 * FUN_180051988 at 180051988
 * undefined FUN_180051988(void)
 * Address ranges: 180051988-180051a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180051988(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar5 = *param_2;
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar3 = uVar6 + uVar7 >> 1;
      uVar4 = (ulonglong)uVar3;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar4 * 0x38);
      if (uVar8 <= uVar5) {
        if (uVar5 <= uVar8) break;
        uVar7 = uVar3 + 1;
        uVar4 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
  }
  if (((uint)uVar4 == uVar2) ||
     (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + uVar4 * 0x38), *puVar1 != uVar5)) {
    FUN_180051b98();
  }
  else {
    uVar9 = *param_3;
    uVar8 = param_3[3];
    uVar5 = param_3[2];
    puVar1[3] = param_3[1];
    puVar1[2] = uVar9;
    puVar1[5] = uVar8;
    puVar1[4] = uVar5;
    puVar1[6] = param_3[4];
  }
  return uVar4 * 0x38 + *(longlong *)(param_1 + 8) + 8;
}

