/*
 * FUN_10041fc8 at 10041fc8
 * undefined FUN_10041fc8(void)
 * Address ranges: 10041fc8-1004251f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041fc8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  ulonglong extraout_x13;
  ulonglong extraout_x14;
  int extraout_w15;
  undefined4 uVar16;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  piVar1 = (int *)(param_1 + 0x138);
  FUN_10024538(*piVar1,0);
  puVar2 = (uint *)(param_2 + 0x24);
  pcVar3 = (char *)(param_2 + 0x48);
  *(undefined4 *)(*piVar1 + 0x2c78) = *(undefined4 *)(param_2 + 0x5c);
  *(float *)(*piVar1 + 0x2bd0) = (float)*(uint *)(param_2 + 0x20);
  *(float *)(*piVar1 + 0x2bd4) = (float)*puVar2;
  *(undefined1 *)(*piVar1 + 0x3150) = 1;
  uVar6 = *(undefined4 *)(*piVar1 + 0x2ac4);
  *(undefined4 *)(*piVar1 + 0x2ac4) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc2) = 1;
  if (*(char *)(param_2 + 0x7d) == '\0') {
    DAT_1009f364 = 0xf;
    DAT_1009f344 = 8;
    if (*pcVar3 == '\0') {
      DAT_1009f344 = DAT_1009f364;
    }
    if (*pcVar3 == '\0') {
      DAT_1009f364 = 0;
    }
    if ((*pcVar3 != '\0') &&
       ((*(int *)(param_2 + 0x10) == 5 || ((*(uint *)(*piVar1 + 0x2964) >> 7 & 1) != 0)))) {
      DAT_1009f344 = 0;
    }
    FUN_10067140(*(undefined4 *)(*piVar1 + 0x3180),*(undefined4 *)(*piVar1 + 0x3184),&DAT_1009f320);
    DAT_1009f460 = 0x100000001;
    iVar11 = *piVar1;
    puVar5 = &DAT_1009f460;
    if (*pcVar3 == '\0') {
      puVar5 = (undefined8 *)0x1009f428;
    }
    FUN_100674a8(*(undefined4 *)(iVar11 + 0x3180),*(undefined4 *)(iVar11 + 0x3184),puVar5,
                 *(undefined4 *)(iVar11 + 0x2a78));
    FUN_10067780(*(undefined4 *)(*piVar1 + 0x3180),*(undefined4 *)(*piVar1 + 0x3184),&DAT_1009f498);
    DAT_1009f434 = 0;
  }
  else {
    FUN_10023a80(*piVar1);
  }
  local_58 = 0;
  local_48 = 0;
  local_50 = (float)*(uint *)(param_2 + 0x28);
  puVar4 = (uint *)(param_2 + 0x2c);
  fStack_4c = (float)*puVar4;
  local_44 = 0x3f800000;
  uVar10 = FUN_10067af0(*(undefined4 *)(*piVar1 + 0x3180),*(undefined4 *)(*piVar1 + 0x3184),
                        &local_58);
  if ((*(uint *)(param_2 + 0x28) != *(uint *)(param_2 + 0x20)) || (*puVar4 != *puVar2)) {
    uVar10 = FUN_1002a378(uVar10,*(undefined4 *)(*piVar1 + 0x2c78),*(undefined4 *)(*piVar1 + 0x2c74)
                         );
  }
  iVar11 = *piVar1;
  uVar10 = FUN_1002c2c0(uVar10,*(uint *)(iVar11 + 0x2964) & 0x7f);
  iVar13 = (int)uVar10;
  iVar9 = FUN_1002c2c0(uVar10,*(undefined4 *)(iVar11 + 0x2968));
  iVar11 = param_1 + iVar13 * 0x104 + 0x13c;
  if (iVar13 == -1) {
    iVar11 = 0;
  }
  if (extraout_w11 == 0) {
    iVar11 = param_2;
  }
  iVar13 = param_1 + iVar9 * 0x104 + 0x13c;
  if (iVar9 == -1) {
    iVar13 = 0;
  }
  iVar9 = param_2;
  if (extraout_w11 == 0) {
    iVar9 = iVar13;
  }
  iVar13 = 0xd4;
  if (extraout_w15 != 0) {
    iVar13 = 0xec;
  }
  iVar14 = 0xd8;
  if (extraout_w15 != 0) {
    iVar14 = 0xf0;
  }
  if (iVar11 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(iVar11 + 0xb4);
  }
  if (iVar9 == 0) {
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    uVar16 = *(undefined4 *)(iVar9 + 0xf8);
    uVar15 = *(undefined4 *)(iVar9 + 0xb4);
  }
  if (((iVar11 != 0) && (iVar9 != 0)) &&
     ((*(int *)(iVar11 + 0x28) != *(int *)(iVar9 + 0x28) ||
      (*(int *)(iVar11 + 0x2c) != *(int *)(iVar9 + 0x2c))))) {
    if (extraout_w11 == 0) {
      uVar15 = 0;
      uVar16 = 0;
    }
    else {
      uVar12 = 0;
    }
  }
  uVar7 = *puVar2;
  if (extraout_w12 == 0) {
    local_70 = 0.005;
    fStack_6c = 0.005;
  }
  else {
    local_70 = -(0.49 / ((float)(extraout_x14 & 0xffffffff) / (float)(extraout_x13 & 0xffffffff)));
    fStack_6c = -(0.49 / ((float)*puVar4 / (float)uVar7));
  }
  local_68 = (float)param_5;
  fStack_64 = (float)param_6;
  bVar8 = *(int *)(param_2 + 0x60) == 1;
  if (bVar8) {
    param_6 = uVar7 - param_6;
  }
  local_60 = (float)param_7;
  fStack_5c = (float)param_8;
  local_78 = local_68 + local_70;
  if (bVar8) {
    param_8 = uVar7 - param_8;
  }
  fStack_74 = (float)param_6 + fStack_6c;
  local_70 = local_60 + local_70;
  fStack_6c = (float)param_8 + fStack_6c;
  FUN_10041d70(param_1,&local_68,&local_78,*(undefined4 *)(param_1 + extraout_w10 * 4 + 0x448),
               *(undefined4 *)(iVar13 + param_2),*(undefined4 *)(iVar14 + param_2),uVar12,uVar15,
               uVar16);
  FUN_10024450(*piVar1);
  *(undefined4 *)(*piVar1 + 0x2ac4) = uVar6;
  *(undefined1 *)(*piVar1 + 0x2bc1) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc0) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc2) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc3) = 1;
  return;
}

