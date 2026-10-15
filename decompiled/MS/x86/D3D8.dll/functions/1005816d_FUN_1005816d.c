/*
 * FUN_1005816d at 1005816d
 * undefined __stdcall FUN_1005816d(int param_1)
 * Address ranges: 1005816d-100581a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005816d(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x180);
  if (((uVar1 & 0x3f00) == 0) && (uVar1 != *(uint *)(param_1 + 0x188))) {
    FUN_100a068b(param_1 + 0x18,uVar1);
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  return;
}

