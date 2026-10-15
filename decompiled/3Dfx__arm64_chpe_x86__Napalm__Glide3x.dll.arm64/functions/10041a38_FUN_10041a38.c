/*
 * FUN_10041a38 at 10041a38
 * undefined FUN_10041a38(void)
 * Address ranges: 10041a38-10041a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041a38(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 & 0xf0) == 0x80) {
    puVar1 = (undefined4 *)(param_1 + ((param_2 & 0xf) + 0x24) * 4);
    FUN_10077bb0(param_1,*puVar1);
    *puVar1 = 0;
  }
  return;
}

