/*
 * _grAADrawTriangle@24 at 180001828
 * undefined __cdecl _grAADrawTriangle@24(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 180001828-1800018c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawTriangle_24
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x1828  1  _grAADrawTriangle@24
                       0x1828  101  grAADrawTriangle */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    FUN_18000b758(*(longlong *)(lVar1 + 0x18));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    (**(code **)(*plVar2 + 0x238))
              (plVar2,*(undefined4 *)((longlong)plVar2 + 0x2a4),param_1,param_2,param_3,param_4,
               param_5,param_6);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

