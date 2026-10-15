/*
 * _grDepthBufferFunction@4 at 180002d50
 * undefined __cdecl _grDepthBufferFunction@4(uint param_1)
 * Address ranges: 180002d50-180002db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthBufferFunction_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2d50  28  _grDepthBufferFunction@4
                       0x2d50  185  grDepthBufferFunction */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(byte *)(plVar2 + 0x27)) {
      (**(code **)(*plVar2 + 0x118))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x138) = (char)param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

