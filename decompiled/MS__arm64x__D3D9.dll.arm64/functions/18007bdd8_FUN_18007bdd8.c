/*
 * FUN_18007bdd8 at 18007bdd8
 * undefined FUN_18007bdd8(void)
 * Address ranges: 18007bdd8-18007be57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007bdd8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    if (*(longlong *)(param_1 + 0x1d2b8 + lVar2 * 8) != 0) {
      FUN_1800e1808(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x1d2b8 + lVar2 * 8) = 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x1d0b8 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      *(undefined8 *)(param_1 + 0x1d0b8 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x40);
  return;
}

