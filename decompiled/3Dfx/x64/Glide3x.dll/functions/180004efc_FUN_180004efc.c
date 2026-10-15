/*
 * FUN_180004efc at 180004efc
 * longlong * __fastcall FUN_180004efc(longlong param_1, longlong param_2)
 * Address ranges: 180004efc-180004f29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180004efc(longlong param_1,longlong param_2)

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

