/*
 * FUN_180052658 at 180052658
 * undefined __cdecl FUN_180052658(longlong param_1, longlong param_2)
 * Address ranges: 180052658-1800526fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180052658(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      plVar2 = *(longlong **)(param_2 + 0xd98 + uVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_180053540(param_1,*(uint *)(param_2 + 0x10),plVar2);
        *(undefined8 *)(param_2 + 0xd98 + uVar3 * 8) = 0;
      }
      plVar2 = *(longlong **)(param_2 + 0xda8 + uVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)(param_2 + 0xda8 + uVar3 * 8) = 0;
      }
      plVar2 = *(longlong **)(param_2 + 0xd88 + uVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)(param_2 + 0xd88 + uVar3 * 8) = 0;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

