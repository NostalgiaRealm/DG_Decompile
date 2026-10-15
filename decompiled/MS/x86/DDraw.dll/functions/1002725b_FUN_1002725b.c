/*
 * FUN_1002725b at 1002725b
 * int __thiscall FUN_1002725b(void * this, uint param_1, int param_2, int param_3, int param_4, uint param_5, char param_6)
 * Address ranges: 1002725b-1002761b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1002725b(void *this,uint param_1,int param_2,int param_3,int param_4,uint param_5,char param_6)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  BOOL BVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  bool bVar13;
  ushort in_FPUControlWord;
  undefined4 local_84;
  uint local_80 [6];
  uint *local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c [4];
  int local_3c;
  int local_38;
  uint local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  uint *local_10;
  int *local_c;
  undefined1 local_5;
  
  FUN_10023df9(&local_5);
  local_10 = &local_1c;
  local_c = (int *)(uint)in_FPUControlWord;
  local_1c = (uint)local_c | 0x80000000;
  if (((uint)local_c & 0xf3f) != 0x23f) {
    local_1c = (uint)local_c;
  }
  uVar5 = *(uint *)((int)this + 0x104) >> 6;
  local_c = (int *)(uVar5 & 0xffffff01);
  if (param_6 == '\0') {
    param_5 = uVar5 & 1 ^ 1;
  }
  iVar10 = -0x7ff8ffa9;
  if ((param_5 == 1) || (param_5 == 0)) {
    iVar10 = -0x7789fdb2;
    if (param_3 == 8) {
      iVar9 = 8;
    }
    else {
      iVar9 = 0x10;
      if ((param_3 != 0x10) && (iVar9 = 0x20, param_3 != 0x20)) goto LAB_100275f3;
    }
    local_10 = (uint *)FUN_10031adf(this,iVar9);
    if (((param_5 == 1) || (param_1 != 0x140)) ||
       (((param_2 != 200 && (param_2 != 0xf0)) || (param_3 != 8)))) {
      bVar2 = false;
    }
    else {
      bVar13 = (char)local_c == '\0';
      bVar2 = true;
      if (bVar13) goto LAB_100275f3;
    }
    piVar1 = (int *)((int)this + 0xfc);
    iVar10 = -0x7fffbffb;
    local_c = piVar1;
    if (((*(uint *)((int)this + 0x104) >> 4 & 1) != 0) || (*piVar1 != 0)) {
      iVar10 = -0x7789fdb2;
      local_14 = FUN_100031a0(*(int *)((int)this + 0x11c),param_1,param_2,param_4);
      if (local_14 != (int *)0x0) {
        local_4c[0] = param_1;
        local_4c[1] = param_2;
        local_4c[2] = local_14[2];
        local_4c[3] = local_14[3];
        local_3c = local_14[4];
        local_38 = param_3;
        if ((*(char *)(DAT_1006c210 + 0x7e5) != '\0') ||
           (bVar13 = true, *(char *)(DAT_1006c210 + 0x784) == '\0')) {
          bVar13 = false;
        }
        BVar6 = IsWindowVisible((HWND)*piVar1);
        if (BVar6 == 0) {
          ShowWindow((HWND)*piVar1,1);
        }
        puVar7 = FUN_10003314(local_4c,*(int *)((int)this + 0x11c),local_80 + 1);
        puVar12 = local_34;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar12 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar12 = puVar12 + 1;
        }
        if ((param_4 == 0) && (iVar10 = FUN_100021cb(), (char)iVar10 == '\0')) {
          iVar10 = *(int *)((int)this + 0x11c) * 0x228;
          local_34[2] = *(uint *)(&DAT_1006c41c + iVar10);
          local_34[3] = *(uint *)(&DAT_1006c420 + iVar10);
        }
        piVar1 = local_c;
        uVar3 = local_34[3];
        uVar5 = local_34[2];
        local_18 = local_14[4];
        (**(code **)(**(int **)((int)this + 0x118) + 0x70))(*local_c,local_24,local_20);
        FUN_10004493((int *)((int)this + 0x10));
        local_14 = (int *)CONCAT31(local_14._1_3_,*(char *)(DAT_1006c210 + 0x95a) != '\0' || bVar13)
        ;
        if (uVar3 == 0) {
          local_54 = 0;
        }
        else {
          local_54 = uVar5 / uVar3;
        }
        local_5c = uVar5;
        local_50 = param_3;
        local_64 = local_34[0];
        local_60 = local_34[1];
        local_58 = uVar3;
        cVar4 = (**(code **)(**(int **)((int)this + 0x118) + 0x74))(*piVar1,&local_64,local_14);
        if (cVar4 == '\0') {
          iVar10 = -0x7fffbffb;
        }
        else {
          *(uint *)(&DAT_100698dc + *(int *)((int)this + 0x11c) * 0xa4) = param_1;
          *(int *)(&DAT_100698d8 + *(int *)((int)this + 0x11c) * 0xa4) = param_2;
          puVar8 = FUN_10024c76(this,&local_84,(int)local_10);
          local_68 = local_10;
          puVar11 = (undefined4 *)(&DAT_10069918 + *(int *)((int)this + 0x11c) * 0xa4);
          for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          *(int *)(&DAT_100698e8 + *(int *)((int)this + 0x11c) * 0xa4) = local_18;
          *(uint *)(&DAT_100698d4 + *(int *)((int)this + 0x11c) * 0xa4) =
               *(uint *)(&DAT_100698d4 + *(int *)((int)this + 0x11c) * 0xa4) | 0x40000;
          if (bVar2) {
            *(uint *)(&DAT_10069938 + *(int *)((int)this + 0x11c) * 0xa4) =
                 *(uint *)(&DAT_10069938 + *(int *)((int)this + 0x11c) * 0xa4) | 0x200000;
          }
          puVar7 = local_4c;
          puVar12 = local_80;
          for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar12 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          }
          iVar9 = *(int *)((int)this + 0x11c) * 0x228;
          (&DAT_1006c49a)[iVar9] = 1;
          puVar7 = local_80;
          puVar12 = (uint *)(&DAT_1006c42c + iVar9);
          for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar12 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar7 = local_34;
          puVar12 = (uint *)(&DAT_1006c448 + iVar9);
          for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar12 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          }
          FUN_1000310c(*(int *)((int)this + 0x11c),local_34[0],local_34[1]);
          FUN_100044ed((int *)((int)this + 0x10));
          if ((*(char *)(DAT_1006c210 + 0x95a) != '\0') && (!bVar13)) {
            PostMessageW((HWND)*local_c,0x400,0x44454745,0);
          }
          iVar10 = 0;
        }
        FUN_100044bf((int *)((int)this + 0x10));
        if (-1 < iVar10) {
          FUN_10026aeb((int)this);
        }
      }
    }
  }
LAB_100275f3:
  FUN_10023e27();
  return iVar10;
}

