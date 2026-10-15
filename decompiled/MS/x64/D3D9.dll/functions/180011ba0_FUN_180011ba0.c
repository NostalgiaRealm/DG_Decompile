/*
 * FUN_180011ba0 at 180011ba0
 * undefined8 __fastcall FUN_180011ba0(longlong param_1, longlong * param_2)
 * Address ranges: 180011ba0-180012087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180011ba0(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  uint local_res10 [2];
  int local_res18;
  undefined4 *local_288;
  undefined4 *puStack_280;
  undefined4 local_278;
  undefined4 *local_270;
  undefined4 *puStack_268;
  undefined4 local_260;
  uint local_258 [22];
  undefined4 auStack_200 [16];
  uint local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1ae;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  undefined8 local_178 [38];
  undefined8 local_48;
  undefined1 local_40;
  
  uVar8 = 0;
  puVar4 = local_188;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  lVar13 = 4;
  do {
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    puVar4 = puVar4 + 0x20;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  local_48 = 0;
  local_1b0 = 0xffff;
  local_40 = 0;
  local_258[0] = 1;
  local_258[1] = 2;
  local_258[2] = 8;
  local_258[4] = 0;
  local_258[5] = 0;
  local_258[3] = 0x116;
  local_1ae = 0xffffffffffffffff;
  local_1b8 = 0;
  uVar5 = uVar8;
  do {
    auStack_200[uVar5] = 0xffffffff;
    local_258[uVar5 + 6] = 0xffffffff;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x10);
  local_1bc = 0;
  local_1c0 = 0x106;
  local_278 = 0x80;
  local_288 = (undefined4 *)0x0;
  puStack_280 = (undefined4 *)0x0;
  local_288 = (undefined4 *)thunk_FUN_1800fbccc(0x80);
  local_270 = (undefined4 *)0x0;
  puStack_268 = (undefined4 *)0x0;
  local_260 = 0x80;
  puStack_280 = local_288;
  local_270 = (undefined4 *)thunk_FUN_1800fbccc(0x80);
  uVar5 = uVar8;
  puStack_268 = local_270;
  while( true ) {
    pbVar1 = (byte *)(param_1 + uVar5 * 0x14);
    if (*pbVar1 == 0xff) goto LAB_180011d21;
    if ((*pbVar1 & 0x7f) == 0x1e) break;
    if ((char)*pbVar1 < '\0') {
      FUN_1800114cc(local_258,(longlong *)&local_288,pbVar1);
    }
    else {
      FUN_180010744(local_258,(longlong *)&local_288,pbVar1);
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
  }
  local_40 = 1;
  do {
    pbVar1 = (byte *)(param_1 + uVar5 * 0x14);
    if ((char)*pbVar1 < '\0') {
      FUN_1800114cc(local_258,(longlong *)&local_270,pbVar1);
    }
    else {
      FUN_180010744(local_258,(longlong *)&local_270,pbVar1);
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
  } while (*(char *)(param_1 + uVar5 * 0x14) != -1);
LAB_180011d21:
  FUN_180011adc(local_258,(longlong *)&local_288,'\x01');
  local_res10[0] = (uint)local_1b8 | local_1c0;
  local_1b8 = CONCAT44(local_1b8._4_4_ | local_1bc,local_res10[0]);
  uVar5 = uVar8;
  uVar18 = uVar8;
  do {
    uVar9 = (uint)uVar5;
    if (((*(byte *)((longlong)local_res10 + ((longlong)(int)uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0)
       && ((&DAT_180100f50)[uVar5] != '\0')) {
      FUN_1800019cc(param_2,0x30ff0200000000,uVar9,-1,0,0);
      uVar18 = (ulonglong)((int)uVar18 + 1);
      local_res10[0] = (uint)local_1b8;
    }
    uVar5 = (ulonglong)(uVar9 + 1);
  } while (uVar9 + 1 < 0x10);
  uVar5 = uVar8;
  uVar10 = uVar8;
  do {
    local_res10[0] = local_1b8._4_4_;
    uVar9 = (uint)uVar5;
    if ((*(byte *)((longlong)local_res10 + ((longlong)(int)uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0) {
      uVar12 = (uint)uVar10 + 1;
      if (uVar9 < 6) {
        uVar12 = (uint)uVar10;
      }
      uVar10 = (ulonglong)uVar12;
    }
    uVar5 = (ulonglong)(uVar9 + 1);
  } while (uVar9 + 1 < 0x10);
  iVar7 = (int)uVar10;
  if (iVar7 != 0) {
    FUN_1800019cc(param_2,0x28810200012013,4,-1,0,(int)uVar18 * -8 - 8U & 0xf | iVar7 << 4);
    uVar5 = uVar8;
    do {
      local_res10[0] = local_1b8._4_4_;
      uVar9 = (uint)uVar5;
      if (((*(byte *)((longlong)local_res10 + ((longlong)(int)uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0)
         && (5 < uVar9)) {
        FUN_1800019cc(param_2,0x290200100100,0x80000004,uVar9,(int)uVar8 << 4,0);
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      uVar5 = (ulonglong)(uVar9 + 1);
    } while (uVar9 + 1 < 0x10);
  }
  iVar17 = (int)param_2[1] - (int)*param_2;
  local_res18 = iVar17;
  FUN_180001960(param_2,local_288,(int)puStack_280 - (int)local_288);
  if (iVar7 != 0) {
    iVar17 = iVar7 + -1;
    uVar9 = 0x10;
    do {
      local_res10[0] = local_1b8._4_4_;
      if (((*(byte *)((longlong)local_res10 + ((longlong)(int)uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0)
         && (5 < uVar9)) {
        FUN_1800019cc(param_2,0x290200100100,uVar9,-0x7ffffffc,iVar17 << 4,0);
        iVar17 = iVar17 + -1;
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    FUN_1800019cc(param_2,0x810200012013,4,-1,0,(int)uVar18 * -8 - 8U & 0xf | iVar7 << 4);
    iVar17 = local_res18;
  }
  uVar9 = 0;
  iVar7 = 0x10;
  do {
    local_res10[0] = (uint)local_1b8;
    if (((*(byte *)((longlong)local_res10 + ((longlong)(int)(iVar7 - 1U) >> 3)) >> (iVar7 - 1U & 7)
         & 1) != 0) && ((&DAT_180100f50)[iVar7 - 1U] != '\0')) {
      FUN_1800019cc(param_2,0x8f0200000000,iVar7 - 1U,-1,0,0);
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_1800019cc(param_2,0xc30100000000,0xffffffff,-1,0,0);
  iVar7 = (int)param_2[1] - (int)*param_2;
  FUN_180001960(param_2,local_270,(int)puStack_268 - (int)local_270);
  if ((uint)local_190 != 0) {
    uVar12 = uVar9;
    if ((uint)local_190 == 0) {
      piVar11 = (int *)&DAT_00000008;
      plVar16 = (longlong *)&DAT_00000010;
      puVar15 = (uint *)&DAT_00000018;
      goto LAB_180012009;
    }
    do {
      uVar8 = (ulonglong)uVar12;
      plVar16 = (longlong *)(local_198 + 0x18 + uVar8 * 0x28);
      piVar11 = (int *)(local_198 + 0x10 + uVar8 * 0x28);
      puVar15 = (uint *)(local_198 + 0x20 + uVar8 * 0x28);
LAB_180012009:
      uVar14 = uVar9;
      if (*puVar15 != 0) {
        do {
          uVar2 = *(uint *)(*plVar16 + (ulonglong)uVar14 * 4);
          if ((int)uVar2 < 0) {
            iVar3 = (uVar2 & 0x7fffffff) + iVar7;
          }
          else {
            iVar3 = uVar2 + iVar17;
          }
          uVar14 = uVar14 + 1;
          *(int *)((ulonglong)(iVar3 - 4) + *param_2) = (*piVar11 - iVar3) + iVar7;
        } while (uVar14 < *puVar15);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)local_190);
  }
  FUN_1800fbcf0(local_270);
  FUN_1800fbcf0(local_288);
  uVar6 = FUN_180012088((longlong)local_258);
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}

