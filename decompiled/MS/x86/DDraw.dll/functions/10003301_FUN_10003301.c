/*
 * FUN_10003301 at 10003301
 * undefined4 __fastcall FUN_10003301(uint param_1)
 * Address ranges: 10003301-10003313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10003301(uint param_1)

{
  uint in_EAX;
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 1) && (in_EAX = param_1 - 1, (param_1 & in_EAX) != 0)) {
    uVar1 = 0;
  }
  return CONCAT31((int3)(in_EAX >> 8),uVar1);
}

