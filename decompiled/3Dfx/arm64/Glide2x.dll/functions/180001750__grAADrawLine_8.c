/*
 * _grAADrawLine@8 at 180001750
 * undefined __cdecl _grAADrawLine@8(undefined8 param_1, undefined8 param_2)
 * Address ranges: 180001750-1800017af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawLine_8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
                    /* 0x1750  5  _grAADrawLine@8
                       0x1750  162  grAADrawLine */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x228))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2);
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

