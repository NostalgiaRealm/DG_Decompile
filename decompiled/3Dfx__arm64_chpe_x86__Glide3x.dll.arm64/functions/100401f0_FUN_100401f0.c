/*
 * FUN_100401f0 at 100401f0
 * undefined FUN_100401f0(void)
 * Address ranges: 100401f0-10040253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100401f0(int param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0xa0);
  if (param_2 == '\0') {
    FUN_10072510(param_1,*puVar1);
    uVar2 = 0;
  }
  else {
    FUN_10072510(param_1,*puVar1 & 0xff | 0x310000);
    uVar2 = *puVar1 & 0xff | 0x1d0000;
  }
  *puVar1 = uVar2;
  return;
}

