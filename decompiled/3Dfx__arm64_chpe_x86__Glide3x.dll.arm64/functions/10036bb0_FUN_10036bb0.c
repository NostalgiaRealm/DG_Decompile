/*
 * FUN_10036bb0 at 10036bb0
 * undefined FUN_10036bb0(void)
 * Address ranges: 10036bb0-10036c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036bb0(int param_1,undefined1 param_2,undefined1 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10036600(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    FUN_10014978(*(int *)(param_1 + 0x1e8));
    FUN_10036548(param_1);
    FUN_100363e0(param_1,param_2,param_3);
    (*(code *)PTR_FUN_100a0090)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3300) + 0x4a0);
  }
  return;
}

