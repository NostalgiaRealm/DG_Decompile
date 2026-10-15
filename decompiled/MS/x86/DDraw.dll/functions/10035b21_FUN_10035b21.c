/*
 * FUN_10035b21 at 10035b21
 * undefined4 __stdcall FUN_10035b21(int param_1)
 * Address ranges: 10035b21-10035b3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10035b21(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 8) != '\0') {
    uVar1 = 0x887601c2;
  }
  return uVar1;
}

