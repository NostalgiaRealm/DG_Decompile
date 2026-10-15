/*
 * FUN_100698f0 at 100698f0
 * undefined FUN_100698f0(void)
 * Address ranges: 100698f0-10069a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100698f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 8);
  *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x10) == *(int *)(*piVar1 + 0xd80));
  FUN_1006abc0(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_100b4f00);
  FUN_1006af20(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_100b50a0);
  FUN_1006b1e0(param_1,*(undefined4 *)(*piVar1 + 8));
  FUN_1006b950(param_1,*(undefined4 *)(*piVar1 + 8));
  FUN_1006b6d8(param_1,*(undefined4 *)(*piVar1 + 8));
  FUN_1006b808(param_1,*(undefined4 *)(*piVar1 + 8));
  FUN_1006b8c8(param_1,*(undefined4 *)(*piVar1 + 8));
  return 1;
}

