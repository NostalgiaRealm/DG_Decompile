/*
 * FUN_10106560 at 10106560
 * undefined FUN_10106560(void)
 * Address ranges: 10106560-101065a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10106560(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 != 0) {
    FUN_1010d6f0(iVar1);
    *(int *)(param_1 + 0x3a8) = 0;
    FUN_10106d48(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

