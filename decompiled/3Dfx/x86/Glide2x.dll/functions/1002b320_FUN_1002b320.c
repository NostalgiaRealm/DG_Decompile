/*
 * FUN_1002b320 at 1002b320
 * undefined __thiscall FUN_1002b320(void * this, uint param_1, uint param_2, uint param_3, byte param_4)
 * Address ranges: 1002b320-1002b53c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002b320(void *this,uint param_1,uint param_2,uint param_3,byte param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  int local_2c;
  int local_28;
  float local_20 [3];
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1002b828((int)this);
  FUN_1002aaf4((void *)((int)this + 0x32b8),'\0',2);
  FUN_10018d00((int)this);
  FUN_1001837f(this);
  piVar1 = (int *)((int)this + 0x2a44);
  if ((*(int *)((int)this + 0x2a40) == 0) || (*piVar1 != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  DAT_10059534 = *(char *)((int)this + 0x2a9c);
  if ((bVar2) || ((*(uint *)((int)this + 0x2bec) & 0xff0000) == 0)) {
    DAT_10059554 = '\x0f';
  }
  else {
    DAT_10059554 = '\0';
  }
  _DAT_1005949c = *(undefined4 *)((int)this + 0x2adc);
  _DAT_100594a8 = *(undefined4 *)((int)this + 0x2a40);
  _DAT_100594ac = *piVar1;
  FUN_10041558(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),(int *)&DAT_10059510,
               piVar1,*(int *)((int)this + 0x2a7c));
  FUN_100415c7(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),(int *)&DAT_100594a8,
               (uint)param_4);
  FUN_10041634(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),(uint *)&DAT_10059480);
  local_28 = 0;
  local_2c = 0;
  iVar3 = FUN_1001c41a(*(int *)((int)this + 0x2964));
  iVar4 = FUN_1001c41a(*(int *)((int)this + 0x2968));
  uVar6 = -(uint)(iVar3 != -1) & iVar3 * 0x104 + 0x33f4 + (int)this;
  iVar5 = extraout_EDX;
  iVar3 = extraout_EDX;
  if (uVar6 != 0) {
    local_28 = *(int *)(uVar6 + 0x20);
    iVar3 = *(int *)(uVar6 + 0x28);
    iVar5 = *(int *)(uVar6 + 0x2c);
    local_2c = *(int *)(uVar6 + 0x24);
  }
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = (float)iVar3;
  if (iVar3 < 0) {
    local_20[2] = local_20[2] + 4.2949673e+09;
  }
  local_14 = (float)iVar5;
  if (iVar5 < 0) {
    local_14 = local_14 + 4.2949673e+09;
  }
  local_10 = 0;
  local_c = 0x3f800000;
  FUN_100416a7(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),local_20);
  uVar8 = 0x1002b4cf;
  fVar7 = FUN_1001c638((int)this,param_1,param_2,param_3);
  *(byte *)((int)this + 0x37a0) = *(byte *)((int)this + 0x37a0) | 1;
  FUN_10017e9c((int)this);
  FUN_1002b1d1((void *)((int)this + 0x32b8),uVar8,param_1,(float)fVar7,local_28,local_2c);
  FUN_1001c6e7(this,uVar6,-(uint)(iVar4 != -1) & iVar4 * 0x104 + 0x33f4 + (int)this,DAT_10059534,
               DAT_10059554);
  FUN_1002acd5((int *)((int)this + 0x32b8));
  FUN_10018db6((int)this);
  *(undefined4 *)((int)this + 0x2bc0) = 0x1010101;
  return;
}

