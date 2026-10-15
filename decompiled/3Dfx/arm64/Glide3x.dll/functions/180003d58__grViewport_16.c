/*
 * _grViewport@16 at 180003d58
 * undefined __cdecl _grViewport@16(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180003d58-180003dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grViewport_16(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
                    /* 0x3d58  93  _grViewport@16
                       0x3d58  193  grViewport */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x260))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2,param_3,param_4);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

