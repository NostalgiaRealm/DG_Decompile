/*
 * _grLfbConstantAlpha@4 at 1800051a0
 * undefined __cdecl _grLfbConstantAlpha@4(char param_1)
 * Address ranges: 1800051a0-180005203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantAlpha_4(char param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x51a0  50  _grLfbConstantAlpha@4
                       0x51a0  150  grLfbConstantAlpha */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(char *)((longlong)plVar2 + 0x13e)) {
      (**(code **)(*plVar2 + 0xf0))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x13e) = param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

