/*
 * _grLfbWriteColorFormat@4 at 180004168
 * undefined __cdecl _grLfbWriteColorFormat@4(uint param_1)
 * Address ranges: 180004168-1800041cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbWriteColorFormat_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x4168  57  _grLfbWriteColorFormat@4
                       0x4168  214  grLfbWriteColorFormat */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar2 + 0x13d)) {
      (**(code **)(*plVar2 + 0xe0))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x13d) = (char)param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

