/*
 * FUN_100a9adb at 100a9adb
 * undefined __fastcall FUN_100a9adb(undefined4 * param_1)
 * Address ranges: 100a9adb-100a9b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100a9adb(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    iVar1 = param_1[0x12] + -1;
    param_1[0x12] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_100a9ec5(param_1,'\0');
      FUN_100a9816((int)param_1);
      FUN_100a9a13(param_1);
      FUN_100ad48c(param_1);
    }
  }
  return;
}

