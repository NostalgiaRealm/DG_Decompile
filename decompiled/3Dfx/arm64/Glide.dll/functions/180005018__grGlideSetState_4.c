/*
 * _grGlideSetState@4 at 180005018
 * undefined __cdecl _grGlideSetState@4(undefined8 * param_1)
 * Address ranges: 180005018-1800050e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGlideSetState_4(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
                    /* 0x5018  48  _grGlideSetState@4
                       0x5018  209  grGlideSetState */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1b8))(*(longlong **)(lVar1 + 0x18),param_1);
      thunk_FUN_180001218((undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0xf0),param_1,0x135);
      iVar2 = 0;
      if (0 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833)) {
        do {
          FUN_180019968(lVar1,iVar2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833));
      }
      FUN_180018488(lVar1);
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1c8))
                (*(longlong **)(lVar1 + 0x18),(longlong)param_1 + 0x135);
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

