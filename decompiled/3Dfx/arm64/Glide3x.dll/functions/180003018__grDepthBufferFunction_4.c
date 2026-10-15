/*
 * _grDepthBufferFunction@4 at 180003018
 * undefined __cdecl _grDepthBufferFunction@4(uint param_1)
 * Address ranges: 180003018-18000307b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthBufferFunction_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x3018  21  _grDepthBufferFunction@4
                       0x3018  121  grDepthBufferFunction */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(byte *)(plVar2 + 0x27)) {
      (**(code **)(*plVar2 + 0x138))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x138) = (char)param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

