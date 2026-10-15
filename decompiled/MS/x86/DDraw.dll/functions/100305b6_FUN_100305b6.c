/*
 * FUN_100305b6 at 100305b6
 * undefined4 __thiscall FUN_100305b6(void * this, int param_1)
 * Address ranges: 100305b6-10030a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100305b6(void *this,int param_1)

{
  int *piVar1;
  void *this_00;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_EDX;
  uint uVar10;
  uint extraout_EDX_00;
  uint *puVar11;
  undefined4 unaff_EDI;
  undefined4 uVar12;
  uint *puVar13;
  byte bVar14;
  int *piVar15;
  byte local_65;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte local_3c;
  int local_38 [4];
  uint local_28 [9];
  
  local_64 = *(uint *)((int)this + 0x15c);
  local_60 = *(uint *)((int)this + 0x158);
  puVar11 = (uint *)((int)this + 0x198);
  puVar13 = local_28;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  uVar12 = 0x80070057;
  local_4c = *(int *)((int)this + 0x160);
  local_5c = *(uint *)((int)this + 0x1cc);
  uVar9 = *(uint *)((int)this + 0x1b8) >> 0xc;
  bVar2 = true;
  bVar3 = true;
  if ((*(byte *)(param_1 + 4) & 4) == 0) goto LAB_10030665;
  local_64 = *(uint *)(param_1 + 0xc);
  if ((local_64 == 0) || (0x4000 < local_64)) {
LAB_10030644:
    bVar2 = false;
  }
  else if ((uVar9 & 1) != 0) {
    uVar5 = FUN_10003301(local_64);
    if ((char)uVar5 == '\0') goto LAB_10030644;
    bVar2 = true;
  }
  local_4c = *(int *)(param_1 + 0x10);
  bVar3 = false;
  if (local_4c != 0) {
    bVar3 = bVar2;
  }
LAB_10030665:
  if (((*(byte *)(param_1 + 4) & 2) != 0) &&
     (((local_60 = *(uint *)(param_1 + 8), local_60 == 0 || (0x4000 < local_60)) ||
      (((uVar9 & 1) != 0 && (uVar5 = FUN_10003301(local_60), (char)uVar5 == '\0')))))) {
    bVar3 = false;
  }
  bVar2 = bVar3;
  if (((*(uint *)(param_1 + 4) & 0x800) != 0) && (bVar2 = false, *(int *)(param_1 + 0x24) != 0)) {
    bVar2 = bVar3;
  }
  local_50 = 0xffffffff;
  if ((*(uint *)(param_1 + 4) & 0x1000) != 0) {
    puVar11 = (uint *)(param_1 + 0x48);
    puVar13 = local_28;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    if ((uVar9 & 1) == 0) {
      local_5c = FUN_10031b38(*(void **)((int)this + 0xfc),param_1);
    }
    else {
      local_5c = FUN_10031c48(*(void **)((int)this + 0xfc),param_1);
    }
    uVar12 = 0x88760091;
    if (local_5c != 0xffffffff) {
      uVar12 = 0x80070057;
    }
    bVar3 = false;
    if (local_5c != 0xffffffff) {
      bVar3 = bVar2;
    }
    bVar2 = bVar3;
    if ((uVar9 & 1) == 0) {
      local_28[0] = 0x20;
    }
  }
  if (!bVar2) {
    return uVar12;
  }
  if (((local_64 != *(uint *)((int)this + 0x15c)) || (local_60 != *(uint *)((int)this + 0x158))) ||
     (uVar12 = FUN_10031a59(local_28,(uint *)((int)this + 0x198),0), (char)uVar12 == '\0')) {
    if (*(int *)((int)this + 0x10c) != 0) {
      return 0x80004001;
    }
    if (*(int *)((int)this + 0x110) != 0) {
      return 0x80004001;
    }
    if (*(int *)((int)this + 0x118) != 0) {
      return 0x80004001;
    }
    if (*(int *)((int)this + 0x120) != 0) {
      return 0x80004001;
    }
    if (*(int *)((int)this + 0x124) != 0) {
      return 0x80004001;
    }
    if (*(int *)((int)this + 0x128) != 0) {
      return 0x80004001;
    }
    if (*(int *)((int)this + 300) != 0) {
      return 0x80004001;
    }
    if (*(int *)((int)this + 0x130) != 0) {
      return 0x80004001;
    }
    iVar8 = (int)this + 0x150;
    local_65 = 0;
    uVar9 = *(uint *)((int)this + 0x1b8) >> 0xb & 1 |
            -(uint)((*(uint *)((int)this + 0x1bc) & 0x20010) != 0) & 2;
    piVar1 = *(int **)(*(int *)((int)this + 4) + 0x4c);
    if ((*(uint *)((int)this + 0x1b8) & 0x2001) == 0) {
      uVar12 = FUN_100321a7(iVar8);
      uVar10 = local_60;
      local_64 = local_5c;
      iVar8 = (**(code **)(*piVar1 + 0x2c))(extraout_EDX,local_60,local_5c,1,uVar12,uVar9);
      bVar14 = (byte)(uVar10 >> 0x10);
    }
    else {
      FUN_100253c5(*(void **)((int)this + 0xfc),local_38);
      piVar15 = local_38;
      cVar4 = '\x01';
      iVar6 = FUN_100321a7(iVar8);
      FUN_100314b0(this,&local_48,local_64,local_60,iVar6,piVar15,cVar4);
      local_65 = local_3c;
      uVar12 = FUN_100321a7(iVar8);
      iVar8 = (**(code **)(*piVar1 + 0x28))
                        (local_48,local_44,local_64,local_60,local_40,local_5c,1,uVar12,uVar9);
      bVar14 = (byte)((uint)local_40 >> 0x10);
    }
    if ((bVar14 & iVar8 != 0) == 0) {
      return unaff_EDI;
    }
    FUN_10005a15(*(int *)((int)this + 4) + 0x4c);
    uVar12 = FUN_10031350((int)this);
    if ((char)uVar12 == '\0') {
      FUN_100065ae(*(void **)((int)this + 4));
    }
    FUN_1000650e(*(int *)((int)this + 4));
    (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x50) + 0x10))();
    *(int *)(*(int *)((int)this + 4) + 0x50) = iVar8;
    uVar9 = *(uint *)(*(int *)((int)this + 4) + 200);
    *(uint *)(*(int *)((int)this + 4) + 200) = (local_65 ^ uVar9) & 1 ^ uVar9;
    *(uint *)((int)this + 0x15c) = local_64;
    puVar11 = local_28;
    puVar13 = (uint *)((int)this + 0x198);
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    *(uint *)((int)this + 0x158) = local_60;
    FUN_10031dbb((uint)this);
    cVar4 = FUN_10031fa9((int)this);
    if ((cVar4 == '\0') || ((*(uint *)(param_1 + 4) & 0x800) != 0)) {
      local_50 = 0;
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 0xc4) = local_50;
  }
  uVar9 = *(uint *)((int)this + 0x154);
  uVar10 = *(uint *)(param_1 + 4) & 0x800;
  if (uVar10 == 0) {
    local_4c = 0;
    uVar12 = 0;
    uVar7 = uVar9 & 0xfffff7ff;
  }
  else {
    uVar12 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = uVar9 | 0x800;
  }
  *(uint *)((int)this + 0x154) = uVar7;
  *(undefined4 *)((int)this + 0x174) = uVar12;
  *(int *)((int)this + 0x160) = local_4c;
  uVar7 = FUN_10031403((int)this + 0x150);
  FUN_100313c3(extraout_ECX);
  iVar8 = FUN_1003137a(extraout_ECX_00);
  this_00 = *(void **)((int)this + 4);
  iVar6 = (-(uint)((*(uint *)((int)this + 0x1b8) & 0x800) != 0) & 3) + 1;
  FUN_10004dd8(this_00,*(int *)((int)this + 0x15c),*(uint *)((int)this + 0x158),iVar6,
               *(uint *)((int)this + 0x1a4),iVar8,extraout_EDX_00,uVar7,iVar6,iVar6);
  *(undefined1 *)((int)this_00 + 0x1f) = 0;
  if ((uVar9 & 0x800) != uVar10) {
    FUN_10005a15(*(int *)((int)this + 4) + 0x4c);
    uVar12 = FUN_10031350((int)this);
    if ((char)uVar12 == '\0') {
      FUN_100065ae(*(void **)((int)this + 4));
    }
    FUN_1000650e(*(int *)((int)this + 4));
    FUN_1002fb13(this,'\x01');
  }
  FUN_100310b8((int)this);
  return 0;
}

