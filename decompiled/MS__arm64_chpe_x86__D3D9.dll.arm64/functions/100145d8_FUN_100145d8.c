/*
 * FUN_100145d8 at 100145d8
 * undefined FUN_100145d8(void)
 * Address ranges: 100145d8-10014613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100145d8(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(uint *)(param_1 + 0x18 + uVar1 * 4) == (param_2 & 0xffff)) {
      *(undefined4 *)(param_1 + uVar1 * 4 + 0x18) = 0xffffffff;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

