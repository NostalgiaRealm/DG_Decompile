/*
 * FUN_10017150 at 10017150
 * undefined FUN_10017150(void)
 * Address ranges: 10017150-1001720f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_10017150(int param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xc9) == '\0') {
    uVar1 = FUN_10013d80(param_1,param_2 & 0xffffffff,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_1006e8d0(*(int *)(param_1 + -0x48),param_2,param_1 + -0x88);
    uVar1 = FUN_10013618(param_1 + -0x88,param_2 & 0xffffffff,param_3,param_4,param_5,param_6);
    (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + -0x48) + 0x4a0);
  }
  return uVar1;
}

