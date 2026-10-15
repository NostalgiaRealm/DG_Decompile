/*
 * FUN_1801b0ce8 at 1801b0ce8
 * undefined FUN_1801b0ce8(void)
 * Address ranges: 1801b0ce8-1801b0d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b0ce8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_180203408(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x130),0);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  FUN_1801a7d98(param_1 + 0x60,1,1);
  return;
}

