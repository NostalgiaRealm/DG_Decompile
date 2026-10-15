/*
 * FUN_180090478 at 180090478
 * ulonglong __fastcall FUN_180090478(longlong param_1, undefined8 param_2, int param_3, longlong param_4, uint param_5, uint * param_6)
 * Address ranges: 180090478-1800907ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180090478(longlong param_1,undefined8 param_2,int param_3,longlong param_4,
                       uint param_5,uint *param_6)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  BOOL BVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 extraout_RAX;
  uint uVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  
  plVar1 = (longlong *)(param_1 + -0xe0);
  FUN_1800dfe48(*(longlong *)(param_1 + -0x90),param_2,(longlong)plVar1);
  FUN_18008ee3c((longlong)plVar1,'\0');
  uVar8 = param_3 * *(int *)(param_1 + -0xa4) + (int)param_2;
  if (((*(longlong *)(param_1 + -0x28) == 0) ||
      (BVar9 = IsRectEmpty((RECT *)(*(longlong *)(param_1 + -0x50) + ((ulonglong)uVar8 * 5 + 3) * 8)
                          ), BVar9 == 0)) && (2 < *(int *)(param_1 + -0x9c) - 3U)) {
    uVar13 = (ulonglong)*(uint *)(param_1 + -0xb4);
    uVar4 = *param_6;
    uVar16 = param_6[1];
    uVar5 = param_6[3];
    uVar6 = param_6[2];
    bVar2 = (&DAT_1800fead8)[uVar13];
    uVar15 = (ulonglong)bVar2;
    uVar7 = *(uint *)(&DAT_1800ff000 + uVar13 * 4);
    bVar3 = (&DAT_1800feb08)[uVar13];
    uVar19 = (uint)bVar3;
    if (uVar7 < 8) {
      uVar17 = *(uint *)(&DAT_1800fea30 + uVar13 * 4);
    }
    else {
      uVar17 = uVar7 >> 3;
    }
    uVar13 = (ulonglong)*(uint *)(param_1 + -0xbc);
    uVar10 = FUN_1800ac71c((longlong)plVar1,*(uint *)(param_1 + -0xbc),(byte)param_2);
    uVar18 = (uint)uVar15;
    if (uVar7 < 8) {
      uVar13 = (ulonglong)uVar10 % (uVar15 & 0xffffffff);
      uVar10 = (uint)((ulonglong)uVar10 / (uVar15 & 0xffffffff));
    }
    uVar15 = (ulonglong)uVar4;
    uVar14 = 1;
    uVar12 = uVar16;
    if (uVar4 != 0) {
      uVar12 = uVar16 + 1;
      local_54 = uVar6;
      if (uVar5 != uVar16) {
        local_54 = uVar10;
      }
      local_58 = 0;
      local_4c = 1;
      local_60 = uVar4;
      local_5c = uVar16;
      local_50 = uVar12;
      if (uVar7 < 8) {
        local_54 = local_54 * uVar18;
        local_60 = uVar18 * uVar4;
        local_5c = uVar16 * bVar3;
        local_50 = uVar12 * bVar3;
      }
      uVar13 = (ulonglong)param_5;
      FUN_1800901a0((longlong)plVar1,uVar13,uVar15,*(longlong **)(param_1 + -0x68),uVar8,&local_60,
                    (ulonglong)(uVar17 * uVar4) + (ulonglong)(uVar16 * param_5) + param_4,param_5);
      uVar18 = (uint)bVar2;
    }
    if (uVar12 < uVar5) {
      local_60 = 0;
      local_50 = uVar5;
      if (uVar6 == uVar10) {
        local_50 = uVar5 + 1;
      }
      local_58 = 0;
      local_4c = 1;
      local_5c = uVar12;
      local_54 = uVar10;
      if (uVar7 < 8) {
        local_5c = uVar19 * uVar12;
        local_54 = uVar10 * uVar18;
        local_50 = local_50 * uVar19;
      }
      FUN_1800901a0((longlong)plVar1,uVar13,uVar15,*(longlong **)(param_1 + -0x68),uVar8,&local_60,
                    (ulonglong)(uVar12 * param_5) + param_4,param_5);
      uVar12 = uVar5 + 1;
      if (uVar6 != uVar10) {
        uVar12 = uVar5;
      }
    }
    if (uVar5 == uVar12) {
      local_60 = 0;
      local_50 = uVar5 + 1;
      local_58 = 0;
      local_4c = 1;
      local_5c = uVar12;
      local_54 = uVar6;
      if (uVar7 < 8) {
        local_5c = uVar19 * uVar12;
        local_54 = bVar2 * uVar6;
        local_50 = local_50 * uVar19;
      }
      FUN_1800901a0((longlong)plVar1,(ulonglong)uVar6,uVar15,*(longlong **)(param_1 + -0x68),uVar8,
                    &local_60,(ulonglong)(uVar12 * param_5) + param_4,param_5);
    }
    local_70 = 0;
    local_6c = param_6[1];
    if (uVar7 < 8) {
      local_6c = local_6c * uVar19;
    }
    bVar2 = (byte)param_2 & 0x1f;
    local_68 = *(uint *)(param_1 + -0xbc) >> bVar2;
    if (*(uint *)(param_1 + -0xbc) >> bVar2 == 0) {
      local_68 = 1;
    }
    local_64 = param_6[3] + 1;
    if (uVar7 < 8) {
      local_64 = local_64 * uVar19;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar8,&local_70);
  }
  else {
    uVar11 = FUN_18008ffd8(plVar1,(int)param_2,param_3,param_4,param_5,(int *)param_6);
    uVar14 = (undefined1)uVar11;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + -0x90) + 0x620));
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),uVar14);
}

