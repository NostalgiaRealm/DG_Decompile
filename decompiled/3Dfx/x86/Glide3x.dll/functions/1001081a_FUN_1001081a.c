/*
 * FUN_1001081a at 1001081a
 * undefined __thiscall FUN_1001081a(void * this, uint * param_1, uint * param_2)
 * Address ranges: 1001081a-10010903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001081a(void *this,uint *param_1,uint *param_2)

{
  void *this_00;
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_1001059c(*(void **)((int)this + 0x32dc),*(int *)((int)this + 0x29e0));
  iVar5 = *(int *)((int)this + 0x29e4);
  this_00 = *(void **)((int)this + 0x32dc);
  *param_1 = uVar3;
  uVar4 = FUN_1001059c(this_00,iVar5);
  uVar3 = *param_1;
  *param_2 = uVar4;
  if (uVar3 == 0xffffffff) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(**(int **)((int)this + 0x32dc) + 0x2c))(*param_1);
  }
  if (*param_2 == 0xffffffff) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)((int)this + 0x32dc) + 0x2c))(*param_2);
  }
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x4a) = *(byte *)(iVar5 + 0x4a) | 2;
  }
  if (iVar6 != 0) {
    *(byte *)(iVar6 + 0x4a) = *(byte *)(iVar6 + 0x4a) | 2;
  }
  if ((iVar5 != 0) || (iVar5 = iVar6, iVar6 != 0)) {
    fVar1 = (float)*(int *)(iVar5 + 0x20);
    if (*(int *)(iVar5 + 0x20) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)*(int *)(iVar5 + 0x24);
    if (*(int *)(iVar5 + 0x24) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if ((*(float *)((int)this + 0x2c70) != fVar1) || (*(float *)((int)this + 0x2c74) != fVar2)) {
      *(undefined1 *)((int)this + 0x32d0) = 1;
      *(float *)((int)this + 0x2c70) = fVar1;
      *(float *)((int)this + 0x2c74) = fVar2;
    }
  }
  return;
}

