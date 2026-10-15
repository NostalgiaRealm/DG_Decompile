/*
 * _grTexNCCTable@8 at 1800033f0
 * undefined __cdecl _grTexNCCTable@8(int param_1, undefined4 param_2)
 * Address ranges: 1800033f0-18000346f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexNCCTable_8(int param_1,undefined4 param_2)

{
  longlong lVar1;
  
                    /* 0x33f0  104  _grTexNCCTable@8
                       0x33f0  265  grTexNCCTable */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833)) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x280))
                (*(longlong **)(lVar1 + 0x18),param_1,param_2);
      *(char *)(*(longlong *)(lVar1 + 0x18) + (longlong)param_1 + 0x147) = (char)param_2;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

