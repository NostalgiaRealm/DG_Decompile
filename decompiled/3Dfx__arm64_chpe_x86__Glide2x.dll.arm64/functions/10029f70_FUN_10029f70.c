/*
 * FUN_10029f70 at 10029f70
 * undefined FUN_10029f70(void)
 * Address ranges: 10029f70-10029fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029f70(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  FUN_100295d8(param_1,param_1);
  piVar1 = (int *)(param_1 + 4);
  FUN_1006b588(*(undefined4 *)(*piVar1 + 0x295c),*(undefined4 *)(*piVar1 + 0x94),0);
  uVar2 = FUN_1006b7c0(*(undefined4 *)(*piVar1 + 0x295c),*(undefined4 *)(param_1 + 8));
  if (((uVar2 & 1) == 0) && (*(char *)(*(int *)(*piVar1 + 4) + 0x20) == '\0')) {
    FUN_1002a908(param_1);
  }
  return;
}

