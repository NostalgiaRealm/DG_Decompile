/*
 * FUN_1004d28d at 1004d28d
 * undefined4 __stdcall FUN_1004d28d(undefined4 param_1, undefined4 * param_2)
 * Address ranges: 1004d28d-1004d2eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004d28d(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  int *piVar2;
  undefined4 uVar3;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    piVar2 = (int *)FUN_1005c755(0x40);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_10013705(piVar2);
    }
    *param_2 = piVar2;
    uVar3 = 0x8007000e;
    if (piVar2 != (int *)0x0) {
      uVar3 = 0;
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

