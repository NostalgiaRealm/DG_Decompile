/*
 * _grHints@8 at 180005108
 * undefined __cdecl _grHints@8(uint param_1, uint param_2)
 * Address ranges: 180005108-18000518b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grHints_8(uint param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x5108  51  _grHints@8
                       0x5108  212  grHints */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    if ((param_1 < 7) &&
       (plVar2 = *(longlong **)(lVar1 + 0x18),
       param_2 != *(byte *)((longlong)plVar2 + (ulonglong)param_1 + 0x14a))) {
      (**(code **)(*plVar2 + 0x1f0))(plVar2,param_1,param_2);
      *(char *)(*(longlong *)(lVar1 + 0x18) + (ulonglong)param_1 + 0x14a) = (char)param_2;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

