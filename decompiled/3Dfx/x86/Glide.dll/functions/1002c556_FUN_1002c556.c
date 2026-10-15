/*
 * FUN_1002c556 at 1002c556
 * undefined __thiscall FUN_1002c556(void * this, int param_1, int param_2, uint param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 1002c556-1002c6f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002c556(void *this,int param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (**(code **)(*(int *)this + 0x150))();
  fVar1 = (float)(int)param_3;
  if ((int)param_3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)((int)this + param_1 * 0x180 + 0x2cf0) = fVar1;
  fVar1 = (float)(int)param_4;
  if ((int)param_4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(int *)((int)this + param_1 * 0x180 + 0x2d00) = param_2;
  uVar2 = param_6 & 3;
  *(uint *)((int)this + param_1 * 0x180 + 0x2cf8) = param_4;
  *(uint *)((int)this + param_1 * 0x180 + 0x2cfc) = param_3;
  *(float *)((int)this + param_1 * 0x180 + 0x2cf4) = fVar1;
  *(uint *)((int)this + param_1 * 0x180 + 0x2d18) =
       (uint)(uVar2 != 3) | (-(uint)(uVar2 != 2) & 0xfffffffe) + 2 |
       *(uint *)((int)this + param_1 * 0x180 + 0x2d18) & 0xfffffffc;
  if (uVar2 == 1) {
    if (param_4 == param_3) goto LAB_1002c630;
    *(uint *)((int)this + param_1 * 0x180 + 0x2cf8) = param_4 & 0xfffffffe;
    uVar2 = param_3 + 1 & 0xfffffffe;
  }
  else {
    if ((uVar2 != 2) || (param_4 == param_3)) goto LAB_1002c630;
    if (((param_4 & 1) == 0) && (param_4 != 0)) {
      *(uint *)((int)this + param_1 * 0x180 + 0x2cf8) = param_4 - 1;
    }
    if ((param_3 & 1) != 0) goto LAB_1002c630;
    uVar2 = param_3 + 1;
  }
  *(uint *)((int)this + param_1 * 0x180 + 0x2cfc) = uVar2;
LAB_1002c630:
  uVar2 = 0;
  do {
    iVar4 = uVar2 * 0x20;
    *(undefined4 *)((int)this + iVar4 + param_1 * 0x180 + 0x2d30) =
         *(undefined4 *)(param_5 + uVar2 * 0x10);
    fVar1 = (float)*(int *)(param_5 + 4 + uVar2 * 0x10);
    if (*(int *)(param_5 + 4 + uVar2 * 0x10) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)((int)this + iVar4 + param_1 * 0x180 + 0x2d38) = fVar1;
    fVar1 = (float)*(int *)(param_5 + 8 + uVar2 * 0x10);
    if (*(int *)(param_5 + 8 + uVar2 * 0x10) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)((int)this + iVar4 + param_1 * 0x180 + 0x2d3c) = fVar1;
    fVar1 = (float)*(int *)(param_5 + 0xc + uVar2 * 0x10);
    if (*(int *)(param_5 + 0xc + uVar2 * 0x10) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)((int)this + iVar4 + param_1 * 0x180 + 0x2d40) = fVar1;
    uVar3 = *(uint *)(param_5 + 4 + uVar2 * 0x10);
    if (uVar3 < *(uint *)(param_5 + 8 + uVar2 * 0x10)) {
      uVar3 = *(uint *)(param_5 + 8 + uVar2 * 0x10);
    }
    fVar1 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    uVar2 = uVar2 + 1;
    *(float *)((int)this + iVar4 + param_1 * 0x180 + 0x2d34) = fVar1 * 0.00390625;
  } while (uVar2 < 9);
  FUN_1002c4ed(this,param_1);
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(undefined1 *)(param_1 + 0x3153 + (int)this) = 1;
  return;
}

