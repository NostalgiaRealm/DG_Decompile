/*
 * FUN_1003cb80 at 1003cb80
 * undefined FUN_1003cb80(void)
 * Address ranges: 1003cb80-1003cbbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003cb80(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 & 0xf0) == 0x80) {
    puVar1 = (undefined4 *)(param_1 + ((param_2 & 0xf) + 0x24) * 4);
    FUN_10072510(param_1,*puVar1);
    *puVar1 = 0;
  }
  return;
}

