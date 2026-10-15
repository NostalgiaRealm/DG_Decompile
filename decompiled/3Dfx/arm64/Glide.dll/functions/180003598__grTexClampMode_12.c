/*
 * _grTexClampMode@12 at 180003598
 * undefined __cdecl _grTexClampMode@12(int param_1, uint param_2, uint param_3)
 * Address ranges: 180003598-180003657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexClampMode_12(int param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x3598  88  _grTexClampMode@12
                       0x3598  249  grTexClampMode */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      plVar3 = *(longlong **)(lVar2 + 0x18);
      lVar1 = (longlong)param_1 * 0x41;
      if ((param_2 != *(byte *)((longlong)plVar3 + lVar1 + 0x161)) ||
         (param_3 != *(byte *)((longlong)plVar3 + lVar1 + 0x162))) {
        (**(code **)(*plVar3 + 0x260))(plVar3,param_1,param_2,param_3);
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x161) = (char)param_2;
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x162) = (char)param_3;
      }
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

