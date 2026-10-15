/*
 * FUN_10132260 at 10132260
 * undefined FUN_10132260(void)
 * Address ranges: 10132260-101322a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10132260(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_1016c0a8)();
    (*(code *)PTR_FUN_1016c0b8)(uVar1,0,param_1);
  }
  return;
}

