/*
 * FUN_10047438 at 10047438
 * undefined __fastcall FUN_10047438(int param_1)
 * Address ranges: 10047438-10047460
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10047438(int param_1)

{
  uint uVar1;
  
  uVar1 = 3;
  if (*(uint *)(param_1 + 0x2b0) < 4) {
    uVar1 = *(uint *)(param_1 + 0x2b0);
  }
  *(undefined4 *)(param_1 + 0x1578) = *(undefined4 *)(&DAT_1005f4ac + uVar1 * 4);
  *(uint *)(param_1 + 0x157c) = (uint)(byte)(&DAT_1005f4a8)[uVar1];
  return;
}

