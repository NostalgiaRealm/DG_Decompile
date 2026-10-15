/*
 * _grTexLodBiasValue@8 at 180003850
 * undefined __cdecl _grTexLodBiasValue@8(float param_1, int param_2)
 * Address ranges: 180003850-18000392b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexLodBiasValue_8(float param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  
                    /* 0x3850  94  _grTexLodBiasValue@8
                       0x3850  251  grTexLodBiasValue */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    if (param_2 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833)) {
      plVar2 = *(longlong **)(lVar1 + 0x18);
      iVar3 = (int)(param_1 * 4.0);
      if (iVar3 < -0x20) {
        iVar3 = 0x20;
      }
      if (0x1f < iVar3) {
        iVar3 = 0x1f;
      }
      fVar4 = (float)iVar3 * 0.25;
      if (fVar4 != *(float *)((longlong)plVar2 + (longlong)param_2 * 0x41 + 0x176)) {
        (**(code **)(*plVar2 + 0x268))(fVar4,plVar2,param_2);
        *(float *)((longlong)param_2 * 0x41 + *(longlong *)(lVar1 + 0x18) + 0x176) = fVar4;
      }
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

