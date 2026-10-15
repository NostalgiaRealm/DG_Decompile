/*
 * FUN_1004d390 at 1004d390
 * undefined FUN_1004d390(void)
 * Address ranges: 1004d390-1004d3cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d390(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 & 0xf0) == 0x80) {
    puVar1 = (undefined4 *)(param_1 + ((param_2 & 0xf) + 0x24) * 4);
    FUN_1006e870(param_1,*puVar1);
    *puVar1 = 0;
  }
  return;
}

