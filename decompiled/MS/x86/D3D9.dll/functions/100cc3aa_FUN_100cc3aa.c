/*
 * FUN_100cc3aa at 100cc3aa
 * undefined __fastcall FUN_100cc3aa(undefined4 * param_1)
 * Address ranges: 100cc3aa-100cc3de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100cc3aa(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    iVar1 = param_1[0x12] + -1;
    param_1[0x12] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_100cc794(param_1,'\0');
      FUN_100cc0e5((int)param_1);
      FUN_100cc2e2(param_1);
      FUN_100cfd6c(param_1);
    }
  }
  return;
}

