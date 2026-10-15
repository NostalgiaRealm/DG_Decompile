/*
 * _grLfbConstantAlpha@4 at 1800046c8
 * undefined __cdecl _grLfbConstantAlpha@4(char param_1)
 * Address ranges: 1800046c8-18000472b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantAlpha_4(char param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x46c8  54  _grLfbConstantAlpha@4
                       0x46c8  215  grLfbConstantAlpha */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(char *)((longlong)plVar2 + 0x13e)) {
      (**(code **)(*plVar2 + 0xd0))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x13e) = param_1;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

