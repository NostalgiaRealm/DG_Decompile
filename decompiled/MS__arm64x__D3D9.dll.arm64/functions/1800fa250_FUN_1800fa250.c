/*
 * FUN_1800fa250 at 1800fa250
 * undefined FUN_1800fa250(void)
 * Address ranges: 1800fa250-1800fa57f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fa250(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  plVar1 = (longlong *)(param_2 + 0xda0);
  plVar10 = (longlong *)*plVar1;
  if (plVar10 == (longlong *)0x0) {
    uVar14 = *(uint *)(param_2 + 0x28);
    goto LAB_1800fa3c0;
  }
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x50))(plVar10,&local_e0);
  uVar14 = *(uint *)(param_2 + 0x20);
  uStack_d8 = puVar11[1];
  local_e0 = *puVar11;
  local_c8 = puVar11[3];
  local_d0 = puVar11[2];
  if (uVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1800fa2b0);
    (*pcVar7)();
  }
  uVar5 = 0;
  if (uVar14 != 0) {
    uVar5 = *(uint *)(param_2 + 0x18) / uVar14;
  }
  if (local_d0 == uVar5) {
    uVar14 = *(uint *)(param_2 + 0x24);
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1800fa2d0);
      (*pcVar7)();
    }
    uVar5 = 0;
    if (uVar14 != 0) {
      uVar5 = *(uint *)(param_2 + 0x1c) / uVar14;
    }
    if ((uint)local_c8 != uVar5) goto LAB_1800fa2f0;
    uVar14 = *(uint *)(param_2 + 0x28);
    bVar8 = uVar14 < param_3;
  }
  else {
LAB_1800fa2f0:
    bVar8 = true;
    uVar13 = 0;
    lVar15 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    if (*(int *)(param_2 + 0x28) != 0) {
      do {
        if (plVar1[uVar13] != 0) {
          FUN_1800ed018(param_1);
          plVar1[uVar13] = 0;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
      } while (uVar14 < *(uint *)(param_2 + 0x28));
    }
    iVar9 = *(int *)(param_2 + 0xdb0);
    if (iVar9 != -1) {
      lVar12 = *(longlong *)(lVar15 + 0x2230);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar12 + 0x28);
      FUN_1800e70e0(lVar12,iVar9,2);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar12 + 0x28);
    }
    iVar9 = *(int *)(param_2 + 0xdb4);
    if (iVar9 != -1) {
      lVar15 = *(longlong *)(lVar15 + 0x2238);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar15 + 0x28);
      FUN_1800e70e0(lVar15,iVar9,2);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar15 + 0x28);
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
    uVar14 = 0;
  }
  if (!bVar8) {
    return;
  }
LAB_1800fa3c0:
  piVar2 = (int *)(param_2 + 0xdb4);
  uStack_d8 = 0;
  piVar3 = (int *)(param_2 + 0xdb0);
  puVar4 = (uint *)(param_2 + 0x28);
  lVar15 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  local_e0 = CONCAT44(local_e0._4_4_,3);
  uVar5 = *(uint *)(param_2 + 0x20);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1800fa3f0);
    (*pcVar7)();
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = *(uint *)(param_2 + 0x18) / uVar5;
  }
  local_d0 = (ulonglong)uVar6;
  uVar5 = *(uint *)(param_2 + 0x24);
  if (uVar5 != 0) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = *(uint *)(param_2 + 0x1c) / uVar5;
    }
    local_c8 = CONCAT44(0x10001,uVar6);
    local_98 = 0;
    local_90 = 0;
    local_c0 = *(undefined4 *)(&DAT_180232e38 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_60 = 0;
    local_bc = 1;
    local_b4 = 0x100000000;
    local_a0 = *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(param_2 + 0x34) * 4);
    uStack_9c = 4;
    local_7c = 0x168800000004;
    local_70 = 0xffffffff00000000;
    uStack_68 = 0;
    local_80 = local_a0;
    if (uVar14 == 0 && (uVar14 == 0 && param_3 != 0)) {
      iVar9 = FUN_1800e7220(*(undefined8 *)(lVar15 + 0x2230),2);
      *piVar3 = iVar9;
      iVar9 = FUN_1800e7220(*(undefined8 *)(lVar15 + 0x2238),2);
      *piVar2 = iVar9;
    }
    if (((*piVar3 != -1) && (*piVar2 != -1)) && (uVar14 = *puVar4, uVar14 < param_3)) {
      param_1 = param_1 + 0x6d0;
      do {
        lVar12 = FUN_1800e7ca8(param_1,*(undefined4 *)(param_2 + 0x10),&local_e0);
        plVar1[uVar14] = lVar12;
        if (lVar12 == 0) {
          return;
        }
        FUN_1800e7b48(*(undefined8 *)(lVar15 + 0x2230),&local_f0,*piVar3,uVar14);
        plVar10 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20);
        (**(code **)(*plVar10 + 0x90))(plVar10,plVar1[uVar14],&local_80,local_f0);
        FUN_1800e7b48(*(undefined8 *)(lVar15 + 0x2238),&local_e8,*piVar2,uVar14);
        plVar10 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20);
        (**(code **)(*plVar10 + 0xa0))(plVar10,plVar1[uVar14],&local_a0,local_e8);
        uVar14 = uVar14 + 1;
        *puVar4 = *puVar4 + 1;
      } while (uVar14 < param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1800fa408);
  (*pcVar7)();
}

