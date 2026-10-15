/*
 * FUN_18012d400 at 18012d400
 * undefined FUN_18012d400(void)
 * Address ranges: 18012d400-18012d453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012d400(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_18024d960;
  *param_1 = &PTR_FUN_18022a818;
  DAT_18024d958 = param_1;
  if (lVar1 != 0) {
    thunk_FUN_180223f18();
    DAT_18024d960 = 0;
  }
  if (param_1[7] != 0) {
    FUN_1802229d8(param_1[7],0x10);
  }
  return;
}

