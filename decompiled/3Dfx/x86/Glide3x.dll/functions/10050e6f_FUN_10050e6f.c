/*
 * FUN_10050e6f at 10050e6f
 * undefined4 __stdcall FUN_10050e6f(int * param_1, byte * param_2, undefined4 * param_3)
 * Address ranges: 10050e6f-10050ec1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10050e6f(int *param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_10052db2(param_2,&DAT_10054370,0x10);
  if ((iVar1 != 0) && (iVar1 = FUN_10052db2(param_2,&DAT_10054260,0x10), iVar1 != 0)) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}

