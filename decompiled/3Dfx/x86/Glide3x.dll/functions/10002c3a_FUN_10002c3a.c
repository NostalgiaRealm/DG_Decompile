/*
 * FUN_10002c3a at 10002c3a
 * undefined __fastcall FUN_10002c3a(undefined4 * param_1)
 * Address ranges: 10002c3a-10002c6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10002c3a(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    iVar1 = param_1[0x12] + -1;
    param_1[0x12] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_10002d9a(param_1,'\0');
      FUN_10002975((int)param_1);
      FUN_10002b72(param_1);
      FUN_10052276(param_1);
    }
  }
  return;
}

