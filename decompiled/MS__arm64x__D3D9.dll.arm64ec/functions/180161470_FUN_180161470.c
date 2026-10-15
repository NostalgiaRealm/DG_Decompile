/*
 * FUN_180161470 at 180161470
 * undefined FUN_180161470(void)
 * Address ranges: 180161470-18016152b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180161470(longlong param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar5 = *param_2;
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar3 = uVar6 + uVar7 >> 1;
      uVar4 = (ulonglong)uVar3;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar4 * 0x18);
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
     (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + uVar4 * 0x18), *puVar1 != uVar5)) {
    FUN_180161748();
  }
  else {
    *(undefined4 *)(puVar1 + 2) = *param_3;
  }
  return uVar4 * 0x18 + *(longlong *)(param_1 + 8) + 8;
}

