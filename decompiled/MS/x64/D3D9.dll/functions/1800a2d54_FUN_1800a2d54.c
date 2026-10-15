/*
 * FUN_1800a2d54 at 1800a2d54
 * undefined __fastcall FUN_1800a2d54(longlong param_1)
 * Address ranges: 1800a2d54-1800a2d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2d54(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1800e05b4(*(longlong **)(param_1 + 0x50),*(longlong *)(param_1 + 0x130),0);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  FUN_18009ac8c(param_1 + 0x60,1,1);
  return;
}

