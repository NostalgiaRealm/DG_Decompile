/*
 * FUN_18019f5f0 at 18019f5f0
 * undefined FUN_18019f5f0(void)
 * Address ranges: 18019f5f0-18019f633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019f5f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_180203408(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x110),0);
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  FUN_180198b40(param_1 + 0x60,1,1);
  return;
}

