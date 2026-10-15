/*
 * FUN_1001ab80 at 1001ab80
 * undefined FUN_1001ab80(void)
 * Address ranges: 1001ab80-1001ac0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ab80(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  FUN_1001a160(param_1,param_1);
  piVar1 = (int *)(param_1 + 4);
  FUN_100748c8(*(undefined4 *)(*piVar1 + 0x2b14),*(undefined4 *)(*piVar1 + 0x94),0);
  uVar2 = FUN_10074b00(*(undefined4 *)(*piVar1 + 0x2b14),*(undefined4 *)(param_1 + 8));
  if (((uVar2 & 1) == 0) && (*(char *)(*(int *)(*piVar1 + 4) + 0x20) == '\0')) {
    FUN_1001b5b8(param_1);
  }
  return;
}

