/*
 * FUN_1001ee4e at 1001ee4e
 * undefined __thiscall FUN_1001ee4e(void * this, uint param_1, uint param_2, uint param_3, byte param_4)
 * Address ranges: 1001ee4e-1001f08e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001ee4e(void *this,uint param_1,uint param_2,uint param_3,byte param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  int local_34;
  int local_30;
  float local_20 [3];
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1001f4a7((int)this);
  FUN_1001e627((void *)((int)this + 0x3438),'\0',2);
  FUN_1000c6f4((int)this);
  FUN_10010bce(this,-1);
  FUN_1000bdc7(this);
  piVar1 = (int *)((int)this + 0x2ae4);
  if ((*(int *)((int)this + 0x2ae0) == 0) || (*piVar1 != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  DAT_1005b5ec = *(char *)((int)this + 0x2b3c);
  if ((bVar2) || ((*(uint *)((int)this + 0x2c8c) & 0xff0000) == 0)) {
    DAT_1005b60c = '\x0f';
  }
  else {
    DAT_1005b60c = '\0';
  }
  _DAT_1005b554 = *(undefined4 *)((int)this + 0x2b7c);
  _DAT_1005b560 = *(undefined4 *)((int)this + 0x2ae0);
  _DAT_1005b564 = *piVar1;
  FUN_10044040(*(void **)((int)this + 0x3300),*(int *)((int)this + 0x3304),(int *)&DAT_1005b5c8,
               piVar1,*(int *)((int)this + 0x2b1c));
  FUN_100440af(*(void **)((int)this + 0x3300),*(int *)((int)this + 0x3304),(int *)&DAT_1005b560,
               (uint)param_4);
  FUN_1004411c(*(void **)((int)this + 0x3300),*(int *)((int)this + 0x3304),(uint *)&DAT_1005b538);
  piVar1 = (int *)((int)this + 0x3438);
  local_30 = 0;
  local_34 = 0;
  uVar3 = FUN_1001059c(piVar1,*(int *)((int)this + 0x29e0));
  uVar4 = FUN_1001059c(piVar1,*(int *)((int)this + 0x29e4));
  uVar3 = -(uint)(uVar3 != 0xffffffff) & uVar3 * 0x104 + 0x3574 + (int)this;
  if (uVar3 == 0) {
    iVar5 = 0;
    iVar6 = iVar5;
  }
  else {
    local_30 = *(int *)(uVar3 + 0x20);
    iVar5 = *(int *)(uVar3 + 0x28);
    local_34 = *(int *)(uVar3 + 0x24);
    iVar6 = *(int *)(uVar3 + 0x2c);
  }
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = (float)iVar5;
  if (iVar5 < 0) {
    local_20[2] = local_20[2] + 4.2949673e+09;
  }
  local_14 = (float)iVar6;
  if (iVar6 < 0) {
    local_14 = local_14 + 4.2949673e+09;
  }
  local_10 = 0;
  local_c = 0x3f800000;
  FUN_1004418f(*(void **)((int)this + 0x3300),*(int *)((int)this + 0x3304),local_20);
  uVar8 = 0x1001f026;
  fVar7 = FUN_10010904((int)this,param_1,param_2,param_3);
  *(byte *)((int)this + 0x3edc) = *(byte *)((int)this + 0x3edc) | 1;
  FUN_1000b917((int)this);
  FUN_1001ecff(piVar1,uVar8,param_1,(float)fVar7,local_30,local_34);
  FUN_100109b3(this,uVar3,-(uint)(uVar4 != 0xffffffff) & uVar4 * 0x104 + 0x3574 + (int)this,
               DAT_1005b5ec,DAT_1005b60c);
  FUN_1001e803(piVar1);
  FUN_1000c7aa((int)this);
  *(undefined4 *)((int)this + 0x2c60) = 0x1010101;
  return;
}

