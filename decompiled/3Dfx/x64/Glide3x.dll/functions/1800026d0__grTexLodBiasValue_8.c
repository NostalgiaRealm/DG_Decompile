/*
 * _grTexLodBiasValue@8 at 1800026d0
 * undefined __fastcall _grTexLodBiasValue@8(int param_1, float param_2)
 * Address ranges: 1800026d0-180002771
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexLodBiasValue_8(int param_1,float param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  
                    /* 0x26d0  81  _grTexLodBiasValue@8
                       0x26d0  181  grTexLodBiasValue */
  uVar4 = (ulonglong)param_1;
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    if ((int)uVar4 < *(int *)(*(longlong *)(puVar2 + 0x30) + 0x833)) {
      iVar3 = (int)(param_2 * 4.0);
      if (0x3f < iVar3 + 0x20U) {
        iVar3 = 0x1f;
      }
      plVar1 = *(longlong **)(puVar2 + 0x18);
      fVar5 = (float)iVar3 * 0.25;
      if (fVar5 != *(float *)(uVar4 * 0x55 + 0x1b4 + (longlong)plVar1)) {
        (**(code **)(*plVar1 + 0x2a8))(plVar1,uVar4 & 0xffffffff,fVar5);
        *(float *)(uVar4 * 0x55 + 0x1b4 + *(longlong *)(puVar2 + 0x18)) = fVar5;
      }
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

