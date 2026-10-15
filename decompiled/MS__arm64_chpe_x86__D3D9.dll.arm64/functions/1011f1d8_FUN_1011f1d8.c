/*
 * FUN_1011f1d8 at 1011f1d8
 * undefined FUN_1011f1d8(void)
 * Address ranges: 1011f1d8-1011f24b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1011f1d8(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_1016c074)(param_1 + 0x1c);
  uVar2 = FUN_1011f4f8(param_1 + 0xc,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_1011e2a0(uVar2,uVar2 & 0xffffffff,1);
  }
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x1c);
  return uVar1;
}

