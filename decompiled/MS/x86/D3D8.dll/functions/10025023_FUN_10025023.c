/*
 * FUN_10025023 at 10025023
 * bool __fastcall FUN_10025023(uint param_1)
 * Address ranges: 10025023-10025090
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10025023(uint param_1)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = false;
  if (DAT_100ba2e0 == 0) {
    piVar3 = (int *)(DAT_100ba2e4 + 0x20);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    if ((iVar1 == 0) && (*(int *)(DAT_100ba2e4 + 0x1c) != 0)) {
      LOCK();
      *(int *)(DAT_100ba2e4 + 0x20) = *(int *)(DAT_100ba2e4 + 0x20) + -1;
      UNLOCK();
    }
    else {
      uVar4 = 0;
      while( true ) {
        BVar2 = TryEnterCriticalSection(DAT_100ba2d8);
        bVar5 = BVar2 != 0;
        if (BVar2 != 0) break;
        if (param_1 <= uVar4) {
          return false;
        }
        Sleep(1);
        uVar4 = uVar4 + 1;
      }
      DAT_100ba2e0 = DAT_100ba2e0 + 1;
    }
  }
  return bVar5;
}

