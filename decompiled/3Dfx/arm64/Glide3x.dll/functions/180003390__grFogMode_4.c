/*
 * _grFogMode@4 at 180003390
 * undefined __cdecl _grFogMode@4(uint param_1)
 * Address ranges: 180003390-1800033fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogMode_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x3390  38  _grFogMode@4
                       0x3390  138  grFogMode */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(ushort *)((longlong)plVar2 + 0x141)) {
      (**(code **)(*plVar2 + 0x1c8))(plVar2,param_1);
      *(short *)(*(longlong *)(lVar1 + 0x18) + 0x141) = (short)param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

