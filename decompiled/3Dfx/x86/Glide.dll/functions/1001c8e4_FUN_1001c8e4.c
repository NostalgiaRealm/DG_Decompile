/*
 * FUN_1001c8e4 at 1001c8e4
 * undefined __thiscall FUN_1001c8e4(void * this, int * param_1, int * param_2)
 * Address ranges: 1001c8e4-1001c9c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001c8e4(void *this,int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1001c7a6(*(int *)((int)this + 0x2964));
  iVar4 = *(int *)((int)this + 0x2968);
  *param_1 = iVar3;
  iVar4 = FUN_1001c7a6(iVar4);
  *param_2 = iVar4;
  if (iVar3 == -1) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)((int)this + 0x315c) + 0x2c))(iVar3);
  }
  if (*param_2 == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)((int)this + 0x315c) + 0x2c))(*param_2);
  }
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x4a) = *(byte *)(iVar4 + 0x4a) | 2;
  }
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) | 2;
  }
  if ((iVar4 != 0) || (iVar4 = iVar3, iVar3 != 0)) {
    fVar1 = (float)*(int *)(iVar4 + 0x20);
    if (*(int *)(iVar4 + 0x20) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)*(int *)(iVar4 + 0x24);
    if (*(int *)(iVar4 + 0x24) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if ((*(float *)((int)this + 0x2bd0) != fVar1) || (*(float *)((int)this + 0x2bd4) != fVar2)) {
      *(undefined1 *)((int)this + 0x3150) = 1;
      *(float *)((int)this + 0x2bd0) = fVar1;
      *(float *)((int)this + 0x2bd4) = fVar2;
    }
  }
  return;
}

