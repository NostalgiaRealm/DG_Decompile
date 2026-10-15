/*
 * _grTriStats@8 at 180002558
 * undefined __cdecl _grTriStats@8(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 180002558-1800025cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTriStats_8(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 local_28;
  
                    /* 0x2558  107  _grTriStats@8
                       0x2558  268  grTriStats */
  lVar1 = FUN_180017788();
  *param_1 = 0;
  *param_2 = 0;
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1d8))(*(longlong **)(lVar1 + 0x18),auStack_50);
    *param_1 = local_28;
    *param_2 = local_48;
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

