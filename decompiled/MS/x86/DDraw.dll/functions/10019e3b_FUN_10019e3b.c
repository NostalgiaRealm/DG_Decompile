/*
 * FUN_10019e3b at 10019e3b
 * undefined __thiscall FUN_10019e3b(void * this, int param_1, int param_2)
 * Address ranges: 10019e3b-1001a1b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019e3b(void *this,int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  void *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  char local_bc;
  float local_88 [3];
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_14;
  int local_10;
  int local_c [2];
  
  iVar12 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_100122bc(*(void **)((int)this + 0xe0),2,*(int *)((int)this + 8));
  }
  iVar5 = *(int *)((int)this + 0x1c);
  uVar18 = 0x16;
  if (iVar5 != 0) {
    if (*(char *)((int)this + 0x1bc) == '\0') {
      uVar18 = *(uint *)(&DAT_10062890 + iVar5 * 4);
    }
    else {
      uVar18 = 6;
    }
    uVar18 = (*(uint *)(&DAT_100629e8 + iVar5 * 4) & 7 | 0xf8000020) << 4 | uVar18 & 0xf;
  }
  uVar13 = FUN_1001addd(this);
  iVar17 = 1 << ((byte)param_1 & 0x1f);
  this_00 = *(void **)((int)this + 0xe0);
  iVar5 = *(int *)((int)this + 0x1c);
  iVar6 = *(int *)((int)this + 0x14);
  fVar19 = (float)((double)iVar17 + (double)(&DAT_10066fd0)[-(iVar17 >> 0x1f)]);
  dVar1 = (double)(&DAT_10066fd0)[-(iVar6 >> 0x1f)];
  iVar17 = *(int *)((int)this + 0x18);
  dVar2 = (double)(&DAT_10066fd0)[-(iVar17 >> 0x1f)];
  iVar7 = *(int *)((int)this + 0x130);
  dVar3 = (double)(&DAT_10066fd0)[-(iVar7 >> 0x1f)];
  iVar8 = *(int *)((int)this + 0x134);
  dVar4 = (double)(&DAT_10066fd0)[-(iVar8 >> 0x1f)];
  uVar9 = *(undefined4 *)((int)this + 0x148);
  uVar10 = *(undefined4 *)((int)this + 0x184);
  uVar11 = *(undefined4 *)((int)this + 0x54);
  piVar14 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15dc),&local_14,
                         *(uint *)((int)this + 0x158),iVar12);
  piVar15 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15dc),&local_10,
                         *(uint *)((int)this + 0x194),iVar12);
  piVar16 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),local_c,uVar13,0);
  local_28 = *(undefined4 *)((int)this + 0x170);
  local_24 = *(undefined4 *)((int)this + 0x1ac);
  local_bc = '\0';
  if (uVar18 < 0x24) {
    if (((uVar18 == 4) || (uVar18 == 5)) || ((uVar18 == 6 || (uVar18 == 7)))) goto LAB_1001a07f;
    local_bc = '\0';
    if (uVar18 == 0x22) goto LAB_1001a05d;
  }
  else if ((((uVar18 == 0x24) || (uVar18 == 0x25)) || (uVar18 == 0x26)) ||
          (local_bc = '\0', uVar18 == 0x27)) {
LAB_1001a05d:
    local_bc = '\x01';
  }
  FUN_10020680(this_00,iVar5,0,0,0,0,'\0','\0',0);
LAB_1001a07f:
  local_68 = param_1;
  local_5c = param_1;
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  local_78 = 0;
  local_74 = 0;
  local_64 = 0xffffffff;
  local_58 = param_2;
  local_3c = 0;
  local_30 = 0;
  local_20 = 0;
  if (piVar14 == (int *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = *piVar14;
  }
  if (piVar15 == (int *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = *piVar15;
  }
  if (piVar16 == (int *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = *piVar16;
  }
  local_34 = 0;
  local_2c = 0;
  local_88[2] = (float)((double)iVar6 + dVar1) / fVar19;
  local_7c = (float)((double)iVar17 + dVar2) / fVar19;
  local_70 = (float)((double)iVar7 + dVar3) / fVar19;
  local_6c = (float)((double)iVar8 + dVar4) / fVar19;
  local_60 = iVar12;
  local_54 = iVar12;
  local_50 = uVar9;
  local_4c = uVar10;
  local_40 = uVar11;
  FUN_1001038c(this_00,local_88,iVar5,iVar5,uVar18,local_bc,(float *)0x0,0.0);
  return;
}

