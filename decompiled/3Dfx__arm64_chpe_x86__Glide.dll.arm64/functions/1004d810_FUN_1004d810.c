/*
 * FUN_1004d810 at 1004d810
 * undefined FUN_1004d810(void)
 * Address ranges: 1004d810-1004d84f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d810(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 & 0xf0) == 0x80) {
    puVar1 = (undefined4 *)(param_1 + ((param_2 & 0xf) + 0x24) * 4);
    FUN_1006ecf0(param_1,*puVar1);
    *puVar1 = 0;
  }
  return;
}

