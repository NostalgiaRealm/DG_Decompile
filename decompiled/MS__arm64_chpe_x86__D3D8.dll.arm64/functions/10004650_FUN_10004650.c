/*
 * FUN_10004650 at 10004650
 * undefined FUN_10004650(void)
 * Address ranges: 10004650-10004683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_10004650(int param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 2) {
    puVar1 = &DAT_10135180;
  }
  else {
    puVar1 = &DAT_101352c0 + *(int *)(param_1 + 8) * 0x134;
  }
  return puVar1;
}

