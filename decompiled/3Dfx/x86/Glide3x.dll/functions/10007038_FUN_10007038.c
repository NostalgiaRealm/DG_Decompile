/*
 * FUN_10007038 at 10007038
 * undefined __thiscall FUN_10007038(void * this, int param_1, int param_2, byte param_3, float param_4)
 * Address ranges: 10007038-100070ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007038(void *this,int param_1,int param_2,byte param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
      iVar2 = -0x20;
      if ((-0x21 < param_2) && (iVar2 = param_2, 0x1f < param_2)) {
        iVar2 = 0x1f;
      }
      if (7 < param_3) {
        param_3 = 7;
      }
      if (param_4 < 0.0) {
        param_4 = 0.0;
      }
      if (1.0 < param_4) {
        param_4 = 1.0;
      }
      (**(code **)(**(int **)((int)this + 0xc) + 0x168))(param_1,iVar2,param_3,param_4);
      *(char *)(param_1 * 0x55 + 0x1a8 + *(int *)((int)this + 0xc)) = (char)iVar2;
      *(byte *)((param_1 + 5) * 0x55 + *(int *)((int)this + 0xc)) = param_3;
      *(float *)(param_1 * 0x55 + 0x1aa + *(int *)((int)this + 0xc)) = param_4;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

