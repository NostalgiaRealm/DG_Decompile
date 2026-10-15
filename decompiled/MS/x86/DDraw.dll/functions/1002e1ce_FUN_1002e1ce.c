/*
 * FUN_1002e1ce at 1002e1ce
 * undefined4 __thiscall FUN_1002e1ce(void * this, int * param_1, void * param_2, int * param_3, uint param_4, int param_5, int param_6, int param_7, char param_8, char param_9, undefined1 * param_10)
 * Address ranges: 1002e1ce-1002e7fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1002e1ce(void *this,int *param_1,void *param_2,int *param_3,uint param_4,int param_5,int param_6
            ,int param_7,char param_8,char param_9,undefined1 *param_10)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  byte extraout_AL;
  byte bVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 extraout_ECX;
  void *extraout_EDX;
  void *pvVar14;
  uint *puVar15;
  float *pfVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 local_f8 [48];
  LPVOID local_c8;
  LONG local_b0 [3];
  undefined4 local_a4;
  uint local_a0;
  undefined1 uStack_9c;
  undefined1 local_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  int local_94;
  int local_90;
  int local_88;
  uint local_80;
  int local_7c;
  void *local_78;
  uint local_74;
  float local_70 [4];
  tagRECT local_60;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  char local_44;
  tagRECT local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  uint local_1c;
  char *local_18;
  char local_14;
  char local_13;
  char local_12;
  byte local_11;
  
  puVar15 = &local_a0;
  local_78 = this;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  uVar9 = FUN_1002c512(param_4,param_5);
  local_13 = (char)uVar9;
  local_20 = 0;
  if (local_13 == '\0') {
    FUN_1002c5bc(this,param_3,param_1,extraout_ECX,(int)param_2,param_4,param_5,&local_a0);
    local_20 = *(int *)(*(int *)((int)param_2 + 4) + 0x50);
  }
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = 0;
  }
  uVar9 = 0x80004005;
  local_11 = 1;
  if ((local_20 == 0) && (bVar8 = 1, local_13 == '\0')) goto LAB_1002e7ea;
  FUN_1002c6bd((int)param_2,(int)this);
  iVar13 = *(int *)((int)this + 4);
  local_74 = *(uint *)((int)this + 0x19c) >> 2 & 0xffffff01;
  local_18 = (char *)(*(uint *)((int)this + 0x1bc) & 0x14);
  if ((uint)(*(int *)((int)this + 0x15c) * *(int *)((int)this + 0x158)) < 0x9001) {
LAB_1002e2ba:
    local_12 = '\x01';
  }
  else {
    cVar7 = FUN_1003218f((int)this + 0x150);
    local_12 = '\0';
    if (cVar7 != '\0') goto LAB_1002e2ba;
  }
  if (((*(byte *)(iVar13 + 0x34) & 1) == 0) &&
     ((cVar7 = (**(code **)(**(int **)(iVar13 + 0x50) + 0x14))
                         (*(undefined4 *)(iVar13 + 0x6c),*(undefined4 *)(iVar13 + 0x70)),
      cVar7 != '\0' || (local_12 == '\0')))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((*(int *)(iVar13 + 0x30) == 0) && (local_18 == (char *)0x0)) || (!bVar2)) ||
     (*(char *)(*(int *)((int)this + 4) + 0x48) != '\0')) {
    local_12 = '\0';
LAB_1002e340:
    local_14 = '\0';
  }
  else {
    local_12 = '\x01';
    if ((param_2 == (void *)0x0) || (local_94 == 3)) goto LAB_1002e340;
    iVar1 = *(int *)((int)param_2 + 4);
    cVar7 = (**(code **)(**(int **)(iVar1 + 0x50) + 0x14))
                      (*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70));
    if ((cVar7 != '\0') ||
       ((*(int *)(iVar13 + 0x20) == 0 && ((*(uint *)((int)this + 0x154) >> 0xb & 1) == 0))))
    goto LAB_1002e340;
    local_14 = '\x01';
  }
  local_b0[2] = *(undefined4 *)((int)this + 0x15c);
  local_a4 = *(undefined4 *)((int)this + 0x158);
  local_b0[0] = 0;
  local_b0[1] = 0;
  if (local_13 == '\0') {
    local_1c = 0;
  }
  else {
    local_1c = FUN_1002c543(this,param_4,param_5);
  }
  if (((param_9 == '\0') && (*(int *)((int)this + 0x104) != 0)) &&
     (*(int *)(*(int *)((int)this + 0x104) + 0x4c) != 0)) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *(int **)((int)this + 0x104);
  }
  FUN_1002c26b(local_f8,param_3,param_1,piVar10,local_b0,param_6,param_7,uStack_9c,local_9b);
  do {
    uVar9 = 0x80004005;
    cVar7 = FUN_1002c386(local_f8,&local_40);
    fVar6 = local_24;
    fVar5 = local_28;
    fVar4 = local_2c;
    fVar3 = local_30;
    if (cVar7 == '\0') break;
    if ((char)local_74 == '\0') {
      local_7c = *(int *)((int)this + 4);
      if (local_13 == '\0') {
        if (local_14 == '\0') {
          auVar17._4_4_ = -(uint)((float)(int)local_28 == local_28);
          auVar17._0_4_ = -(uint)((float)(int)local_24 == local_24);
          auVar17._8_4_ = -(uint)((float)(int)local_2c == local_2c);
          auVar17._12_4_ = -(uint)((float)(int)local_30 == local_30);
          iVar13 = movmskps(local_7c,auVar17);
          if ((iVar13 == 0xf) &&
             (auVar18._4_4_ = -(uint)(local_30 < local_28),
             auVar18._0_4_ = -(uint)(local_2c < local_24), auVar18._8_8_ = 0,
             uVar9 = movmskps(0xf,auVar18), ((byte)uVar9 & 3) == 3)) {
            cVar7 = '\x01';
          }
          else {
            cVar7 = '\0';
          }
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          pfVar16 = local_70;
          local_44 = cVar7;
          for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
            *pfVar16 = 0.0;
            pfVar16 = pfVar16 + 1;
          }
          if (cVar7 == '\0') {
            local_70[0] = (float)local_40.left;
            local_60.left = (LONG)fVar3;
            local_70[1] = (float)local_40.top;
            local_60.top = (LONG)fVar4;
            local_70[2] = (float)local_40.right;
            local_60.right = (LONG)fVar5;
            local_70[3] = (float)local_40.bottom;
            local_60.bottom = (LONG)fVar6;
          }
          else {
            SetRect(&local_60,(int)fVar3,(int)fVar4,(int)fVar5,(int)fVar6);
            local_70[0] = (float)local_40.left;
            local_70[1] = (float)local_40.top;
            local_70[2] = (float)local_40.right;
            local_70[3] = (float)local_40.bottom;
            this = local_78;
          }
          local_50 = local_a0;
          local_4c = *(undefined4 *)((int)param_2 + 0x1d0);
          local_48 = (uint)CONCAT12(uStack_99,CONCAT11(uStack_9a,uStack_98));
          local_11 = (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x4c) + 0x84))
                               (*(undefined4 *)(local_7c + 0x6c),*(undefined4 *)(local_7c + 0x70),
                                *(undefined4 *)(*(int *)((int)param_2 + 4) + 0x6c),
                                *(undefined4 *)(*(int *)((int)param_2 + 4) + 0x70),
                                *(undefined4 *)(*(int *)((int)this + 4) + 0x50),local_20,local_70);
          FUN_10031670((int)this);
          if (param_10 != (undefined1 *)0x0) {
            *param_10 = 1;
          }
        }
        else {
          if ((*(byte *)(local_7c + 200) & 0x10) == 0) {
            (**(code **)(**(int **)(local_7c + 0x50) + 0x48))(0);
            puVar15 = (uint *)(*(int *)((int)this + 4) + 200);
            *puVar15 = *puVar15 | 0x10;
          }
          uVar11 = FUN_1002df19(this,param_2,&local_40,(int)local_30,(int)local_2c,&local_a0);
          local_11 = (byte)uVar11;
          if (param_10 != (undefined1 *)0x0) {
            *param_10 = 0;
          }
          *(undefined1 *)(*(int *)((int)this + 4) + 0xae) = 0;
        }
      }
      else if (local_12 == '\0') {
        local_11 = (**(code **)(**(int **)(local_7c + 0x4c) + 0x80))
                             (*(undefined4 *)(local_7c + 0x6c),*(undefined4 *)(local_7c + 0x70),
                              *(undefined4 *)(local_7c + 0x50),local_1c,(float)local_40.left,
                              (float)local_40.top,(float)local_40.right,(float)local_40.bottom);
        FUN_10031670((int)this);
        if (param_10 != (undefined1 *)0x0) {
          *param_10 = 1;
        }
      }
      else {
        if ((*(byte *)(local_7c + 200) & 0x10) == 0) {
          (**(code **)(**(int **)(local_7c + 0x50) + 0x48))(0);
          puVar15 = (uint *)(*(int *)((int)this + 4) + 200);
          *puVar15 = *puVar15 | 0x10;
        }
        FUN_1002d11a(this,&local_40,local_1c,(int)&local_a0);
        if (param_10 != (undefined1 *)0x0) {
          *param_10 = 0;
        }
        *(undefined1 *)(*(int *)((int)this + 4) + 0xae) = 0;
        local_11 = extraout_AL;
      }
    }
    else {
      uVar9 = 0x80004001;
      local_11 = 0;
      if ((local_13 != '\0') || (uVar12 = FUN_10031444((int)this + 0x150), (char)uVar12 == '\0'))
      break;
      uVar11 = FUN_1002c761((int)param_2);
      pvVar14 = extraout_EDX;
      if (((char)uVar11 != '\0') &&
         (uVar11 = FUN_1002c723((int)this), pvVar14 = param_2, (char)uVar11 != '\0')) {
        uVar9 = 0x80070057;
        local_11 = 0;
        break;
      }
      local_80 = CONCAT31(local_80._1_3_,local_94 == 0);
      if ((param_3[2] - *param_3 != param_1[2] - *param_1) ||
         (local_18 = (char *)((uint)local_18 & 0xffffff00),
         param_3[3] - param_3[1] != param_1[3] - param_1[1])) {
        local_18 = (char *)CONCAT31(local_18._1_3_,1);
      }
      local_11 = FUN_1002c9c1(this,(float *)&local_40,(int)pvVar14,local_2c,local_28,local_24,
                              &local_a0,local_80,local_18);
      if (param_10 != (undefined1 *)0x0) {
        *param_10 = 1;
      }
    }
    uVar9 = 0x80004005;
  } while (local_11 != 0);
  if (local_90 != 0) {
    uVar12 = FUN_10032800((int)this);
    local_11 = local_11 & ((byte)((uint)uVar12 >> 0x1f) ^ 1);
  }
  if (local_88 != 0) {
    uVar12 = FUN_10032800((int)param_2);
    local_11 = local_11 & ((byte)((uint)uVar12 >> 0x1f) ^ 1);
  }
  LOCK();
  *(int *)((int)this + 0x1dc) = *(int *)((int)this + 0x1dc) + 1;
  UNLOCK();
  if ((local_11 != 0) && (param_8 != '\0')) {
    FUN_10033568(this,'\0');
  }
  thunk_FUN_10060be1(local_c8);
  bVar8 = local_11;
LAB_1002e7ea:
  if (bVar8 != 0) {
    uVar9 = 0;
  }
  return uVar9;
}

