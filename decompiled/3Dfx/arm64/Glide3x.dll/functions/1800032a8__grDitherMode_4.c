/*
 * _grDitherMode@4 at 1800032a8
 * undefined __cdecl _grDitherMode@4(uint param_1)
 * Address ranges: 1800032a8-18000330b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDitherMode_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x32a8  27  _grDitherMode@4
                       0x32a8  127  grDitherMode */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar2 + 0x113)) {
      (**(code **)(*plVar2 + 0x1b0))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x113) = (char)param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

