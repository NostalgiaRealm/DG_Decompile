/*
 * _grDepthBiasLevel@4 at 180002fa8
 * undefined __cdecl _grDepthBiasLevel@4(int param_1)
 * Address ranges: 180002fa8-180003013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthBiasLevel_4(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2fa8  20  _grDepthBiasLevel@4
                       0x2fa8  120  grDepthBiasLevel */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(int *)((longlong)plVar2 + 0x133)) {
      (**(code **)(*plVar2 + 0x130))(plVar2,param_1);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x133) = param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

