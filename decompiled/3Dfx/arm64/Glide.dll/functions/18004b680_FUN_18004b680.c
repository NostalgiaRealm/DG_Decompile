/*
 * FUN_18004b680 at 18004b680
 * undefined __cdecl FUN_18004b680(longlong param_1)
 * Address ranges: 18004b680-18004b6e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b680(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = *(int *)(param_1 + 0x67c);
  *(int *)(param_1 + 0x67c) = iVar2 + 1;
  if (((iVar2 == 0) && (*(longlong *)(param_1 + 0xb10) != 0)) &&
     (uVar3 = 0, *(int *)(param_1 + 0xba8) != 0)) {
    do {
      (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0xba0) + uVar3 * 8))();
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xba8));
  }
  return;
}

