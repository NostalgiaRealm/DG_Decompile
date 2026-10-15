/*
 * FUN_1004e0ef at 1004e0ef
 * undefined4 __stdcall FUN_1004e0ef(int param_1)
 * Address ranges: 1004e0ef-1004e11a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e0ef(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x887602cb;
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(iVar1 + 0x99) != '\0') {
    LOCK();
    *(int *)(iVar1 + 0x94) = *(int *)(iVar1 + 0x94) + -1;
    UNLOCK();
    uVar2 = 0;
    *(undefined1 *)(iVar1 + 0x99) = 0;
  }
  return uVar2;
}

