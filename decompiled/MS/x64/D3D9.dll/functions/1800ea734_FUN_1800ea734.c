/*
 * FUN_1800ea734 at 1800ea734
 * undefined4 __fastcall FUN_1800ea734(longlong * param_1, ulonglong param_2, uint * param_3, uint param_4, longlong param_5, longlong param_6, longlong param_7, longlong * param_8, longlong * param_9)
 * Address ranges: 1800ea734-1800eaabd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800ea734(longlong *param_1,ulonglong param_2,uint *param_3,uint param_4,longlong param_5,
             longlong param_6,longlong param_7,longlong *param_8,longlong *param_9)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 local_res8;
  ulonglong local_res10;
  uint local_res18 [2];
  uint local_res20;
  longlong *local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a0;
  longlong local_98;
  longlong local_90;
  uint local_88;
  uint local_84;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  uint *local_68;
  longlong *local_60;
  longlong *local_58;
  LPCRITICAL_SECTION local_50;
  
  local_res18[0] = (uint)param_3;
  local_50 = (LPCRITICAL_SECTION)(param_1 + 5);
  local_res10 = param_2;
  local_res20 = param_4;
  EnterCriticalSection(local_50);
  local_res8 = 0;
  if ((char)param_1[10] == '\0') {
    uVar11 = *(uint *)((longlong)param_1 + 0xc);
    param_3 = (uint *)(ulonglong)uVar11;
    if (uVar11 == 0) goto LAB_1800eaa9d;
    uVar12 = 0;
    do {
      uVar3 = (int)param_3 + uVar12 >> 1;
      uVar6 = *(ulonglong *)(*param_1 + (ulonglong)uVar3 * 0x18);
      if (param_2 < uVar6) {
        param_3 = (uint *)(ulonglong)uVar3;
      }
      else {
        if (param_2 <= uVar6) break;
        uVar12 = uVar3 + 1;
        uVar3 = uVar12;
      }
    } while ((uint)param_3 != uVar12);
    if ((uVar3 == uVar11) || (*(ulonglong *)(*param_1 + (ulonglong)uVar3 * 0x18) != param_2))
    goto LAB_1800eaa9d;
  }
  puVar4 = (undefined4 *)FUN_1800eae18(param_1,&local_res10);
  if (puVar4 != (undefined4 *)0x0) {
    plVar1 = (longlong *)(puVar4 + 2);
    *puVar4 = 0;
    local_res18[0] = 0xffffffff;
    local_58 = plVar1;
    lVar5 = FUN_1800eae98((longlong)plVar1,local_res18);
    if (lVar5 == 0) {
      local_res18[0] = 0;
    }
    else {
      local_res18[0] = *(uint *)(lVar5 + 0x14);
    }
    local_b8 = (longlong *)0x0;
    uVar11 = puVar4[6];
    plVar10 = (longlong *)0x0;
joined_r0x0001800ea836:
    do {
      uVar12 = uVar11;
      if (uVar12 == 0) goto LAB_1800ea9b3;
      local_a0 = uVar12 - 1;
      if (local_a0 < (uint)puVar4[6]) {
        lVar5 = *(longlong *)(puVar4 + 4);
        plVar10 = (longlong *)((ulonglong)local_a0 * 0x30);
        local_70 = (longlong *)(lVar5 + 0x18 + (longlong)plVar10);
        local_78 = (longlong *)(lVar5 + 0x10 + (longlong)plVar10);
        param_3 = (uint *)(lVar5 + 0x24 + (longlong)plVar10);
        puVar13 = (uint *)(lVar5 + 0x20 + (longlong)plVar10);
        local_60 = (longlong *)(lVar5 + 0x28 + (longlong)plVar10);
        local_68 = param_3;
      }
      else {
        local_78 = (longlong *)&DAT_00000008;
        local_70 = (longlong *)&DAT_00000010;
        local_68 = (uint *)&DAT_0000001c;
        local_60 = (longlong *)&DAT_00000020;
        puVar13 = (uint *)&DAT_00000018;
      }
      plVar1 = local_58;
      uVar11 = local_a0;
      if (*puVar13 != 0xffffffff) {
        uVar3 = FUN_1800ea354(plVar10,local_78,param_3,param_5,param_6);
        uVar11 = local_res20;
        if ((param_8 != (longlong *)0x0) && ((int)param_8[1] != 0)) {
          plVar10 = (longlong *)0x0;
          param_3 = (uint *)(ulonglong)*puVar13;
          do {
            if (*puVar13 == *(uint *)(*param_8 + 4 + (longlong)plVar10 * 8)) {
              lVar5 = (longlong)plVar10 * 8;
              plVar10 = (longlong *)((ulonglong)local_b8 | 1L << ((ulonglong)plVar10 & 0x3f));
              uVar11 = *(uint *)(*param_8 + lVar5);
              local_b8 = plVar10;
              break;
            }
            uVar9 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar9;
          } while (uVar9 < *(uint *)(param_8 + 1));
        }
        if ((uVar3 != local_res18[0]) || (uVar11 != local_res20)) {
          local_a8 = *puVar13;
          plVar10 = param_9;
          local_b0 = uVar3;
          local_ac = uVar11;
          FUN_1800ead80(param_9,(undefined8 *)&local_b0);
          if (uVar11 != local_res20) {
            *local_78 = param_5;
            *local_70 = param_6;
            *local_68 = uVar11;
            *local_60 = param_7;
            plVar1 = local_58;
            uVar11 = local_a0;
            plVar10 = local_60;
            goto joined_r0x0001800ea836;
          }
        }
        for (; uVar12 < (uint)puVar4[6]; uVar12 = uVar12 + 1) {
          param_3 = *(uint **)(puVar4 + 4);
          uVar6 = (ulonglong)(uVar12 - 1);
          uVar7 = (ulonglong)uVar12;
          plVar10 = (longlong *)(uVar7 * 6);
          uVar2 = *(undefined8 *)(param_3 + uVar7 * 0xc + 2);
          *(undefined8 *)(param_3 + uVar6 * 0xc) = *(undefined8 *)(param_3 + uVar7 * 0xc);
          *(undefined8 *)(param_3 + uVar6 * 0xc + 2) = uVar2;
          uVar2 = *(undefined8 *)(param_3 + uVar7 * 0xc + 4 + 2);
          *(undefined8 *)(param_3 + uVar6 * 0xc + 4) = *(undefined8 *)(param_3 + uVar7 * 0xc + 4);
          *(undefined8 *)(param_3 + uVar6 * 0xc + 4 + 2) = uVar2;
          uVar2 = *(undefined8 *)(param_3 + uVar7 * 0xc + 8 + 2);
          *(undefined8 *)(param_3 + uVar6 * 0xc + 8) = *(undefined8 *)(param_3 + uVar7 * 0xc + 8);
          *(undefined8 *)(param_3 + uVar6 * 0xc + 8 + 2) = uVar2;
        }
        puVar4[6] = puVar4[6] - 1;
        plVar1 = local_58;
        uVar11 = local_a0;
      }
    } while( true );
  }
LAB_1800eaa9d:
  LeaveCriticalSection(local_50);
  return local_res8;
LAB_1800ea9b3:
  if ((param_8 != (longlong *)0x0) && (uVar6 = 0, (int)param_8[1] != 0)) {
    do {
      uVar11 = local_res18[0];
      if (((ulonglong)local_b8 >> (uVar6 & 0x3f) & 1) == 0) {
        uVar12 = *(uint *)(*param_8 + uVar6 * 8);
        if (uVar12 != local_res18[0]) {
          local_98 = param_5;
          puVar13 = (uint *)(*param_8 + 4 + uVar6 * 8);
          local_90 = param_6;
          local_88 = *puVar13;
          param_3 = (uint *)&local_98;
          local_80 = param_7;
          local_84 = uVar12;
          FUN_1800eaf04(plVar1,puVar13,(undefined8 *)param_3);
          local_a8 = local_88;
          local_b0 = uVar11;
          local_ac = uVar12;
          FUN_1800ead80(param_9,(undefined8 *)&local_b0);
        }
      }
      uVar11 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)(param_8 + 1));
  }
  local_res18[0] = 0xffffffff;
  plVar10 = plVar1;
  plVar8 = (longlong *)FUN_1800eae98((longlong)plVar1,local_res18);
  if (plVar8 == (longlong *)0x0) {
    local_84 = local_res20;
    local_80 = param_7;
    local_98 = param_5;
    local_90 = param_6;
    local_88 = 0xffffffff;
    local_res18[0] = 0xffffffff;
    FUN_1800eaf04(plVar1,local_res18,&local_98);
  }
  else {
    local_res8 = FUN_1800ea354(plVar10,plVar8,param_3,param_5,param_6);
    *(uint *)((longlong)plVar8 + 0x14) = local_res20;
    plVar8[3] = param_7;
    *plVar8 = param_5;
    plVar8[1] = param_6;
    *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  }
  goto LAB_1800eaa9d;
}

