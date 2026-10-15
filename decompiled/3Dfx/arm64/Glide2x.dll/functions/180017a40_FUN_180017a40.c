/*
 * FUN_180017a40 at 180017a40
 * undefined __cdecl FUN_180017a40(longlong param_1, undefined8 * param_2, byte param_3)
 * Address ranges: 180017a40-180017b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017a40(longlong param_1,undefined8 *param_2,byte param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800608b0((uint *)(param_1 + 0x60));
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1b8))(*(longlong **)(param_1 + 0x18),param_2)
      ;
      thunk_FUN_180001218((undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf0),param_2,0x135);
      iVar1 = 0;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
        do {
          FUN_180018b18(param_1,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
      }
      FUN_180017780(param_1);
      if ((param_3 & 1) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1c8))
                  (*(longlong **)(param_1 + 0x18),(longlong)param_2 + 0x135);
      }
    }
    FUN_1800608a0((uint *)(param_1 + 0x60));
  }
  return;
}

