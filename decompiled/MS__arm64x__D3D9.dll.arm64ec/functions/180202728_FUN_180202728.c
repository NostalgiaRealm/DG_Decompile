/*
 * FUN_180202728 at 180202728
 * undefined FUN_180202728(void)
 * Address ranges: 180202728-18020276b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180202728(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  thunk_FUN_1802236f8(param_1 + 0x620);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x618);
    *(longlong *)(param_1 + 0x618) = param_3;
    bVar1 = lVar2 != param_3;
  }
  return bVar1;
}

