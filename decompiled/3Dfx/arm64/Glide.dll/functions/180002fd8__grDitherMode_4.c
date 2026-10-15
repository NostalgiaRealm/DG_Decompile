/*
 * _grDitherMode@4 at 180002fd8
 * undefined __cdecl _grDitherMode@4(uint param_1)
 * Address ranges: 180002fd8-18000303b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDitherMode_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2fd8  32  _grDitherMode@4
                       0x2fd8  193  grDitherMode */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar2 + 0x113)) {
      (**(code **)(*plVar2 + 400))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x113) = (char)param_1;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

