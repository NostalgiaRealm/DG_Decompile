/*
 * FUN_10052590 at 10052590
 * undefined FUN_10052590(void)
 * Address ranges: 10052590-100525db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052590(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == (int *)0x0) || (*param_2 != 0x6c)) {
    uVar1 = FUN_1003a710(*(undefined4 *)(param_1 + 4),param_2);
  }
  else {
    uVar1 = FUN_10051498((undefined4 *)(param_1 + 4),param_2);
  }
  return uVar1;
}

