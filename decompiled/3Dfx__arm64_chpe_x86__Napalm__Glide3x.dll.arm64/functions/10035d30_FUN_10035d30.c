/*
 * FUN_10035d30 at 10035d30
 * undefined FUN_10035d30(void)
 * Address ranges: 10035d30-10035db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035d30(int param_1,undefined1 param_2,undefined1 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10035760(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    FUN_10014e08(*(int *)(param_1 + 0x1e8));
    FUN_100356a8(param_1);
    FUN_10035540(param_1,param_2,param_3);
    (*(code *)PTR_FUN_100a8090)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3680) + 0x4a0);
  }
  return;
}

