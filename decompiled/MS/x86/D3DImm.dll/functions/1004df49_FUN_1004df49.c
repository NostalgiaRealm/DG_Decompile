/*
 * FUN_1004df49 at 1004df49
 * undefined4 __stdcall FUN_1004df49(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1004df49-1004df9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004df49(int param_1,uint param_2,undefined4 *param_3)

{
  void *this;
  BOOL BVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  this = *(void **)(param_1 + 4);
  if ((param_2 < 6) && (param_3 != (undefined4 *)0x0)) {
    BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar1 == 0) {
      FUN_1003c603();
    }
    FUN_10007f89(this,param_2,param_3);
    uVar2 = 0;
    LeaveCriticalSection(DAT_1006bbd0);
  }
  return uVar2;
}

