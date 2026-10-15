/*
 * _grTexDetailControl@16 at 180003690
 * undefined __cdecl _grTexDetailControl@16(float param_1, int param_2, int param_3, byte param_4)
 * Address ranges: 180003690-180003783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDetailControl_16(float param_1,int param_2,int param_3,byte param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
                    /* 0x3690  91  _grTexDetailControl@16
                       0x3690  252  grTexDetailControl */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    if (param_2 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      if (param_3 < -0x20) {
        param_3 = -0x20;
      }
      if (0x1f < param_3) {
        param_3 = 0x1f;
      }
      if (7 < param_4) {
        param_4 = 7;
      }
      fVar4 = 0.0;
      if (0.0 <= param_1) {
        fVar4 = param_1;
      }
      fVar3 = 1.0;
      if (fVar4 <= 1.0) {
        fVar3 = fVar4;
      }
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x290))
                (fVar3,*(longlong **)(lVar2 + 0x18),param_2,param_3,param_4);
      lVar1 = (longlong)param_2 * 0x41;
      *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x17a) = (char)param_3;
      *(byte *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x17b) = param_4;
      *(float *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x17c) = fVar3;
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

