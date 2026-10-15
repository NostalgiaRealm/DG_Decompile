/*
 * FUN_1004d357 at 1004d357
 * undefined4 __stdcall FUN_1004d357(undefined4 param_1, void * param_2, undefined4 * param_3)
 * Address ranges: 1004d357-1004d39e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004d357(undefined4 param_1,void *param_2,undefined4 *param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if ((param_2 != (void *)0x0) && (param_3 != (undefined4 *)0x0)) {
    FUN_1001385b(param_2,param_3);
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

