/*
 * FUN_1801daef8 at 1801daef8
 * undefined FUN_1801daef8(void)
 * Address ranges: 1801daef8-1801daf33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801daef8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + -0x178) != 0) {
    lVar1 = *(longlong *)(param_1 + -0x178) + 0x78;
  }
  *param_2 = lVar1;
  if (*(longlong *)(param_1 + -0x178) != 0) {
    FUN_1801dc388(*(longlong *)(param_1 + -0x178) + 0x78);
  }
  return 0;
}

