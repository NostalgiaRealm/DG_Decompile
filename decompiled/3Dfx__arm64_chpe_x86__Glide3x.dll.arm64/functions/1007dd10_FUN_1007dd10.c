/*
 * FUN_1007dd10 at 1007dd10
 * undefined FUN_1007dd10(void)
 * Address ranges: 1007dd10-1007dd53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007dd10(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_100a0078)();
    (*(code *)PTR_FUN_100a0088)(uVar1,0,param_1);
  }
  return;
}

