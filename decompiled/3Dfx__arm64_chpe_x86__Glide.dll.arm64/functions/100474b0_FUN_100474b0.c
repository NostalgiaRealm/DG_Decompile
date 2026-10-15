/*
 * FUN_100474b0 at 100474b0
 * undefined FUN_100474b0(void)
 * Address ranges: 100474b0-10047533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100474b0(int param_1,undefined1 param_2,undefined1 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10046f18(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    FUN_10025958(*(int *)(param_1 + 0x3c));
    FUN_10046e60(param_1);
    FUN_10046cf8(param_1,param_2,param_3);
    (*(code *)PTR_FUN_1009d090)(*(int *)(*(int *)(param_1 + 0x3c) + 0x3180) + 0x4a0);
  }
  return;
}

