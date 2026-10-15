/*
 * _grLfbWriteColorFormat@4 at 180005278
 * undefined __cdecl _grLfbWriteColorFormat@4(uint param_1)
 * Address ranges: 180005278-1800052db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbWriteColorFormat_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x5278  55  _grLfbWriteColorFormat@4
                       0x5278  155  grLfbWriteColorFormat */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar2 + 0x13d)) {
      (**(code **)(*plVar2 + 0x100))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x13d) = (char)param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

