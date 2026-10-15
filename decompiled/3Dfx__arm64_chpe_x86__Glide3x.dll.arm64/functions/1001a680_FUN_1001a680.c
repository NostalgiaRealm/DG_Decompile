/*
 * FUN_1001a680 at 1001a680
 * undefined FUN_1001a680(void)
 * Address ranges: 1001a680-1001a70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a680(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  FUN_10019c70(param_1,param_1);
  piVar1 = (int *)(param_1 + 4);
  FUN_1006f228(*(undefined4 *)(*piVar1 + 0x29d8),*(undefined4 *)(*piVar1 + 0x94),0);
  uVar2 = FUN_1006f460(*(undefined4 *)(*piVar1 + 0x29d8),*(undefined4 *)(param_1 + 8));
  if (((uVar2 & 1) == 0) && (*(char *)(*(int *)(*piVar1 + 4) + 0x20) == '\0')) {
    FUN_1001aff0(param_1);
  }
  return;
}

