/*
 * FUN_10005056 at 10005056
 * undefined __thiscall FUN_10005056(void * this, undefined4 param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10005056-1000512b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005056(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar5 = 0;
    do {
      iVar4 = uVar5 * 0xc;
      iVar2 = *(int *)(param_2 + uVar5 * 4);
      fVar3 = (float)iVar2;
      if (iVar2 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      *(float *)(*(int *)((int)this + 0xc) + 0x1310 + iVar4) = fVar3 / 255.0;
      fVar3 = (float)*(int *)(param_3 + uVar5 * 4);
      if (*(int *)(param_3 + uVar5 * 4) < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      *(float *)(iVar4 + 0x1314 + *(int *)((int)this + 0xc)) = fVar3 / 255.0;
      fVar3 = (float)*(int *)(param_4 + uVar5 * 4);
      if (*(int *)(param_4 + uVar5 * 4) < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      uVar5 = uVar5 + 1;
      *(float *)(*(int *)((int)this + 0xc) + 0x1318 + iVar4) = fVar3 / 255.0;
    } while (uVar5 < 0x100);
    (**(code **)(**(int **)((int)this + 0xc) + 0x30))(*(int **)((int)this + 0xc) + 0x4c4);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

