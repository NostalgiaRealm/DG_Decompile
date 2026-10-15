/*
 * FUN_1800050b4 at 1800050b4
 * longlong * __fastcall FUN_1800050b4(longlong param_1, longlong param_2)
 * Address ranges: 1800050b4-1800050e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800050b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x138);
  if (*(uint *)(param_1 + 0x138) != 0) {
    do {
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulonglong)uVar2;
      plVar1 = (longlong *)(uVar3 * 0x60 + *(longlong *)(param_1 + 0x130));
      if (*plVar1 == param_2) {
        return plVar1;
      }
    } while (uVar2 != 0);
  }
  return (longlong *)0x0;
}

