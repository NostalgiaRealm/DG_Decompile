/*
 * FUN_10023107 at 10023107
 * undefined __thiscall FUN_10023107(void * this, int param_1, int param_2)
 * Address ranges: 10023107-10023493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10023107(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *extraout_ECX;
  undefined4 *puVar6;
  int iVar7;
  int *local_ec;
  uint local_e8;
  float local_e0;
  undefined **local_d4;
  void *local_d0;
  int local_cc;
  int aiStack_c8 [3];
  undefined4 uStack_bc;
  float afStack_b8 [3];
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [76];
  undefined1 auStack_34 [48];
  
  iVar7 = param_1 * 0x104 + 0x13c + (int)this;
  FUN_1001eaa6(*(int *)((int)this + 0x138) + 0x4090);
  local_ec = *(int **)(iVar7 + 0xb8);
  local_e8 = -(uint)(*(int **)(iVar7 + 0xac) != local_ec) & (uint)*(int **)(iVar7 + 0xac);
  local_e0 = *(float *)(iVar7 + 0xc0);
  iVar1 = *(int *)((int)this + 8);
  iVar4 = FUN_1001094e((int)this);
  if ((iVar4 != 0) &&
     (FUN_10049e66(*(void **)(*(int *)((int)this + 0x138) + 0x3680),iVar1,1),
     *(int *)(iVar1 + 0xd70) != 0)) {
    if (local_e8 != 0) {
      piVar5 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
      (**(code **)(*piVar5 + 0xe4))(piVar5,local_ec,0,local_e8,0,*(undefined4 *)(iVar7 + 4));
    }
    FUN_1000c10e(*(int *)((int)this + 0x138));
    DAT_1005f7c4 = 0xf;
    iVar2 = *(int *)((int)this + 0x138);
    FUN_10047449(*(void **)(iVar2 + 0x3680),*(int *)(iVar2 + 0x3684),(int *)&DAT_1005f7a0,iVar2,-1);
    iVar2 = *(int *)((int)this + 0x138);
    FUN_100474b8(*(void **)(iVar2 + 0x3680),*(int *)(iVar2 + 0x3684),(int *)&DAT_1005f768,
                 *(int *)(iVar2 + 0x2c54));
    _DAT_1005f728 = 0;
    FUN_10047525(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
                 *(int *)(*(int *)((int)this + 0x138) + 0x3684),(uint *)&DAT_1005f70c);
    iVar2 = *(int *)((int)this + 0x138);
    afStack_b8[0] = 0.0;
    afStack_b8[1] = 0.0;
    afStack_b8[2] = (float)*(int *)(iVar2 + 0xa0);
    if (*(int *)(iVar2 + 0xa0) < 0) {
      afStack_b8[2] = afStack_b8[2] + 4.2949673e+09;
    }
    fStack_ac = (float)*(int *)(iVar2 + 0xa4);
    if (*(int *)(iVar2 + 0xa4) < 0) {
      fStack_ac = fStack_ac + 4.2949673e+09;
    }
    uStack_a8 = 0;
    uStack_a4 = 0x3f800000;
    FUN_10047598(*(void **)(iVar2 + 0x3680),*(int *)(iVar2 + 0x3684),afStack_b8);
    (**(code **)(*local_ec + 0x28))(local_ec,auStack_34);
    aiStack_c8[0] = 0;
    aiStack_c8[1] = 0;
    aiStack_c8[2] = *(undefined4 *)(*(int *)((int)this + 0x138) + 0xa0);
    uStack_bc = *(undefined4 *)(*(int *)((int)this + 0x138) + 0xa4);
    FUN_10021561(this,aiStack_c8,*(int *)((int)this + (uint)(iVar4 != 2) * 4 + 0x8ac),local_e0,
                 *(undefined4 *)(iVar1 + 0xd78));
    local_ec = *(int **)(iVar1 + 0xd70);
    local_e0 = *(float *)(iVar1 + 0xd80);
    local_e8 = 0;
  }
  iVar1 = *(int *)((int)this + 0x138);
  local_d4 = &PTR_FUN_10059360;
  local_d0 = this;
  local_cc = iVar7;
  FUN_10012e6a(local_80,this,*(undefined4 *)(iVar1 + 0x3684),*(undefined4 *)(iVar1 + 0x94),
               *(undefined4 *)(*(int *)(iVar1 + 4) + 0xda),
               *(undefined4 *)(*(int *)(iVar1 + 4) + 0xde));
  piVar5 = FUN_10049841(*(void **)(*(int *)((int)this + 0x138) + 0x3680),extraout_ECX);
  iVar1 = *(int *)((int)this + 0x138);
  if (((*(byte *)(*(int *)(iVar1 + 4) + 0xc2) & 4) == 0) && (*(char *)((int)this + 0x126) == '\0'))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iStack_a0 = *(int *)(*(int *)(iVar1 + 4) + 0xc);
  puVar6 = (undefined4 *)(iVar1 + 0xbc);
  uStack_9c = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10);
  uStack_98 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x14);
  if (!bVar3) {
    puVar6 = &DAT_100593b4;
  }
  uStack_94 = *puVar6;
  uStack_90 = puVar6[1];
  uStack_8c = puVar6[2];
  uStack_88 = puVar6[3];
  uStack_84 = *(undefined4 *)(&DAT_10059190 + *(int *)(*(int *)(iVar1 + 4) + 0xca) * 4);
  FUN_10046e14(*(void **)(iVar1 + 0x3680),piVar5,local_ec,local_e0,local_e8,*(float *)(iVar7 + 4),
               param_2,&iStack_a0,
               (undefined4 *)(-(uint)(*(char *)(iVar1 + 0x2db2) != '\0') & (uint)&local_d4));
  FUN_1004a6bb(*(void **)(*(int *)((int)this + 0x138) + 0x3680),(int)piVar5);
  FUN_10049ea9(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
               *(int *)(*(int *)((int)this + 0x138) + 0x94),0);
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2da9) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2da8) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2daa) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2dab) = 1;
  return;
}

