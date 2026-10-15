/*
 * _grLfbConstantAlpha@4 at 180004090
 * undefined __cdecl _grLfbConstantAlpha@4(char param_1)
 * Address ranges: 180004090-1800040f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantAlpha_4(char param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x4090  52  _grLfbConstantAlpha@4
                       0x4090  209  grLfbConstantAlpha */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(char *)((longlong)plVar2 + 0x13e)) {
      (**(code **)(*plVar2 + 0xd0))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x13e) = param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

