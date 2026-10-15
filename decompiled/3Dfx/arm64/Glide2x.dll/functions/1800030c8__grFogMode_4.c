/*
 * _grFogMode@4 at 1800030c8
 * undefined __cdecl _grFogMode@4(uint param_1)
 * Address ranges: 1800030c8-180003133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogMode_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x30c8  42  _grFogMode@4
                       0x30c8  199  grFogMode */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(ushort *)((longlong)plVar2 + 0x141)) {
      (**(code **)(*plVar2 + 0x1a8))(plVar2,param_1);
      *(short *)(*(longlong *)(lVar1 + 0x18) + 0x141) = (short)param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

