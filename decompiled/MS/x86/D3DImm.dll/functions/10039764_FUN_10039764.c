/*
 * FUN_10039764 at 10039764
 * undefined __stdcall FUN_10039764(int param_1)
 * Address ranges: 10039764-10039797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039764(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x164);
  if (((uVar1 & 0x3f00) == 0) && (uVar1 != *(uint *)(param_1 + 0x16c))) {
    FUN_10056fd9(param_1 + 0x10,uVar1);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  return;
}

