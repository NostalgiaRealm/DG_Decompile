/*
 * FUN_100088eb at 100088eb
 * undefined __thiscall FUN_100088eb(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100088eb-10008a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100088eb(void *this,int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_8;
  
  local_8 = param_1;
  iVar3 = param_1 + param_3;
  uVar6 = *(uint *)((int)this + 0x3620) & 0xffff3fff | 0x8000;
  *(uint *)((int)this + 0x3620) = uVar6;
  bVar8 = param_3 < 0;
  param_3 = iVar3;
  if (bVar8) {
    uVar6 = uVar6 ^ 0x4000;
    *(uint *)((int)this + 0x3620) = uVar6;
    param_3 = param_1;
    local_8 = iVar3;
  }
  iVar3 = param_2;
  iVar7 = param_2 + param_4;
  if (param_4 < 0) {
    uVar6 = uVar6 ^ 0x8000;
    *(uint *)((int)this + 0x3620) = uVar6;
    iVar3 = param_2 + param_4;
    iVar7 = param_2;
  }
  iVar5 = iVar3;
  if (*(int *)((int)this + 0x2b34) != 0) {
    *(uint *)((int)this + 0x3620) = uVar6 ^ 0x8000;
    iVar5 = *(int *)((int)this + 0x9c) - iVar7;
    iVar7 = *(int *)((int)this + 0x9c) - iVar3;
  }
  *(undefined1 *)((int)this + 0x3650) = 1;
  uVar6 = FUN_100118f8(*(void **)((int)this + 0x365c),*(int *)((int)this + 0x2b1c));
  if (uVar6 != 0xffffffff) {
    iVar3 = (**(code **)(**(int **)((int)this + 0x365c) + 0x2c))(uVar6);
    fVar1 = (float)*(int *)(iVar3 + 0x20);
    if (*(int *)(iVar3 + 0x20) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)((int)this + 0x2ce0) = (float)(*(int *)(iVar3 + 0x28) * local_8) / fVar1;
    fVar1 = (float)*(int *)(iVar3 + 0x24);
    if (*(int *)(iVar3 + 0x24) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)((int)this + 0x2ce4) = (float)(*(int *)(iVar3 + 0x2c) * iVar5) / fVar1;
    fVar1 = (float)*(int *)(iVar3 + 0x20);
    if (*(int *)(iVar3 + 0x20) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    iVar4 = (param_3 - local_8) * *(int *)(iVar3 + 0x28);
    fVar2 = (float)iVar4;
    if (iVar4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)((int)this + 0x2ce8) = fVar2 / fVar1;
    fVar1 = (float)*(int *)(iVar3 + 0x24);
    if (*(int *)(iVar3 + 0x24) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    iVar3 = (iVar7 - iVar5) * *(int *)(iVar3 + 0x2c);
    fVar2 = (float)iVar3;
    if (iVar3 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(undefined1 *)((int)this + 0x2dac) = 1;
    *(float *)((int)this + 0x2cec) = fVar2 / fVar1;
  }
  return;
}

