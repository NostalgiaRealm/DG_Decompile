/*
 * FUN_1002994f at 1002994f
 * undefined __fastcall FUN_1002994f(int param_1, char param_2)
 * Address ranges: 1002994f-10029988
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002994f(int param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    FUN_1004dabf(param_1,*(uint *)(param_1 + 0xa0));
    uVar1 = 0;
  }
  else {
    FUN_1004dabf(param_1,*(uint *)(param_1 + 0xa0) & 0xff | 0x310000);
    uVar1 = *(byte *)(param_1 + 0xa0) | 0x1d0000;
  }
  *(uint *)(param_1 + 0xa0) = uVar1;
  return;
}

