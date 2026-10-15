/*
 * FUN_1006572b at 1006572b
 * undefined __fastcall FUN_1006572b(int param_1)
 * Address ranges: 1006572b-1006578a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1006572b(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x151) != '\0') {
    FUN_10061cbb((void *)(param_1 + 0xe8),*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
    FUN_10061cbb((void *)(param_1 + 0x108),*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0x20);
    }
    FUN_10061cbb((void *)(param_1 + 0x128),uVar1,*(uint *)(param_1 + 0x24));
    piVar2 = (int *)(*(int *)(param_1 + 0x40) + 0x49c);
    LOCK();
    if (param_1 == *piVar2) {
      *piVar2 = 0;
    }
    UNLOCK();
  }
  FUN_10062c04(param_1);
  return;
}

