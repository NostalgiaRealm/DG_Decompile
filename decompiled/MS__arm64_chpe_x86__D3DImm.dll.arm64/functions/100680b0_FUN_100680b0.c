/*
 * FUN_100680b0 at 100680b0
 * undefined FUN_100680b0(void)
 * Address ranges: 100680b0-10068123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100680b0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x9c) != 0) {
    uVar2 = 0;
    do {
      if ((*(char *)(*(int *)(param_1 + 0x98) + 5 + uVar2 * 8) != '\0') &&
         (piVar1 = (int *)(*(int *)(param_1 + 0x98) + uVar2 * 8),
         *(int *)(*(int *)(param_1 + 0x8c) + *piVar1 * 8 + 4) == param_2)) {
        *(undefined1 *)(piVar1 + 1) = 1;
        *(undefined1 *)(param_1 + 0xd3) = 1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x9c));
  }
  return;
}

