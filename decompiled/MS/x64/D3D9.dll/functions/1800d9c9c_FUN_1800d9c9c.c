/*
 * FUN_1800d9c9c at 1800d9c9c
 * undefined __fastcall FUN_1800d9c9c(longlong param_1, longlong param_2)
 * Address ranges: 1800d9c9c-1800d9d2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d9c9c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      plVar1 = *(longlong **)(param_2 + 0xd98 + uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_1800db9a0(param_1,*(uint *)(param_2 + 0x10),plVar1);
        *(undefined8 *)(param_2 + 0xd98 + uVar3 * 8) = 0;
      }
      plVar1 = *(longlong **)(param_2 + 0xda8 + uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_2 + 0xda8 + uVar3 * 8) = 0;
      }
      plVar1 = *(longlong **)(param_2 + 0xd88 + uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_2 + 0xd88 + uVar3 * 8) = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

