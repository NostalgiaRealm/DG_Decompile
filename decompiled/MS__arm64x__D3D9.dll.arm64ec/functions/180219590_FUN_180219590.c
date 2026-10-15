/*
 * FUN_180219590 at 180219590
 * undefined FUN_180219590(void)
 * Address ranges: 180219590-1802198bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180219590(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  code *extraout_x11;
  ulonglong uVar14;
  longlong local_e8;
  undefined8 local_e0;
  uint *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  plVar1 = (longlong *)(param_2 + 0xda0);
  if (*plVar1 == 0) {
    uVar12 = *(uint *)(param_2 + 0x28);
    goto LAB_1802196f4;
  }
  uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  puVar10 = (undefined8 *)(*extraout_x11)(uVar9,&local_d0);
  uVar12 = *(uint *)(param_2 + 0x20);
  uStack_c8 = puVar10[1];
  local_d0 = *puVar10;
  local_b8 = puVar10[3];
  local_c0 = puVar10[2];
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1802195fc);
    (*pcVar6)();
  }
  uVar4 = 0;
  if (uVar12 != 0) {
    uVar4 = *(uint *)(param_2 + 0x18) / uVar12;
  }
  if (local_c0 == uVar4) {
    uVar12 = *(uint *)(param_2 + 0x24);
    if (uVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18021961c);
      (*pcVar6)();
    }
    uVar4 = 0;
    if (uVar12 != 0) {
      uVar4 = *(uint *)(param_2 + 0x1c) / uVar12;
    }
    if ((uint)local_b8 != uVar4) goto LAB_18021963c;
    uVar12 = *(uint *)(param_2 + 0x28);
    bVar7 = uVar12 < param_3;
  }
  else {
LAB_18021963c:
    bVar7 = true;
    uVar14 = 0;
    lVar13 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    if (*(int *)(param_2 + 0x28) != 0) {
      do {
        if (plVar1[uVar14] != 0) {
          FUN_180206a20(param_1);
          plVar1[uVar14] = 0;
        }
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(param_2 + 0x28));
    }
    iVar8 = *(int *)(param_2 + 0xdb0);
    if (iVar8 != -1) {
      lVar11 = *(longlong *)(lVar13 + 0x2230);
      thunk_FUN_1802236f8(lVar11 + 0x28);
      FUN_18020c678(lVar11,iVar8,2);
      thunk_FUN_18022370c(lVar11 + 0x28);
    }
    iVar8 = *(int *)(param_2 + 0xdb4);
    if (iVar8 != -1) {
      lVar13 = *(longlong *)(lVar13 + 0x2238);
      thunk_FUN_1802236f8(lVar13 + 0x28);
      FUN_18020c678(lVar13,iVar8,2);
      thunk_FUN_18022370c(lVar13 + 0x28);
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
    uVar12 = 0;
  }
  if (!bVar7) {
    return;
  }
LAB_1802196f4:
  uStack_c8 = 0;
  piVar2 = (int *)(param_2 + 0xdb4);
  piVar3 = (int *)(param_2 + 0xdb0);
  lVar13 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  local_d0 = CONCAT44(local_d0._4_4_,3);
  uVar4 = *(uint *)(param_2 + 0x20);
  local_e8 = lVar13;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18021972c);
    (*pcVar6)();
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = *(uint *)(param_2 + 0x18) / uVar4;
  }
  local_c0 = (ulonglong)uVar5;
  uVar4 = *(uint *)(param_2 + 0x24);
  if (uVar4 != 0) {
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = *(uint *)(param_2 + 0x1c) / uVar4;
    }
    local_b8 = CONCAT44(0x10001,uVar5);
    local_88 = 0;
    local_80 = 0;
    local_b0 = *(undefined4 *)(&DAT_180238808 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_50 = 0;
    local_ac = 1;
    local_a4 = 0x100000000;
    local_90 = *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(param_2 + 0x34) * 4);
    uStack_8c = 4;
    local_6c = 0x168800000004;
    local_60 = 0xffffffff00000000;
    uStack_58 = 0;
    local_70 = local_90;
    if (uVar12 == 0 && (uVar12 == 0 && param_3 != 0)) {
      iVar8 = FUN_18020c7c8(*(undefined8 *)(lVar13 + 0x2230),2);
      *piVar3 = iVar8;
      iVar8 = FUN_18020c7c8(*(undefined8 *)(lVar13 + 0x2238),2);
      *piVar2 = iVar8;
    }
    lVar13 = local_e8;
    if ((*piVar3 != -1) && (*piVar2 != -1)) {
      local_d8 = (uint *)(param_2 + 0x28);
      for (uVar12 = *(uint *)(param_2 + 0x28); uVar12 < param_3; uVar12 = uVar12 + 1) {
        uVar14 = (ulonglong)uVar12;
        lVar11 = FUN_18020d528(param_1 + 0x6d0,*(undefined4 *)(param_2 + 0x10),&local_d0);
        plVar1[uVar14] = lVar11;
        if (lVar11 == 0) {
          return;
        }
        FUN_18020d168(*(undefined8 *)(lVar13 + 0x2230),&local_e8,*piVar3,uVar14);
        FUN_18020d3a0(param_1 + 0x6d0,*(undefined4 *)(param_2 + 0x10),plVar1[uVar14],&local_70,
                      local_e8);
        FUN_18020d168(*(undefined8 *)(lVar13 + 0x2238),&local_e0,*piVar2,uVar14);
        FUN_18020d3e8(param_1 + 0x6d0,*(undefined4 *)(param_2 + 0x10),plVar1[uVar14],&local_90,
                      local_e0);
        *local_d8 = *local_d8 + 1;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180219744);
  (*pcVar6)();
}

