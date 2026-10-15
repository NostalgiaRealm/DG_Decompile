/*
 * FUN_10002ea6 at 10002ea6
 * undefined __fastcall FUN_10002ea6(undefined4 * param_1)
 * Address ranges: 10002ea6-10002eda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10002ea6(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    iVar1 = param_1[0x12] + -1;
    param_1[0x12] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_10003006(param_1,'\0');
      FUN_10002be1((int)param_1);
      FUN_10002dde(param_1);
      FUN_1004f626(param_1);
    }
  }
  return;
}

