/*
 * FUN_1800080d8 at 1800080d8
 * undefined __fastcall FUN_1800080d8(longlong param_1, longlong param_2)
 * Address ranges: 1800080d8-180008129
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800080d8(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((((param_2 != *(longlong *)(param_1 + 0x30)) && (param_2 != *(longlong *)(param_1 + 0x38))) &&
      (param_2 != *(longlong *)(param_1 + 0x40))) &&
     ((param_2 != *(longlong *)(param_1 + 0x48) && (param_2 != *(longlong *)(param_1 + 0x50))))) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      return;
    }
    uVar2 = 0;
    while (*(longlong *)(param_2 + 0x30) != *(longlong *)(param_1 + 0x1338 + uVar2 * 8)) {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      if (0xf < uVar1) {
        return;
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  return;
}

