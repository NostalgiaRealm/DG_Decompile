/*
 * FUN_1002c695 at 1002c695
 * bool __fastcall FUN_1002c695(uint param_1)
 * Address ranges: 1002c695-1002c702
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1002c695(uint param_1)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = false;
  if (DAT_100deaa0 == 0) {
    piVar3 = (int *)(DAT_100deaa4 + 0x20);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    if ((iVar1 == 0) && (*(int *)(DAT_100deaa4 + 0x1c) != 0)) {
      LOCK();
      *(int *)(DAT_100deaa4 + 0x20) = *(int *)(DAT_100deaa4 + 0x20) + -1;
      UNLOCK();
    }
    else {
      uVar4 = 0;
      while( true ) {
        BVar2 = TryEnterCriticalSection(DAT_100dea98);
        bVar5 = BVar2 != 0;
        if (BVar2 != 0) break;
        if (param_1 <= uVar4) {
          return false;
        }
        Sleep(1);
        uVar4 = uVar4 + 1;
      }
      DAT_100deaa0 = DAT_100deaa0 + 1;
    }
  }
  return bVar5;
}

