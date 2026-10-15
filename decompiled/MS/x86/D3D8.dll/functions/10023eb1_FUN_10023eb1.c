/*
 * FUN_10023eb1 at 10023eb1
 * bool __fastcall FUN_10023eb1(int param_1)
 * Address ranges: 10023eb1-10023edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10023eb1(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 8) == 0)) {
    piVar1 = (int *)(param_1 + 0x1c);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar3 = iVar2 != 0;
    if (bVar3) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
    }
  }
  return bVar3;
}

