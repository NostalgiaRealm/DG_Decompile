/*
 * FUN_10020f89 at 10020f89
 * undefined __thiscall FUN_10020f89(void * this, int param_1, int param_2)
 * Address ranges: 10020f89-10021418
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020f89(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *extraout_ECX;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  uint local_21c;
  uint local_214;
  undefined4 local_20c;
  undefined **local_1fc;
  void *local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0 [3];
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined1 local_198 [72];
  int local_150 [11];
  undefined1 local_124;
  
  iVar11 = param_1 * 0x120 + 0x140 + (int)this;
  local_21c = *(uint *)(iVar11 + 0xbc);
  uVar9 = -(uint)(*(uint *)(iVar11 + 0xb8) != local_21c) & *(uint *)(iVar11 + 0xb8);
  local_214 = *(int *)(iVar11 + 0xc0) + 1;
  iVar1 = *(int *)((int)this + 8);
  iVar5 = FUN_1001b500((int)this);
  if (iVar5 != 0) {
    FUN_10043f75(*(void **)(*(int *)((int)this + 0x138) + 0x3180),iVar1,1);
    if (*(int *)(iVar1 + 0xd7c) != 0) {
      bVar4 = FUN_1001615a(*(int *)((int)this + 0x138));
      local_20c = CONCAT31(local_20c._1_3_,bVar4);
      if (uVar9 != 0) {
        FUN_1003d12e(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 0x1304),local_21c,0
                     ,0,0x1000);
        FUN_1003d12e(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 0x1304),uVar9,0,0,
                     0x2000);
        FUN_1003df9b(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 0x1304),local_21c,0,
                     uVar9,0,*(undefined4 *)(iVar11 + 4));
      }
      FUN_100165fc(*(void **)((int)this + 0x138),bVar4,'\0');
      iVar2 = *(int *)(*(int *)((int)this + 8) + 0x2c);
      piVar7 = &DAT_100518e8;
      piVar12 = local_150;
      for (iVar8 = 0x52; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar12 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar12 = piVar12 + 1;
      }
      uVar3 = *(undefined4 *)(&DAT_10051e08 + iVar2 * 4);
      local_124 = 0xf;
      uVar6 = FUN_100173cd((void *)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 0x1600),
                           local_150);
      *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31d8) = uVar6;
      uVar6 = FUN_1001747c((void *)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 0x15f0),
                           &DAT_10051850);
      *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31e4) = uVar6;
      uVar6 = FUN_100172bb((void *)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 0x1620),
                           (uint *)&DAT_10051884);
      *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31e0) = uVar6;
      *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31f8) = uVar3;
      uVar9 = 0;
      *(undefined4 *)(*(int *)((int)this + 0x138) + 0x31fc) = 0;
      *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3218) = 0;
      *(undefined4 *)(*(int *)((int)this + 0x138) + 0x321c) = 1;
      *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3220) = 0;
      *(undefined1 *)(*(int *)((int)this + 0x138) + 0x3236) = 1;
      iVar2 = *(int *)((int)this + 0x138);
      local_1d0 = 0;
      local_1cc = 0;
      local_1c8 = (float)*(int *)(iVar2 + 0xa0);
      if (*(int *)(iVar2 + 0xa0) < 0) {
        local_1c8 = local_1c8 + 4.2949673e+09;
      }
      local_1c4 = (float)*(int *)(iVar2 + 0xa4);
      if (*(int *)(iVar2 + 0xa4) < 0) {
        local_1c4 = local_1c4 + 4.2949673e+09;
      }
      local_1c0 = 0;
      local_1bc = 0x3f800000;
      FUN_1003def1(*(int *)(*(int *)(iVar2 + 0x3188) + 0x1304),1,(int)&local_1d0);
      iVar2 = *(int *)((int)this + 0x138);
      local_1f0 = 0;
      local_1ec = 0;
      local_1e8 = *(undefined4 *)(iVar2 + 0xa0);
      local_1e4 = *(undefined4 *)(iVar2 + 0xa4);
      FUN_1003de66(*(int *)(*(int *)(iVar2 + 0x3188) + 0x1304),1,(int)&local_1f0);
      local_1e0[0] = 0;
      local_1e0[2] = *(undefined4 *)(*(int *)((int)this + 0x138) + 0xa0);
      local_1d4 = *(undefined4 *)(*(int *)((int)this + 0x138) + 0xa4);
      local_1e0[1] = 0;
      FUN_1001eb9b(this,local_1e0,*(int *)((int)this + (uint)(iVar5 != 2) * 4 + 0x4f4),local_214,
                   *(uint *)(iVar1 + 0xd88),local_21c,*(uint *)(iVar1 + 0xd7c),local_20c);
      FUN_10016d60(*(int *)((int)this + 0x138));
      local_21c = *(uint *)(iVar1 + 0xd7c);
      local_214 = *(uint *)(iVar1 + 0xd84);
    }
  }
  iVar1 = *(int *)((int)this + 0x138);
  local_1fc = &PTR_FUN_10053cec;
  local_1f8 = this;
  local_1f4 = iVar11;
  FUN_1001e65a(local_198,this,*(undefined4 *)(iVar1 + 0x3184),*(undefined4 *)(iVar1 + 0x94),
               *(undefined4 *)(*(int *)(iVar1 + 4) + 0xda),
               *(undefined4 *)(*(int *)(iVar1 + 4) + 0xde));
  piVar7 = FUN_10043950(*(void **)(*(int *)((int)this + 0x138) + 0x3180),extraout_ECX);
  iVar1 = *(int *)((int)this + 0x138);
  if (((*(byte *)(*(int *)(iVar1 + 4) + 0xc2) & 4) == 0) && (*(char *)((int)this + 0x126) == '\0'))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_1b8 = *(int *)(*(int *)(iVar1 + 4) + 0xc);
  puVar10 = (undefined4 *)(iVar1 + 0xbc);
  local_1b4 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10);
  local_1b0 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x14);
  if (!bVar4) {
    puVar10 = &DAT_10053d54;
  }
  local_1ac = *puVar10;
  uStack_1a8 = puVar10[1];
  uStack_1a4 = puVar10[2];
  uStack_1a0 = puVar10[3];
  local_19c = *(undefined4 *)(&DAT_10053cf0 + *(int *)(*(int *)(iVar1 + 4) + 0xca) * 4);
  FUN_10046458(*(void **)(iVar1 + 0x3180),piVar7,local_21c,local_214,uVar9,*(float **)(iVar11 + 4),
               param_2,&local_1b8,
               (undefined4 *)(-(uint)(*(char *)(iVar1 + 0x2bca) != '\0') & (uint)&local_1fc));
  FUN_100447ca(*(void **)(*(int *)((int)this + 0x138) + 0x3180),(int)piVar7);
  FUN_10043fb8(*(void **)(*(int *)((int)this + 0x138) + 0x3180),
               *(int *)(*(int *)((int)this + 0x138) + 0x94),0);
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc1) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc0) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc2) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2bc3) = 1;
  return;
}

