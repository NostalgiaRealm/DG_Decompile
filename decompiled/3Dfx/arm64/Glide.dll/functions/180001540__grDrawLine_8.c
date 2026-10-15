/*
 * _grDrawLine@8 at 180001540
 * undefined __cdecl _grDrawLine@8(undefined8 param_1, undefined8 param_2)
 * Address ranges: 180001540-18000159f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawLine_8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
                    /* 0x1540  33  _grDrawLine@8
                       0x1540  194  grDrawLine */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x200))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2);
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

