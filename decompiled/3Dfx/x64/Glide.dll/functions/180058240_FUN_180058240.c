/*
 * FUN_180058240 at 180058240
 * undefined __fastcall FUN_180058240(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 180058240-1800582a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058240(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = (param_2 & 0xffffffff) * 0x1ac0;
  uVar3 = (ulonglong)*(uint *)(lVar1 + 0x2314 + *(longlong *)(param_1 + 8));
  lVar1 = lVar1 + *(longlong *)(param_1 + 8);
  while ((int)uVar3 != 0) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
    if (*(longlong *)(*(longlong *)(lVar1 + 0x2308) + 8 + uVar3 * 0x28) == param_3) {
      FUN_180042108((longlong *)(lVar1 + 0x2308),uVar2);
    }
  }
  return;
}

