/*
 * FUN_1000bd98 at 1000bd98
 * undefined __fastcall FUN_1000bd98(int param_1)
 * Address ranges: 1000bd98-1000be02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000bd98(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0xd8) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0x20);
    }
    FUN_1000ae4f((void *)(param_1 + 0xac),uVar1,*(uint *)(param_1 + 0x24));
    FUN_1000ae4f((void *)(param_1 + 0x48),*(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x24));
    FUN_1000ae4f((void *)(param_1 + 0x68),*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
    thunk_FUN_10060be1(*(LPVOID *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    piVar2 = (int *)(*(int *)(param_1 + 0x40) + 0x49c);
    *(undefined1 *)(param_1 + 0xd8) = 0;
    LOCK();
    if (param_1 == *piVar2) {
      *piVar2 = 0;
    }
    UNLOCK();
  }
  return;
}

