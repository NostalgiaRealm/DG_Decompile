/*
 * FUN_100768dd at 100768dd
 * undefined __thiscall FUN_100768dd(void * this, uint param_1, undefined4 param_2, int param_3, int param_4, float param_5, float param_6)
 * Address ranges: 100768dd-100769b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100768dd(void *this,uint param_1,undefined4 param_2,int param_3,int param_4,float param_5,
            float param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(*(int *)((int)this + -8) + 0xc);
  uVar3 = 0;
  fVar4 = (float)((double)iVar2 + (double)(&DAT_100b5ce0)[-(iVar2 >> 0x1f)]) / 100.0;
  if (param_1 != 0) {
    do {
      lVar7 = FUN_100ae2c0();
      iVar2 = (int)lVar7 * 0xc;
      fVar6 = fVar4 * *(float *)(param_4 + iVar2);
      fVar5 = param_6;
      if ((fVar6 <= param_6) && (fVar5 = param_5, param_5 <= fVar6)) {
        fVar5 = fVar6;
      }
      iVar1 = uVar3 * 0xc;
      *(float *)(param_3 + iVar1) = fVar5;
      fVar6 = fVar4 * *(float *)(param_4 + 4 + iVar2);
      fVar5 = param_6;
      if ((fVar6 <= param_6) && (fVar5 = param_5, param_5 <= fVar6)) {
        fVar5 = fVar6;
      }
      *(float *)(param_3 + 4 + iVar1) = fVar5;
      fVar6 = fVar4 * *(float *)(param_4 + 8 + iVar2);
      fVar5 = param_6;
      if ((fVar6 <= param_6) && (fVar5 = param_5, param_5 <= fVar6)) {
        fVar5 = fVar6;
      }
      uVar3 = uVar3 + 1;
      *(float *)(param_3 + 8 + iVar1) = fVar5;
    } while (uVar3 < param_1);
  }
  return;
}

