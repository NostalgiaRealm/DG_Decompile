/*
 * FUN_18003cd40 at 18003cd40
 * undefined __fastcall FUN_18003cd40(longlong param_1)
 * Address ranges: 18003cd40-18003cd84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003cd40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    FUN_1800dba9c(*(longlong *)(param_1 + 8),(ulonglong)*(uint *)(param_1 + 0x28),
                  *(longlong **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

