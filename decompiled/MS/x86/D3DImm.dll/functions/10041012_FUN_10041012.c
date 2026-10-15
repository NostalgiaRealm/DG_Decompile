/*
 * FUN_10041012 at 10041012
 * undefined4 __fastcall FUN_10041012(int param_1)
 * Address ranges: 10041012-10041086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10041012(int param_1)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x887602f8;
  if (*(char *)(param_1 + 0x931) == '\0') {
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
      uVar3 = 0x887601c2;
      if (cVar1 == '\0') goto LAB_10041076;
    }
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
      uVar3 = 0x887601c2;
      if (cVar1 == '\0') goto LAB_10041076;
    }
    *(undefined1 *)(param_1 + 0x931) = 1;
    uVar3 = 0;
  }
LAB_10041076:
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

