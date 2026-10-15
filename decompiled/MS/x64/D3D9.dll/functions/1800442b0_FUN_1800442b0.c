/*
 * FUN_1800442b0 at 1800442b0
 * undefined __fastcall FUN_1800442b0(longlong param_1, ulonglong param_2)
 * Address ranges: 1800442b0-180044339
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800442b0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar6 = uVar1;
    do {
      uVar4 = uVar6 + uVar5 >> 1;
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar4 * 0x18);
      uVar3 = uVar4;
      if (uVar2 <= param_2) {
        if (param_2 <= uVar2) break;
        uVar5 = uVar4 + 1;
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar5);
    if (uVar4 != uVar1) {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar4 * 0x18) == param_2) {
        *(undefined1 *)(*(longlong *)(param_1 + 0xfa08) + 0x17 + (ulonglong)uVar4 * 0x18) = 1;
        return;
      }
    }
  }
  DAT_00000007 = 1;
  return;
}

