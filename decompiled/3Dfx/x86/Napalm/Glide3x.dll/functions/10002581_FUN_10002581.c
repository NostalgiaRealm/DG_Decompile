/*
 * FUN_10002581 at 10002581
 * undefined4 __stdcall FUN_10002581(undefined4 param_1, int param_2)
 * Address ranges: 10002581-100025b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002581(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = FUN_10005411();
    FUN_100060ef(puVar1);
  }
  else if (param_2 == 1) {
    DAT_1005fa00 = param_1;
    DAT_1005fa08 = param_1;
  }
  return 1;
}

