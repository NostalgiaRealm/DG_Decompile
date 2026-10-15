/*
 * FUN_18020c678 at 18020c678
 * undefined FUN_18020c678(void)
 * Address ranges: 18020c678-18020c6e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020c678(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = param_2 & 0xffff;
  uVar2 = uVar3 + param_3;
  if (uVar3 < uVar2) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(param_2 >> 0x10) * 0x10 + 8);
    do {
      uVar4 = -1L << ((ulonglong)uVar3 & 0x3f);
      uVar1 = (uVar3 & 0xffffffc0) + 0x40;
      if (uVar2 < uVar1) {
        uVar4 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar2 & 0x3f) & uVar4;
      }
      *(ulonglong *)(lVar5 + (ulonglong)(uVar3 >> 6) * 8) =
           *(ulonglong *)(lVar5 + (ulonglong)(uVar3 >> 6) * 8) & (uVar4 ^ 0xffffffffffffffff);
      uVar3 = uVar1;
    } while (uVar1 < uVar2);
  }
  return;
}

