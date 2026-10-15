/*
 * FUN_1007a420 at 1007a420
 * undefined FUN_1007a420(void)
 * Address ranges: 1007a420-1007a463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a420(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_1009d078)();
    (*(code *)PTR_FUN_1009d088)(uVar1,0,param_1);
  }
  return;
}

