/*
 * FUN_1800c4730 at 1800c4730
 * undefined FUN_1800c4730(void)
 * Address ranges: 1800c4730-1800c478b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800c4730(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1800015a0(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    if (uVar1 == 1) {
      FUN_1800015a0(*(longlong *)(param_1 + 0x38) + 0x6844);
    }
    uVar2 = (ulonglong)uVar1;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
  }
  return uVar2;
}

