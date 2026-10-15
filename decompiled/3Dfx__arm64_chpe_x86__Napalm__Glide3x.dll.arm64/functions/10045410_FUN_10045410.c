/*
 * FUN_10045410 at 10045410
 * undefined FUN_10045410(void)
 * Address ranges: 10045410-10045473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10045410(int param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0xa0);
  if (param_2 == '\0') {
    FUN_10077bb0(param_1,*puVar1);
    uVar2 = 0;
  }
  else {
    FUN_10077bb0(param_1,*puVar1 & 0xff | 0x310000);
    uVar2 = *puVar1 & 0xff | 0x1d0000;
  }
  *puVar1 = uVar2;
  return;
}

