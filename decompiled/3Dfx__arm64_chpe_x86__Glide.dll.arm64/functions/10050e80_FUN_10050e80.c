/*
 * FUN_10050e80 at 10050e80
 * undefined FUN_10050e80(void)
 * Address ranges: 10050e80-10050ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050e80(int param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0xa0);
  if (param_2 == '\0') {
    FUN_1006ecf0(param_1,*puVar1);
    uVar2 = 0;
  }
  else {
    FUN_1006ecf0(param_1,*puVar1 & 0xff | 0x310000);
    uVar2 = *puVar1 & 0xff | 0x1d0000;
  }
  *puVar1 = uVar2;
  return;
}

