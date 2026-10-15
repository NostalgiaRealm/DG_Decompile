/*
 * FUN_1800ae4bc at 1800ae4bc
 * int __fastcall FUN_1800ae4bc(longlong param_1)
 * Address ranges: 1800ae4bc-1800ae534
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ae4bc(longlong param_1)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)(param_1 + 0x10) + iVar2 + -1 == 0) {
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
    puVar4 = (undefined8 *)(param_1 + -0xa0);
    FUN_1800adc18((longlong)puVar4);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1800ad7b8(puVar4);
      FUN_1800fbcf0(puVar4);
    }
    LeaveCriticalSection(DAT_1801123a8);
  }
  return iVar2 + -1;
}

