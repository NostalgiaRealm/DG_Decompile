/*
 * FUN_10014be4 at 10014be4
 * undefined __thiscall FUN_10014be4(void * this, int param_1, int param_2, byte param_3, float param_4)
 * Address ranges: 10014be4-10014ca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014be4(void *this,int param_1,int param_2,byte param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
      iVar3 = -0x20;
      if ((-0x21 < param_2) && (iVar3 = param_2, 0x1f < param_2)) {
        iVar3 = 0x1f;
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
      (**(code **)(**(int **)((int)this + 0xc) + 0x148))(param_1,iVar3,param_3,param_4);
      iVar2 = param_1 * 0x41;
      *(char *)(iVar2 + 0x16a + *(int *)((int)this + 0xc)) = (char)iVar3;
      *(byte *)(iVar2 + 0x16b + *(int *)((int)this + 0xc)) = param_3;
      *(float *)(iVar2 + 0x16c + *(int *)((int)this + 0xc)) = param_4;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

