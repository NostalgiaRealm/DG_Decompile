/*
 * FUN_10050a00 at 10050a00
 * undefined FUN_10050a00(void)
 * Address ranges: 10050a00-10050a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050a00(int param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0xa0);
  if (param_2 == '\0') {
    FUN_1006e870(param_1,*puVar1);
    uVar2 = 0;
  }
  else {
    FUN_1006e870(param_1,*puVar1 & 0xff | 0x310000);
    uVar2 = *puVar1 & 0xff | 0x1d0000;
  }
  *puVar1 = uVar2;
  return;
}

