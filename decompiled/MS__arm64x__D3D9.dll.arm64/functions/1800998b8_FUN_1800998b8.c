/*
 * FUN_1800998b8 at 1800998b8
 * undefined FUN_1800998b8(void)
 * Address ranges: 1800998b8-1800998fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800998b8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1800e6028(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x130),0);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  FUN_180091218(param_1 + 0x60,1,1);
  return;
}

