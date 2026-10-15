/*
 * FUN_1002ad60 at 1002ad60
 * undefined __thiscall FUN_1002ad60(void * this, int param_1, int param_2)
 * Address ranges: 1002ad60-1002b0ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002ad60(void *this,int param_1,int param_2)

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
  FUN_10028ee7(*(int *)((int)this + 0x138) + 0x3780);
  local_ec = *(int **)(iVar7 + 0xb8);
  local_e8 = -(uint)(*(int **)(iVar7 + 0xac) != local_ec) & (uint)*(int **)(iVar7 + 0xac);
  local_e0 = *(float *)(iVar7 + 0xc0);
  iVar1 = *(int *)((int)this + 8);
  iVar4 = FUN_1001b500((int)this);
  if ((iVar4 != 0) &&
     (FUN_10043f75(*(void **)(*(int *)((int)this + 0x138) + 0x3180),iVar1,1),
     *(int *)(iVar1 + 0xd70) != 0)) {
    if (local_e8 != 0) {
      piVar5 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
      (**(code **)(*piVar5 + 0xe4))(piVar5,local_ec,0,local_e8,0,*(undefined4 *)(iVar7 + 4));
    }
    FUN_10017e32(*(int *)((int)this + 0x138));
    DAT_10059534 = 0xf;
    iVar2 = *(int *)((int)this + 0x138);
    FUN_10041558(*(void **)(iVar2 + 0x3180),*(int *)(iVar2 + 0x3184),(int *)&DAT_10059510,iVar2,-1);
    iVar2 = *(int *)((int)this + 0x138);
    FUN_100415c7(*(void **)(iVar2 + 0x3180),*(int *)(iVar2 + 0x3184),(int *)&DAT_100594dc,
                 *(int *)(iVar2 + 0x2a74));
    _DAT_1005949c = 0;
    FUN_10041634(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
                 *(int *)(*(int *)((int)this + 0x138) + 0x3184),(uint *)&DAT_10059480);
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
    FUN_100416a7(*(void **)(iVar2 + 0x3180),*(int *)(iVar2 + 0x3184),afStack_b8);
    (**(code **)(*local_ec + 0x28))(local_ec,auStack_34);
    aiStack_c8[0] = 0;
    aiStack_c8[1] = 0;
    aiStack_c8[2] = *(undefined4 *)(*(int *)((int)this + 0x138) + 0xa0);
    uStack_bc = *(undefined4 *)(*(int *)((int)this + 0x138) + 0xa4);
    FUN_1002921e(this,aiStack_c8,*(int *)((int)this + (uint)(iVar4 != 2) * 4 + 0x49c),local_e0,
                 *(undefined4 *)(iVar1 + 0xd78));
    local_ec = *(int **)(iVar1 + 0xd70);
    local_e0 = *(float *)(iVar1 + 0xd80);
    local_e8 = 0;
  }
  iVar1 = *(int *)((int)this + 0x138);
  local_d4 = &PTR_FUN_10053d84;
  local_d0 = this;
  local_cc = iVar7;
  FUN_1001e65a(local_80,this,*(undefined4 *)(iVar1 + 0x3184),*(undefined4 *)(iVar1 + 0x94),
               *(undefined4 *)(*(int *)(iVar1 + 4) + 0xda),
               *(undefined4 *)(*(int *)(iVar1 + 4) + 0xde));
  piVar5 = FUN_10043950(*(void **)(*(int *)((int)this + 0x138) + 0x3180),extraout_ECX);
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
    puVar6 = &DAT_10053dd8;
  }
  uStack_94 = *puVar6;
  uStack_90 = puVar6[1];
  uStack_8c = puVar6[2];
  uStack_88 = puVar6[3];
  uStack_84 = *(undefined4 *)(&DAT_10053cf0 + *(int *)(*(int *)(iVar1 + 4) + 0xca) * 4);
  FUN_10040f23(*(void **)(iVar1 + 0x3180),piVar5,local_ec,local_e0,local_e8,*(float *)(iVar7 + 4),
               param_2,&iStack_a0,
               (undefined4 *)(-(uint)(*(char *)(iVar1 + 0x2bca) != '\0') & (uint)&local_d4));
  FUN_100447ca(*(void **)(*(int *)((int)this + 0x138) + 0x3180),(int)piVar5);
  FUN_10043fb8(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x94),0);
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc1) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc0) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc2) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc3) = 1;
  return;
}

