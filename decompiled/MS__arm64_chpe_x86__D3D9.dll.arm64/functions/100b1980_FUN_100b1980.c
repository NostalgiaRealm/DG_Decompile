/*
 * FUN_100b1980 at 100b1980
 * undefined FUN_100b1980(void)
 * Address ranges: 100b1980-100b1a3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_100b1980(int param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xc9) == '\0') {
    uVar1 = FUN_100ae520(param_1,param_2 & 0xffffffff,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_1010f6c0(*(int *)(param_1 + -0x48),param_2,param_1 + -0x88);
    uVar1 = FUN_100addb8(param_1 + -0x88,param_2 & 0xffffffff,param_3,param_4,param_5,param_6);
    (*(code *)PTR_FUN_1016c0c0)(*(int *)(param_1 + -0x48) + 0x4a0);
  }
  return uVar1;
}

