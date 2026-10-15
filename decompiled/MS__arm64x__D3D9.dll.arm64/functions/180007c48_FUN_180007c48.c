/*
 * FUN_180007c48 at 180007c48
 * undefined FUN_180007c48(void)
 * Address ranges: 180007c48-180007cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180007c48(longlong param_1,uint *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar8 = 0;
    uVar6 = uVar2;
    do {
      uVar4 = uVar6 + uVar8 >> 1;
      uVar5 = (ulonglong)uVar4;
      uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar5 * 0x78);
      if (uVar7 <= uVar3) {
        if (uVar3 <= uVar7) break;
        uVar8 = uVar4 + 1;
        uVar5 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar6 != uVar8);
    if ((uint)uVar5 != uVar2) {
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + uVar5 * 0x78);
      if (*puVar1 == (ulonglong)uVar3) {
        return (longlong)puVar1 + 0xc;
      }
      return 0;
    }
  }
  return 0;
}

