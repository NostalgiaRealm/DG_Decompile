/*
 * FUN_100475e2 at 100475e2
 * undefined4 __thiscall FUN_100475e2(void * this, LPVOID param_1)
 * Address ranges: 100475e2-1004765d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100475e2(void *this,LPVOID param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x80070057;
  if (param_1 != (LPVOID)0x0) {
    iVar1 = *(int *)((int)this + 0x9cc);
    uVar3 = 0;
    if (*(LPVOID *)(iVar1 + 0x944) == param_1) {
      *(undefined4 *)(iVar1 + 0x944) = 0;
    }
    else if (*(LPVOID *)(iVar1 + 0x948) == param_1) {
      *(undefined4 *)(iVar1 + 0x948) = 0;
    }
    else if (*(LPVOID *)(iVar1 + 0x94c) == param_1) {
      *(undefined4 *)(iVar1 + 0x94c) = 0;
    }
    FUN_1005c76c(param_1);
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

