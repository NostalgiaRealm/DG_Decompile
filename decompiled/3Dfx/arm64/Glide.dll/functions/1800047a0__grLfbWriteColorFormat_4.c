/*
 * _grLfbWriteColorFormat@4 at 1800047a0
 * undefined __cdecl _grLfbWriteColorFormat@4(uint param_1)
 * Address ranges: 1800047a0-180004803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbWriteColorFormat_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x47a0  61  _grLfbWriteColorFormat@4
                       0x47a0  222  grLfbWriteColorFormat */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar2 + 0x13d)) {
      (**(code **)(*plVar2 + 0xe0))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x13d) = (char)param_1;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

