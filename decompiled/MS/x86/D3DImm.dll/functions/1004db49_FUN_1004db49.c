/*
 * FUN_1004db49 at 1004db49
 * undefined4 __stdcall FUN_1004db49(int param_1)
 * Address ranges: 1004db49-1004dbaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004db49(int param_1)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar4 = 0x88760835;
  if (*(char *)(iVar1 + 0x224) == '\0') {
    uVar3 = FUN_100067fe(iVar1);
    *(uint *)(iVar1 + 0x220) = uVar3;
    uVar4 = 0x8007000e;
    if (uVar3 != 0xffffffff) {
      *(undefined1 *)(iVar1 + 0x224) = 1;
      uVar4 = 0;
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

