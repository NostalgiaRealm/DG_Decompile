/*
 * FUN_10041087 at 10041087
 * undefined4 __fastcall FUN_10041087(int param_1)
 * Address ranges: 10041087-100410b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10041087(int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = FUN_10008a86(param_1);
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

