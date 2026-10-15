/*
 * FUN_1002680b at 1002680b
 * undefined __fastcall FUN_1002680b(int param_1, char param_2)
 * Address ranges: 1002680b-10026844
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002680b(int param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    FUN_1004a6b6(param_1,*(uint *)(param_1 + 0xa0));
    uVar1 = 0;
  }
  else {
    FUN_1004a6b6(param_1,*(uint *)(param_1 + 0xa0) & 0xff | 0x310000);
    uVar1 = *(byte *)(param_1 + 0xa0) | 0x1d0000;
  }
  *(uint *)(param_1 + 0xa0) = uVar1;
  return;
}

