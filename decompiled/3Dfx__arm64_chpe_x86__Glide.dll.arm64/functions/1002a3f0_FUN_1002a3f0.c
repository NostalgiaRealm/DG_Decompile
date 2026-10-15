/*
 * FUN_1002a3f0 at 1002a3f0
 * undefined FUN_1002a3f0(void)
 * Address ranges: 1002a3f0-1002a47f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a3f0(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  FUN_10029a58(param_1,param_1);
  piVar1 = (int *)(param_1 + 4);
  FUN_1006ba08(*(undefined4 *)(*piVar1 + 0x295c),*(undefined4 *)(*piVar1 + 0x94),0);
  uVar2 = FUN_1006bc40(*(undefined4 *)(*piVar1 + 0x295c),*(undefined4 *)(param_1 + 8));
  if (((uVar2 & 1) == 0) && (*(char *)(*(int *)(*piVar1 + 4) + 0x20) == '\0')) {
    FUN_1002ad88(param_1);
  }
  return;
}

