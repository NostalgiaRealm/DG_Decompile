/*
 * FUN_10079620 at 10079620
 * undefined FUN_10079620(void)
 * Address ranges: 10079620-10079667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10079620(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x254) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x250) + uVar1 * 4) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x254));
  }
  return 0xffffffff;
}

