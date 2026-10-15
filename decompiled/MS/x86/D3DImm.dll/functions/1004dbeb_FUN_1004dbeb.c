/*
 * FUN_1004dbeb at 1004dbeb
 * int __stdcall FUN_1004dbeb(int param_1, undefined4 param_2)
 * Address ranges: 1004dbeb-1004dc52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004dbeb(int param_1,undefined4 param_2)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)**(undefined4 **)(*(int *)(param_1 + 4) + 0xa70))(param_2);
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  iVar3 = -0x7ff8ffa9;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x38))();
    iVar3 = (-(uint)((*(uint *)(iVar3 + 0x6c) & 0x20010) != 0) & 0x7ff8ffa9) + 0x80070057;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar3;
}

