/*
 * FUN_1800312b8 at 1800312b8
 * bool __fastcall FUN_1800312b8(uint param_1)
 * Address ranges: 1800312b8-180031340
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800312b8(uint param_1)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = false;
  if (DAT_180111f60 == 0) {
    LOCK();
    piVar1 = (int *)(DAT_1801123a8 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((iVar2 == 0) && (*(int *)(DAT_1801123a8 + 0x2c) != 0)) {
      LOCK();
      *(int *)(DAT_1801123a8 + 0x30) = *(int *)(DAT_1801123a8 + 0x30) + -1;
      UNLOCK();
    }
    else {
      uVar4 = 0;
      while( true ) {
        BVar3 = TryEnterCriticalSection(DAT_180111f68);
        bVar5 = BVar3 != 0;
        if (BVar3 != 0) break;
        if (param_1 <= uVar4) {
          return false;
        }
        Sleep(1);
        uVar4 = uVar4 + 1;
      }
      DAT_180111f60 = DAT_180111f60 + 1;
    }
  }
  return bVar5;
}

