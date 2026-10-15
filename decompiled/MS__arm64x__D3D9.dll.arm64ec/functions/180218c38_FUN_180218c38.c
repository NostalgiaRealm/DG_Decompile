/*
 * FUN_180218c38 at 180218c38
 * undefined FUN_180218c38(void)
 * Address ranges: 180218c38-180218e8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180218c38(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  code *extraout_x11;
  uint uVar9;
  longlong lVar10;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  plVar1 = (longlong *)(param_2 + 0xda0);
  if (*plVar1 == 0) goto LAB_180218cf4;
  uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  puVar7 = (undefined8 *)(*extraout_x11)(uVar6,&local_c0);
  uVar9 = *(uint *)(param_2 + 0x20);
  uStack_b8 = puVar7[1];
  local_c0 = *puVar7;
  local_a8 = puVar7[3];
  local_b0 = puVar7[2];
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180218ca0);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18) / uVar9;
  }
  if (local_b0 == uVar2) {
    uVar9 = *(uint *)(param_2 + 0x24);
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180218cc0);
      (*pcVar3)();
    }
    uVar2 = 0;
    if (uVar9 != 0) {
      uVar2 = *(uint *)(param_2 + 0x1c) / uVar9;
    }
    if ((uint)local_a8 != uVar2) goto LAB_180218ce0;
    bVar4 = *(uint *)(param_2 + 0x28) < param_3;
  }
  else {
LAB_180218ce0:
    bVar4 = true;
    FUN_180218e98(param_1,param_2);
  }
  if (!bVar4) {
    return;
  }
LAB_180218cf4:
  uStack_b8 = 0;
  lVar10 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  local_c0 = CONCAT44(local_c0._4_4_,3);
  uVar9 = *(uint *)(param_2 + 0x20);
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180218d1c);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (uVar9 != 0) {
    uVar2 = *(uint *)(param_2 + 0x18) / uVar9;
  }
  local_b0 = (ulonglong)uVar2;
  uVar9 = *(uint *)(param_2 + 0x24);
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar9 != 0) {
      uVar2 = *(uint *)(param_2 + 0x1c) / uVar9;
    }
    local_a8 = CONCAT44(0x10001,uVar2);
    local_78 = 0;
    local_70 = 0;
    local_a0 = *(undefined4 *)(&DAT_180238808 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_40 = 0;
    local_9c = 1;
    local_94 = 0x100000000;
    local_80 = *(undefined4 *)(&DAT_1802389d0 + (longlong)*(int *)(param_2 + 0x34) * 4);
    uStack_7c = 4;
    local_5c = 0x168800000004;
    local_50 = 0xffffffff00000000;
    uStack_48 = 0;
    bVar4 = *(int *)(param_2 + 0x28) == 0;
    local_60 = local_80;
    if (bVar4 && (bVar4 && param_3 != 0)) {
      uVar5 = FUN_18020c7c8(*(undefined8 *)(lVar10 + 0x2230),2);
      *(undefined4 *)(param_2 + 0xdb0) = uVar5;
      uVar5 = FUN_18020c7c8(*(undefined8 *)(lVar10 + 0x2238),2);
      *(undefined4 *)(param_2 + 0xdb4) = uVar5;
    }
    if ((*(int *)(param_2 + 0xdb0) != -1) && (*(int *)(param_2 + 0xdb4) != -1)) {
      for (uVar9 = *(uint *)(param_2 + 0x28); uVar9 < param_3; uVar9 = uVar9 + 1) {
        lVar8 = FUN_18020d528(param_1 + 0x6d0,*(undefined4 *)(param_2 + 0x10),&local_c0);
        plVar1[uVar9] = lVar8;
        if (lVar8 == 0) {
          return;
        }
        FUN_18020d168(*(undefined8 *)(lVar10 + 0x2230),&local_d0,*(undefined4 *)(param_2 + 0xdb0),
                      uVar9);
        FUN_18020d3a0(param_1 + 0x6d0,*(undefined4 *)(param_2 + 0x10),plVar1[uVar9],&local_60,
                      local_d0);
        FUN_18020d168(*(undefined8 *)(lVar10 + 0x2238),&local_c8,*(undefined4 *)(param_2 + 0xdb4),
                      uVar9);
        FUN_18020d3e8(param_1 + 0x6d0,*(undefined4 *)(param_2 + 0x10),plVar1[uVar9],&local_80,
                      local_c8);
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180218d34);
  (*pcVar3)();
}

