/*
 * FUN_100631f0 at 100631f0
 * undefined FUN_100631f0(void)
 * Address ranges: 100631f0-1006326f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100631f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x1efc) != '\0') {
    FUN_10096840(auStack_30);
    uVar1 = 0;
    if (*(uint *)(param_1 + 0xa0) != 0) {
      do {
        FUN_100542f0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + uVar1 * 4),param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0xa0));
    }
    FUN_10096790(auStack_30);
  }
  return;
}

