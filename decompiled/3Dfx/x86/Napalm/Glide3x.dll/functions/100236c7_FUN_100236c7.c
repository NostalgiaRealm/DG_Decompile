/*
 * FUN_100236c7 at 100236c7
 * undefined __thiscall FUN_100236c7(void * this, uint param_1, uint param_2, uint param_3, byte param_4)
 * Address ranges: 100236c7-1002391f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100236c7(void *this,uint param_1,uint param_2,uint param_3,byte param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  int local_30;
  int local_2c;
  float local_20 [3];
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1001f054((int)this);
  FUN_10022ea0((void *)((int)this + 0x37b8),'\0',2);
  FUN_1000cf4c((int)this);
  FUN_10011f37(this,-1);
  FUN_1000c628(this);
  piVar1 = (int *)((int)this + 0x2c24);
  if ((*(int *)((int)this + 0x2c20) == 0) || (*piVar1 != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  DAT_1005f7c4 = *(char *)((int)this + 0x2c7c);
  if ((bVar2) || ((*(uint *)((int)this + 0x2ddc) & 0xff0000) == 0)) {
    DAT_1005f7e4 = '\x0f';
  }
  else {
    DAT_1005f7e4 = '\0';
  }
  _DAT_1005f728 = *(undefined4 *)((int)this + 0x2cbc);
  _DAT_1005f734 = *(undefined4 *)((int)this + 0x2c20);
  _DAT_1005f738 = *piVar1;
  _DAT_1005f740 = *(undefined4 *)((int)this + 0x2c2c);
  FUN_10047449(*(void **)((int)this + 0x3680),*(int *)((int)this + 0x3684),(int *)&DAT_1005f7a0,
               piVar1,*(int *)((int)this + 0x2c5c));
  FUN_100474b8(*(void **)((int)this + 0x3680),*(int *)((int)this + 0x3684),(int *)&DAT_1005f734,
               (uint)param_4);
  FUN_10047525(*(void **)((int)this + 0x3680),*(int *)((int)this + 0x3684),(uint *)&DAT_1005f70c);
  piVar1 = (int *)((int)this + 0x37b8);
  local_2c = 0;
  local_30 = 0;
  uVar4 = FUN_100118f8(piVar1,*(int *)((int)this + 0x2b1c));
  uVar5 = FUN_100118f8(piVar1,*(int *)((int)this + 0x2b20));
  uVar4 = -(uint)(uVar4 != 0xffffffff) & uVar4 * 0x104 + 0x38f4 + (int)this;
  if (uVar4 == 0) {
    iVar6 = 0;
    iVar7 = iVar6;
  }
  else {
    local_2c = *(int *)(uVar4 + 0x20);
    iVar6 = *(int *)(uVar4 + 0x28);
    local_30 = *(int *)(uVar4 + 0x24);
    iVar7 = *(int *)(uVar4 + 0x2c);
  }
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = (float)iVar6;
  if (iVar6 < 0) {
    local_20[2] = local_20[2] + 4.2949673e+09;
  }
  local_14 = (float)iVar7;
  if (iVar7 < 0) {
    local_14 = local_14 + 4.2949673e+09;
  }
  local_10 = 0;
  local_c = 0x3f800000;
  FUN_10047598(*(void **)((int)this + 0x3680),*(int *)((int)this + 0x3684),local_20);
  cVar3 = '\0';
  if (uVar4 != 0) {
    cVar3 = FUN_100165de(uVar4);
  }
  uVar9 = 0x100238b7;
  fVar8 = FUN_10011c60((int)this,param_1,param_2,param_3,cVar3);
  *(byte *)((int)this + 0x425c) = *(byte *)((int)this + 0x425c) | 1;
  FUN_1000c178((int)this);
  FUN_10023578(piVar1,uVar9,param_1,(float)fVar8,local_2c,local_30);
  FUN_10011d1c(this,uVar4,-(uint)(uVar5 != 0xffffffff) & uVar5 * 0x104 + 0x38f4 + (int)this,
               DAT_1005f7c4,DAT_1005f7e4);
  FUN_1002307c(piVar1);
  FUN_1000d002((int)this);
  *(undefined4 *)((int)this + 0x2da8) = 0x1010101;
  return;
}

