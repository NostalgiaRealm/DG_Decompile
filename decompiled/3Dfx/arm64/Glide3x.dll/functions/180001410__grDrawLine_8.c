/*
 * _grDrawLine@8 at 180001410
 * undefined __cdecl _grDrawLine@8(undefined8 param_1, undefined8 param_2)
 * Address ranges: 180001410-18000147b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawLine_8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x1410  28  _grDrawLine@8
                       0x1410  128  grDrawLine */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    FUN_18000b758(*(longlong *)(lVar1 + 0x18));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    (**(code **)(*plVar2 + 0x218))(plVar2,*(undefined4 *)((longlong)plVar2 + 0x2a4),param_1,param_2)
    ;
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

