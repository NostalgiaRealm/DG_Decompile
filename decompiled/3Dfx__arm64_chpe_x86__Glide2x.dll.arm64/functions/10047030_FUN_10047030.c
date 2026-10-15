/*
 * FUN_10047030 at 10047030
 * undefined FUN_10047030(void)
 * Address ranges: 10047030-100470b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047030(int param_1,undefined1 param_2,undefined1 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10046a98(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    FUN_100254d8(*(int *)(param_1 + 0x3c));
    FUN_100469e0(param_1);
    FUN_10046878(param_1,param_2,param_3);
    (*(code *)PTR_FUN_1009d090)(*(int *)(*(int *)(param_1 + 0x3c) + 0x3180) + 0x4a0);
  }
  return;
}

