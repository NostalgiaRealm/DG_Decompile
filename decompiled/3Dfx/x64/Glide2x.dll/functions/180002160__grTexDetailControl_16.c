/*
 * _grTexDetailControl@16 at 180002160
 * undefined __fastcall _grTexDetailControl@16(int param_1, int param_2, byte param_3, float param_4)
 * Address ranges: 180002160-18000221f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDetailControl_16(int param_1,int param_2,byte param_3,float param_4)

{
  undefined *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
                    /* 0x2160  87  _grTexDetailControl@16
                       0x2160  244  grTexDetailControl */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(longlong *)(puVar1 + 0x30) + 0x833)) {
      fVar5 = 0.0;
      if (0.0 <= param_4) {
        fVar5 = param_4;
      }
      iVar4 = -0x20;
      if (-0x21 < param_2) {
        iVar4 = param_2;
      }
      if (0x1f < iVar4) {
        iVar4 = 0x1f;
      }
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      bVar2 = 7;
      if (param_3 < 8) {
        bVar2 = param_3;
      }
      (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x290))
                (*(longlong **)(puVar1 + 0x18),param_1,iVar4,bVar2,fVar6);
      lVar3 = (longlong)param_1 * 0x41;
      *(char *)(lVar3 + 0x17a + *(longlong *)(puVar1 + 0x18)) = (char)iVar4;
      *(byte *)(lVar3 + 0x17b + *(longlong *)(puVar1 + 0x18)) = bVar2;
      *(float *)(lVar3 + 0x17c + *(longlong *)(puVar1 + 0x18)) = fVar6;
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

