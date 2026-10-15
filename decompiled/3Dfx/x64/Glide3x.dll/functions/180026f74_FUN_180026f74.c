/*
 * FUN_180026f74 at 180026f74
 * undefined __fastcall FUN_180026f74(longlong * param_1, uint param_2, byte param_3, ulonglong param_4, byte param_5)
 * Address ranges: 180026f74-180027390
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180026f74(longlong *param_1,uint param_2,byte param_3,ulonglong param_4,byte param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint **ppuVar17;
  float fVar18;
  undefined4 *local_78 [2];
  float local_68 [3];
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar8 = 0;
  uVar15 = param_4;
  FUN_1800276a4((longlong)(param_1 + 0x84c),0,0,param_4);
  plVar1 = param_1 + 0x6b4;
  uVar12 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
  uVar8 = 0;
  FUN_18002650c(plVar1,'\0',uVar12,uVar15);
  FUN_18000fd5c((longlong)param_1,uVar8,uVar12,uVar15);
  FUN_180014ee4(param_1,-1);
  FUN_18000efc4((longlong)param_1);
  if (((int)param_1[0x55f] == 0) || (*(int *)((longlong)param_1 + 0x2afc) != 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  DAT_18006d744 = *(char *)((longlong)param_1 + 0x2b54);
  if ((bVar3) || ((*(uint *)((longlong)param_1 + 0x2cac) & 0xff0000) == 0)) {
    DAT_18006d764 = '\x0f';
  }
  else {
    DAT_18006d764 = '\0';
  }
  _DAT_18006d6a4 = *(undefined4 *)((longlong)param_1 + 0x2b94);
  _DAT_18006d6b0 = (undefined4)param_1[0x55f];
  _DAT_18006d6b4 = *(int *)((longlong)param_1 + 0x2afc);
  FUN_18004f248(param_1[0x666],(ulonglong)*(uint *)(param_1 + 0x667),(int *)&DAT_18006d720,uVar15,
                *(int *)((longlong)param_1 + 0x2b34));
  FUN_18004f2bc(param_1[0x666],(ulonglong)*(uint *)(param_1 + 0x667),(int *)&DAT_18006d6b0,
                (uint)param_5);
  FUN_18004f434(param_1[0x666],(ulonglong)*(uint *)(param_1 + 0x667),(uint *)&DAT_18006d688);
  uVar4 = FUN_180014854(plVar1,*(int *)((longlong)param_1 + 0x29fc));
  lVar11 = (longlong)(int)uVar4;
  uVar5 = FUN_180014854(plVar1,(int)param_1[0x540]);
  plVar9 = (longlong *)0x0;
  if (uVar4 != 0xffffffff) {
    plVar9 = param_1 + lVar11 * 0x30 + 0x6dd;
  }
  plVar13 = (longlong *)0x0;
  if (uVar5 != 0xffffffff) {
    plVar13 = param_1 + (longlong)(int)uVar5 * 0x30 + 0x6dd;
  }
  if (plVar9 == (longlong *)0x0) {
    uVar5 = 0;
    uVar10 = 0;
    uVar4 = 0;
    uVar14 = 0;
  }
  else {
    puVar7 = (uint *)&DAT_00000028;
    if (uVar4 != 0xffffffff) {
      puVar7 = (uint *)(param_1 + lVar11 * 0x30 + 0x6e2);
    }
    uVar5 = *puVar7;
    puVar7 = (uint *)&DAT_0000002c;
    if (uVar4 != 0xffffffff) {
      puVar7 = (uint *)((longlong)param_1 + lVar11 * 0x180 + 0x3714);
    }
    uVar14 = *puVar7;
    puVar7 = (uint *)&DAT_00000020;
    if (uVar4 != 0xffffffff) {
      puVar7 = (uint *)(param_1 + lVar11 * 0x30 + 0x6e1);
    }
    uVar10 = *puVar7;
    puVar7 = (uint *)&DAT_00000024;
    if (uVar4 != 0xffffffff) {
      puVar7 = (uint *)((longlong)param_1 + lVar11 * 0x180 + 0x370c);
    }
    uVar4 = *puVar7;
  }
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_58 = 0;
  local_68[2] = (float)uVar5;
  local_54 = 0x3f800000;
  local_5c = (float)uVar14;
  FUN_18004f630(param_1[0x666],(ulonglong)*(uint *)(param_1 + 0x667),local_68);
  fVar18 = FUN_180014b3c((longlong)param_1,param_2,param_3,(uint)param_4);
  *(byte *)(param_1 + 0x897) = *(byte *)(param_1 + 0x897) | 1;
  FUN_18000ea30((longlong)param_1);
  uVar15 = param_1[0x841];
  FUN_18000ef08(param_1[0x6dc],5,param_1[0x848],param_1[0x845],uVar15);
  lVar11 = param_1[0x84a];
  uVar8 = 0;
  uVar16 = 4;
  plVar2 = *(longlong **)(*(longlong *)(param_1[0x6dc] + 0x3340) + 8);
  iVar6 = (**(code **)(*plVar2 + 0x70))(plVar2,lVar11,0,4,uVar15 & 0xffffffff00000000,local_78);
  if (-1 < iVar6) {
    uVar8 = 0;
    *local_78[0] = 0;
    local_78[0][1] = 0;
    local_78[0][2] = fVar18;
    local_78[0][3] = 0;
    local_78[0][4] = (float)uVar10;
    local_78[0][5] = 0;
    local_78[0][6] = fVar18;
    local_78[0][7] = 0;
    local_78[0][8] = 0;
    local_78[0][9] = (float)uVar4;
    local_78[0][10] = fVar18;
    local_78[0][0xb] = 0;
    local_78[0][0xc] = (float)uVar10;
    local_78[0][0xd] = (float)uVar4;
    local_78[0][0xe] = fVar18;
    local_78[0][0xf] = 0;
    lVar11 = param_1[0x84a];
    (**(code **)(**(longlong **)(*(longlong *)(param_1[0x6dc] + 0x3340) + 8) + 0x78))();
  }
  FUN_1800243dc(param_1[0x6dc] + 0x4260,lVar11,uVar8,uVar16);
  lVar11 = *(longlong *)(param_1[0x6dc] + 0x3340);
  (**(code **)(**(longlong **)(lVar11 + 8) + 0x68))(*(longlong **)(lVar11 + 8),4);
  ppuVar17 = (uint **)CONCAT71((int7)((ulonglong)lVar11 >> 8),DAT_18006d744);
  FUN_180014c1c((longlong)param_1,(longlong)plVar9,(longlong)plVar13,DAT_18006d744,DAT_18006d764);
  FUN_180026744(plVar1,plVar9,plVar13,ppuVar17);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x666] + 0x620));
  *(undefined4 *)(param_1 + 0x58f) = 0x1010101;
  return;
}

