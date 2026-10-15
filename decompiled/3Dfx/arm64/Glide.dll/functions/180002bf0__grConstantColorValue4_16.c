/*
 * _grConstantColorValue4@16 at 180002bf0
 * undefined __cdecl _grConstantColorValue4@16(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 180002bf0-180002cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grConstantColorValue4_16(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2bf0  24  _grConstantColorValue4@16
                       0x2bf0  186  grConstantColorValue4 */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if ((((param_2 != *(int *)((longlong)plVar2 + 0xfa)) ||
         (param_3 != *(int *)((longlong)plVar2 + 0xfe))) ||
        (param_4 != *(int *)((longlong)plVar2 + 0x102))) ||
       (param_1 != *(int *)((longlong)plVar2 + 0x106))) {
      (**(code **)(*plVar2 + 0x168))(param_2,param_3,param_4,param_1);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0xfa) = param_2;
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0xfe) = param_3;
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x102) = param_4;
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x106) = param_1;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

