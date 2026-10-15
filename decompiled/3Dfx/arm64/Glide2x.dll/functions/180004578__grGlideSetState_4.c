/*
 * _grGlideSetState@4 at 180004578
 * undefined __cdecl _grGlideSetState@4(undefined8 * param_1)
 * Address ranges: 180004578-180004643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGlideSetState_4(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
                    /* 0x4578  48  _grGlideSetState@4
                       0x4578  205  grGlideSetState */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1b8))(*(longlong **)(lVar1 + 0x18),param_1);
      thunk_FUN_180001218((undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0xf0),param_1,0x135);
      iVar2 = 0;
      if (0 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833)) {
        do {
          FUN_180018b18(lVar1,iVar2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833));
      }
      FUN_180017780(lVar1);
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1c8))
                (*(longlong **)(lVar1 + 0x18),(longlong)param_1 + 0x135);
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

