/*
 * FUN_10004949 at 10004949
 * bool __fastcall FUN_10004949(uint param_1)
 * Address ranges: 10004949-10004988
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10004949(uint param_1)

{
  BOOL BVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = false;
  if (DAT_1006c240 == 0) {
    uVar3 = 0;
    while( true ) {
      BVar1 = TryEnterCriticalSection(DAT_1006c230);
      bVar2 = BVar1 != 0;
      if (BVar1 != 0) break;
      if (param_1 <= uVar3) {
        return false;
      }
      Sleep(1);
      uVar3 = uVar3 + 1;
    }
    DAT_1006c240 = DAT_1006c240 + 1;
  }
  return bVar2;
}

