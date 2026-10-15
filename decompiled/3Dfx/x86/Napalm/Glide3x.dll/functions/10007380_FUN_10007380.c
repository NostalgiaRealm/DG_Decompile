/*
 * FUN_10007380 at 10007380
 * undefined __thiscall FUN_10007380(void * this, int param_1)
 * Address ranges: 10007380-10007419
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007380(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  float fStack00000008;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
      lVar2 = FUN_10056570();
      fStack00000008 = (float)lVar2;
      if (((int)fStack00000008 < -0x20) || (0x1f < (int)fStack00000008)) {
        fStack00000008 = 4.34403e-44;
      }
      fStack00000008 = (float)(int)fStack00000008 * 0.25;
      if (fStack00000008 != *(float *)(param_1 * 0x9d + 0x24f + (int)*(int **)((int)this + 0xc))) {
        (**(code **)(**(int **)((int)this + 0xc) + 0x148))(param_1,fStack00000008);
        *(float *)(param_1 * 0x9d + 0x24f + *(int *)((int)this + 0xc)) = fStack00000008;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

