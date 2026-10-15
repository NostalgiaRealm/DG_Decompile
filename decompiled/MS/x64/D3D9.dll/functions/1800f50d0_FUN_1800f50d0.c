/*
 * FUN_1800f50d0 at 1800f50d0
 * undefined __fastcall FUN_1800f50d0(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 1800f50d0-1800f5131
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f50d0(longlong param_1,ulonglong param_2,longlong param_3)

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
    if (*(longlong *)(*(longlong *)(lVar1 + 0x2308) + 0x10 + uVar3 * 0x28) == param_3) {
      FUN_1800e795c((longlong *)(lVar1 + 0x2308),uVar2);
    }
  }
  return;
}

