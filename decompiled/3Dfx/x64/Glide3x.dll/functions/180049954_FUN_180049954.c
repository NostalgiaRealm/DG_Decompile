/*
 * FUN_180049954 at 180049954
 * undefined __fastcall FUN_180049954(longlong param_1)
 * Address ranges: 180049954-1800499ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049954(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x67c);
  *(int *)(param_1 + 0x67c) = iVar1 + 1;
  if (((iVar1 == 0) && (*(longlong *)(param_1 + 0xb10) != 0)) &&
     (uVar3 = 0, *(int *)(param_1 + 0xba8) != 0)) {
    do {
      (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0xba0) + uVar3 * 8))();
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0xba8));
  }
  return;
}

