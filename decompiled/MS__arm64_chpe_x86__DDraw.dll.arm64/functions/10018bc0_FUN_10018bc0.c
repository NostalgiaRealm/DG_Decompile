/*
 * FUN_10018bc0 at 10018bc0
 * undefined FUN_10018bc0(void)
 * Address ranges: 10018bc0-100190f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10018bc0(int param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_e8;
  int iStack_e4;
  uint local_e0;
  uint local_dc;
  undefined4 *local_d8;
  int *local_d4;
  code *local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint uStack_bc;
  undefined1 auStack_b8 [16];
  ulonglong local_a8;
  uint local_a0;
  undefined2 local_9a;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint local_88;
  undefined1 auStack_80 [64];
  
  local_d8 = (undefined4 *)(param_3 + 0xc);
  local_d0 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar8,auStack_b8);
  local_c8 = 0;
  uVar18 = (uint)local_a8 >> (ulonglong)(param_4 & 0x1f);
  if (uVar18 == 0) {
    uVar18 = 1;
  }
  uVar16 = local_a0 >> (ulonglong)(param_4 & 0x1f);
  if (uVar16 == 0) {
    uVar16 = 1;
  }
  local_c0 = uVar18;
  uStack_bc = uVar16;
  (*(code *)PTR_FUN_100ba244)(&local_e8,param_6,&local_c8);
  local_d4 = (int *)(param_2 + 0x34);
  if ((*local_d4 - 3U < 3) &&
     (*(char *)(*(int *)(param_1 + 0xcf00) + *(int *)(param_1 + 0x14) * 0x18 + 0x532) == '\0')) {
    (*(code *)PTR_FUN_100ba2b8)(&local_e8,0,0,uVar18,uVar16);
  }
  else {
    uVar18 = uVar18 - 1 | uVar18 - 1 >> 1;
    uVar18 = uVar18 | uVar18 >> 2;
    uVar18 = uVar18 | uVar18 >> 4;
    uVar18 = (uVar18 | uVar18 >> 8) + 1;
    uVar16 = uVar16 - 1 | uVar16 - 1 >> 1;
    uVar16 = uVar16 | uVar16 >> 2;
    uVar16 = uVar16 | uVar16 >> 4;
    uVar16 = (uVar16 | uVar16 >> 8) + 1;
  }
  local_9a = 1;
  uVar15 = 0;
  local_98 = *(uint *)(param_3 + 0x2c);
  puVar1 = (uint *)(param_1 + 0xd06c);
  uVar11 = *puVar1;
  uVar17 = ((ulonglong)local_a0 & 0xffff) << 0x10 |
           ((ulonglong)local_98 |
           ((ulonglong)local_94 | ((ulonglong)uStack_90 | (ulonglong)local_88 << 8) << 8) << 8) <<
           0x20 | local_a8;
  if (uVar11 != 0) {
    uVar13 = 0;
    uVar12 = uVar11;
    do {
      uVar15 = uVar12 + uVar13 >> 1;
      uVar14 = *(ulonglong *)(*(int *)(param_1 + 0xd064) + uVar15 * 0x50);
      uVar7 = uVar15;
      if (uVar14 <= uVar17) {
        if (uVar17 <= uVar14) break;
        uVar13 = uVar15 + 1;
        uVar15 = uVar13;
        uVar7 = uVar12;
      }
      uVar12 = uVar7;
    } while (uVar12 != uVar13);
    if ((uVar15 != uVar11) && (*(ulonglong *)(*(int *)(param_1 + 0xd064) + uVar15 * 0x50) == uVar17)
       ) goto LAB_10018ee4;
  }
  puVar2 = (uint *)(param_1 + 0xd068);
  if (uVar11 == *puVar2) {
    uVar14 = (ulonglong)(*puVar2 << 1) * 0x50;
    uVar8 = (undefined4)uVar14;
    if (uVar14 >> 0x20 != 0) {
      uVar8 = 0xffffffff;
    }
    iVar9 = FUN_100914b0(uVar8);
    if (iVar9 != 0) {
      uVar11 = 0;
      if (*puVar2 != 0) {
        do {
          uVar13 = uVar11 + 1;
          puVar3 = (undefined8 *)(*(int *)(param_1 + 0xd064) + uVar11 * 0x50);
          puVar4 = (undefined8 *)(iVar9 + uVar11 * 0x50);
          uVar21 = *puVar3;
          uVar20 = puVar3[3];
          uVar19 = puVar3[2];
          puVar4[1] = puVar3[1];
          *puVar4 = uVar21;
          puVar4[3] = uVar20;
          puVar4[2] = uVar19;
          uVar21 = puVar3[4];
          uVar20 = puVar3[7];
          uVar19 = puVar3[6];
          puVar4[5] = puVar3[5];
          puVar4[4] = uVar21;
          puVar4[7] = uVar20;
          puVar4[6] = uVar19;
          uVar19 = puVar3[8];
          puVar4[9] = puVar3[9];
          puVar4[8] = uVar19;
          uVar11 = uVar13;
        } while (uVar13 < *puVar2);
      }
      FUN_100914d0(*(undefined4 *)(param_1 + 0xd064));
      *(int *)(param_1 + 0xd064) = iVar9;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar11 = *puVar1; uVar15 < uVar11; uVar11 = uVar11 - 1) {
    puVar3 = (undefined8 *)(*(int *)(param_1 + 0xd064) + uVar11 * 0x50);
    puVar3[1] = puVar3[-9];
    *puVar3 = puVar3[-10];
    puVar3[3] = puVar3[-7];
    puVar3[2] = puVar3[-8];
    puVar3[5] = puVar3[-5];
    puVar3[4] = puVar3[-6];
    puVar3[7] = puVar3[-3];
    puVar3[6] = puVar3[-4];
    puVar3[9] = puVar3[-1];
    puVar3[8] = puVar3[-2];
  }
  FUN_1001d4c0(param_1 + 0xd064,uVar15,uVar17,auStack_b8);
  *puVar1 = *puVar1 + 1;
LAB_10018ee4:
  puVar6 = local_d8;
  iVar9 = *(int *)(param_1 + 0xd064) + uVar15 * 0x50;
  uVar17 = *(ulonglong *)(iVar9 + 0x40);
  uVar8 = *(undefined4 *)(iVar9 + 0x48);
  uVar10 = 0;
  if ((int)uVar17 != 0) {
    if ((((local_e8 != 0) || (iStack_e4 != 0)) || (local_e0 != uVar18)) ||
       (bVar5 = true, local_dc != uVar16)) {
      bVar5 = false;
    }
    if ((*(int *)(param_2 + 0x20) == 1) && (*(int *)(param_2 + 0x24) == 1 && bVar5)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (((*local_d4 - 3U < 3 && !bVar5) &&
        (*(char *)(*(int *)(param_2 + 0x1c) + 0x100b37f0) != '\0')) && (local_98 - 0x2c < 2)) {
      FUN_1001c660(param_1,param_3,uVar8,*local_d8,uVar17 & 0xffffffff,uVar18,uVar16,
                   param_4 + (*(int *)(param_2 + 0x24) + param_5) * *(int *)(param_2 + 0x2c),uVar18)
      ;
    }
    iVar9 = *(int *)(param_2 + 0x2c);
    uVar10 = (*local_d0)();
    (*extraout_w11_00)(uVar10,auStack_80);
    FUN_1001c660(param_1,param_3,uVar8,*puVar6,uVar17 & 0xffffffff,uVar18,uVar16,
                 param_4 + iVar9 * param_5,uVar18);
    uVar10 = uVar8;
  }
  return uVar10;
}

