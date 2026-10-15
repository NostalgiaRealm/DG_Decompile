/*
 * _grDrawTriangle@12 at 180001480
 * undefined __cdecl _grDrawTriangle@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180001480-1800014f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawTriangle_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x1480  30  _grDrawTriangle@12
                       0x1480  130  grDrawTriangle */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    FUN_18000b758(*(longlong *)(lVar1 + 0x18));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    (**(code **)(*plVar2 + 0x220))
              (plVar2,*(undefined4 *)((longlong)plVar2 + 0x2a4),param_1,param_2,param_3);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

