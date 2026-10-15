/*
 * FUN_10032c5e at 10032c5e
 * undefined __fastcall FUN_10032c5e(int param_1, char param_2)
 * Address ranges: 10032c5e-10032c97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10032c5e(int param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    FUN_10047bce(param_1,*(uint *)(param_1 + 0xa0));
    uVar1 = 0;
  }
  else {
    FUN_10047bce(param_1,*(uint *)(param_1 + 0xa0) & 0xff | 0x310000);
    uVar1 = *(byte *)(param_1 + 0xa0) | 0x1d0000;
  }
  *(uint *)(param_1 + 0xa0) = uVar1;
  return;
}

