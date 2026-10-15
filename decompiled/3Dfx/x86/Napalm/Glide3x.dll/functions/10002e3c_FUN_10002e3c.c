/*
 * FUN_10002e3c at 10002e3c
 * undefined __fastcall FUN_10002e3c(undefined4 * param_1)
 * Address ranges: 10002e3c-10002e70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10002e3c(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    iVar1 = param_1[0x12] + -1;
    param_1[0x12] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_10002f9c(param_1,'\0');
      FUN_10002b77((int)param_1);
      FUN_10002d74(param_1);
      FUN_10055686(param_1);
    }
  }
  return;
}

