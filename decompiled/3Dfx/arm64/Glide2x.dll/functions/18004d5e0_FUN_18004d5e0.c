/*
 * FUN_18004d5e0 at 18004d5e0
 * uint __cdecl FUN_18004d5e0(ulonglong param_1, longlong * param_2, uint param_3, longlong * param_4, int * param_5, undefined8 * param_6, uint param_7, ulonglong param_8)
 * Address ranges: 18004d5e0-18004dc4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18004d5e0(ulonglong param_1,longlong *param_2,uint param_3,longlong *param_4,int *param_5,
                  undefined8 *param_6,uint param_7,ulonglong param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  int extraout_w12_00;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  int local_14c;
  undefined8 *local_140;
  longlong local_138;
  int local_130;
  int iStack_12c;
  longlong *local_128;
  ulonglong local_120;
  longlong *local_118;
  undefined8 *local_110;
  ulonglong uStack_108;
  longlong local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  longlong local_d0;
  int iStack_c8;
  uint uStack_c4;
  int local_c0;
  int iStack_bc;
  ulonglong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_78 [8];
  int local_70 [8];
  
  uVar12 = (ulonglong)param_7;
  uVar19 = param_8 & 0xffffffff;
  local_120 = param_1;
  local_118 = param_4;
  iVar8 = (**(code **)(*param_2 + 0x70))(param_2,local_70,auStack_78);
  if (iVar8 < 0) {
    return 0;
  }
  lVar9 = (**(code **)(*param_2 + 0x50))(param_2,&local_b0);
  local_14c = *(int *)(lVar9 + 0x20);
  if ((local_70[0] == 4) && (1 < local_14c - 0x2cU)) {
    local_140 = (undefined8 *)0x0;
    local_138 = 0;
    iVar8 = (**(code **)(*param_2 + 0x40))(param_2,param_3,&local_140,0);
    if (-1 < iVar8) {
      plVar16 = *(longlong **)(param_1 + 0xb18);
      uVar13 = 1;
      local_128 = param_2;
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar16 + 5));
      lVar9 = FUN_1800468c8(plVar16,(ulonglong *)&local_128);
      if (lVar9 != 0) {
        uVar10 = FUN_180045860(lVar9,lVar9,0);
        uVar13 = (uint)uVar10 & 0xff;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar16 + 5));
      if (uVar13 != 0) {
        (**(code **)(*param_2 + 0x60))(param_2,param_3,param_5,param_6,uVar12,uVar19);
      }
      (**(code **)(*param_2 + 0x48))(param_2,param_3,0);
      if (uVar13 != 0) {
        return uVar13;
      }
    }
    uStack_108 = 0;
    local_110 = (undefined8 *)0x0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    if (*(longlong *)(local_120 + 0xb10) != 0) {
      if (local_14c == 0) {
        lVar9 = (**(code **)(*param_2 + 0x50))(param_2,&local_b0);
        local_14c = *(int *)(lVar9 + 0x20);
      }
      FUN_180048f88(local_14c);
      uVar11 = FUN_180049030(local_14c);
      if (local_14c - 0x46U < 0xf) {
        uVar14 = 4;
        uVar13 = 4;
      }
      else {
        uVar14 = 1;
        if (local_14c - 0x44U < 2) {
          uVar13 = 2;
        }
        else {
          uVar13 = 1;
        }
      }
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18004d7b4);
        (*pcVar6)();
      }
      uVar1 = 0;
      if (uVar14 != 0) {
        uVar1 = (uint)(param_5[4] - param_5[1]) / uVar14;
      }
      iVar8 = (int)uVar11;
      if (iVar8 == 0) {
        iVar8 = extraout_w12;
      }
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18004d7d8);
        (*pcVar6)();
      }
      uVar2 = 0;
      if (uVar13 != 0) {
        uVar2 = (uint)(iVar8 * (param_5[3] - *param_5)) / uVar13;
      }
      if (local_14c - 0x2cU < 2) {
        uVar11 = FUN_180048f88(0x2a);
        uVar13 = (int)uVar11 * extraout_w10 + 0xffU & 0xffffff00;
        local_14c = 0x2a;
        uVar15 = uVar13;
      }
      else {
        uVar13 = uVar2 + 0xff & 0xffffff00;
        uVar15 = (param_5[5] - param_5[2]) * uVar13;
      }
      uVar15 = uVar15 * uVar1;
      bVar7 = FUN_180058638(local_118,uVar15,(longlong *)&local_110);
      if (bVar7) {
        if (param_7 == uVar13 && uVar2 == param_7) {
          uVar18 = param_5[2];
          if (uVar18 < (uint)param_5[5]) {
            puVar17 = local_110;
            do {
              uVar3 = 0;
              if (uVar14 != 0) {
                uVar3 = ((param_5[4] - param_5[1]) * uVar2) / uVar14;
              }
              thunk_FUN_180001218(puVar17,param_6,(ulonglong)uVar3);
              uVar18 = uVar18 + 1;
              param_6 = (undefined8 *)((longlong)param_6 + uVar19);
              puVar17 = (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar13 * uVar1));
            } while (uVar18 < (uint)param_5[5]);
          }
        }
        else {
          uVar14 = param_5[2];
          uVar18 = uVar1;
          puVar5 = param_6;
          puVar17 = local_110;
          puVar4 = local_140;
          if (uVar14 < (uint)param_5[5]) {
            do {
              for (; local_140 = puVar5, local_128 = param_2, uVar18 != 0; uVar18 = uVar18 - 1) {
                thunk_FUN_180001218(puVar17,param_6,(ulonglong)uVar2);
                param_6 = (undefined8 *)((longlong)param_6 + uVar12);
                puVar5 = local_140;
                puVar17 = (undefined8 *)((longlong)puVar17 + (ulonglong)uVar13);
                puVar4 = local_140;
                param_2 = local_128;
              }
              uVar14 = uVar14 + 1;
              param_6 = (undefined8 *)((longlong)local_140 + uVar19);
              local_140 = puVar4;
              uVar18 = uVar1;
              puVar5 = param_6;
            } while (uVar14 < (uint)param_5[5]);
          }
        }
        goto LAB_18004db10;
      }
    }
  }
  else {
    uStack_108 = 0;
    local_110 = (undefined8 *)0x0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    if (*(longlong *)(local_120 + 0xb10) != 0) {
      if (local_14c == 0) {
        lVar9 = (**(code **)(*param_2 + 0x50))(param_2,&local_b0);
        local_14c = *(int *)(lVar9 + 0x20);
      }
      FUN_180048f88(local_14c);
      uVar11 = FUN_180049030(local_14c);
      if (local_14c - 0x46U < 0xf) {
        uVar14 = 4;
        uVar13 = 4;
      }
      else {
        uVar14 = 1;
        if (local_14c - 0x44U < 2) {
          uVar13 = 2;
        }
        else {
          uVar13 = 1;
        }
      }
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18004d9a0);
        (*pcVar6)();
      }
      uVar1 = 0;
      if (uVar14 != 0) {
        uVar1 = (uint)(param_5[4] - param_5[1]) / uVar14;
      }
      iVar8 = (int)uVar11;
      if (iVar8 == 0) {
        iVar8 = extraout_w12_00;
      }
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18004d9c4);
        (*pcVar6)();
      }
      uVar2 = 0;
      if (uVar13 != 0) {
        uVar2 = (uint)(iVar8 * (param_5[3] - *param_5)) / uVar13;
      }
      if (local_14c - 0x2cU < 2) {
        uVar11 = FUN_180048f88(0x2a);
        uVar13 = (int)uVar11 * extraout_w10_00 + 0xffU & 0xffffff00;
        local_14c = 0x2a;
        uVar15 = uVar13;
      }
      else {
        uVar13 = uVar2 + 0xff & 0xffffff00;
        uVar15 = (param_5[5] - param_5[2]) * uVar13;
      }
      uVar15 = uVar15 * uVar1;
      bVar7 = FUN_180058638(local_118,uVar15,(longlong *)&local_110);
      if (bVar7) {
        if (param_7 == uVar13 && uVar2 == param_7) {
          uVar18 = param_5[2];
          if (uVar18 < (uint)param_5[5]) {
            puVar17 = local_110;
            do {
              uVar3 = 0;
              if (uVar14 != 0) {
                uVar3 = ((param_5[4] - param_5[1]) * uVar2) / uVar14;
              }
              thunk_FUN_180001218(puVar17,param_6,(ulonglong)uVar3);
              uVar18 = uVar18 + 1;
              param_6 = (undefined8 *)((longlong)param_6 + uVar19);
              puVar17 = (undefined8 *)((longlong)puVar17 + (ulonglong)(uVar13 * uVar1));
            } while (uVar18 < (uint)param_5[5]);
          }
        }
        else {
          uVar14 = param_5[2];
          uVar18 = uVar1;
          puVar5 = param_6;
          puVar17 = local_110;
          puVar4 = local_140;
          if (uVar14 < (uint)param_5[5]) {
            do {
              for (; local_140 = puVar5, local_128 = param_2, uVar18 != 0; uVar18 = uVar18 - 1) {
                thunk_FUN_180001218(puVar17,param_6,(ulonglong)uVar2);
                param_6 = (undefined8 *)((longlong)param_6 + uVar12);
                puVar5 = local_140;
                puVar17 = (undefined8 *)((longlong)puVar17 + (ulonglong)uVar13);
                puVar4 = local_140;
                param_2 = local_128;
              }
              uVar14 = uVar14 + 1;
              param_6 = (undefined8 *)((longlong)local_140 + uVar19);
              local_140 = puVar4;
              uVar18 = uVar1;
              puVar5 = param_6;
            } while (uVar14 < (uint)param_5[5]);
          }
        }
        goto LAB_18004db10;
      }
    }
  }
  uVar13 = local_f0._4_4_;
  uVar15 = (uint)local_f0;
  local_14c = (int)uStack_e8;
LAB_18004db10:
  uVar19 = uStack_108;
  uVar12 = local_120;
  bVar7 = uStack_108 != 0;
  if (bVar7) {
    FUN_180046350(*(longlong **)(local_120 + 0xb18),uStack_108,0,1,*(ulonglong *)(local_120 + 0xb10)
                  ,local_120,0x800,*(ulonglong *)(local_120 + 0xb78));
    FUN_18004b098(uVar12,(ulonglong)param_2,param_3,0,0x400);
    uVar10 = uStack_f8;
    lVar9 = local_100;
    FUN_180058d08((longlong)local_118,uVar15,local_100,uStack_f8,
                  *(longlong **)(*(longlong *)(uVar12 + 0xb10) + 0x18),
                  *(ulonglong *)(uVar12 + 0xb78));
    local_d8 = 1;
    local_d0 = lVar9 - uVar10;
    local_e0 = uVar19;
    local_b8 = (ulonglong)uVar13;
    local_a8 = 0;
    _iStack_c8 = CONCAT44(param_5[3] - *param_5,local_14c);
    uStack_90 = 0;
    local_98 = 0;
    local_88 = 0;
    local_130 = param_5[4] - param_5[1];
    local_140 = (undefined8 *)0x0;
    iStack_12c = param_5[5] - param_5[2];
    local_138 = (ulonglong)(uint)(param_5[3] - *param_5) << 0x20;
    _local_c0 = CONCAT44(iStack_12c,local_130);
    local_b0 = param_2;
    local_a0 = (ulonglong)param_3;
    FUN_18004a790(uVar12);
    FUN_18004a830(uVar12);
    (**(code **)(**(longlong **)(uVar12 + 0x688) + 0x80))
              (*(longlong **)(uVar12 + 0x688),&local_b0,*param_5,param_5[1],param_5[2],&local_e0,
               &local_140);
    FUN_18004a7e0(uVar12);
  }
  return (uint)bVar7;
}

