/*
 * FUN_1400034a8 at 1400034a8
 * undefined1 __fastcall FUN_1400034a8(longlong param_1, int param_2)
 * Address ranges: 1400034a8-1400034d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1400034a8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(param_2 - 0x415U);
  if ((param_2 - 0x415U != 0) && (uVar2 = (ulonglong)(param_2 - 0x416U), param_2 - 0x416U != 0)) {
    uVar1 = param_2 - 0x417;
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar1 != 1)) {
      return 1;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),CONCAT71((int7)(uVar2 >> 8),1));
  return 1;
}

