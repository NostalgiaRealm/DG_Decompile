/*
 * FUN_100321a7 at 100321a7
 * undefined4 __fastcall FUN_100321a7(int param_1)
 * Address ranges: 100321a7-100321d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100321a7(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x6c) & 0x200) != 0) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x68) & 0x1000) != 0) {
    return 1;
  }
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    uVar1 = 3;
  }
  return uVar1;
}

