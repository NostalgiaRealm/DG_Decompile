/*
 * FUN_1004be18 at 1004be18
 * undefined FUN_1004be18(void)
 * Address ranges: 1004be18-1004c1e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004be18(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *extraout_w8;
  ulonglong uVar9;
  char cVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [12];
  undefined4 local_e90 [2];
  undefined8 *local_e88;
  int local_e84;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined1 *local_e70;
  undefined4 uStack_e6c;
  undefined8 local_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined1 auStack_e20 [22];
  undefined1 auStack_e0a [66];
  undefined8 local_dc8;
  undefined4 local_dc0;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  ulonglong local_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined1 auStack_9f0 [72];
  ulonglong local_9a8;
  undefined1 auStack_9a0 [600];
  undefined1 auStack_748 [1800];
  
  *(undefined8 *)(*param_1 + param_2 * 0x18) = param_3;
  iVar5 = *param_1 + param_2 * 0x18;
  *(undefined8 *)(iVar5 + 8) = *param_4;
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_4 + 1);
  auVar13 = FUN_1007fae0(param_1,*(undefined4 *)param_4,auStack_748,*(undefined1 *)(param_4 + 1));
  iVar5 = auVar13._8_4_;
  local_e90[0] = 0;
  uVar12 = auVar13._0_8_ & 0xffffffff;
  if (*(int *)(iVar5 + 4) == 0) {
    puVar6 = (undefined4 *)(param_1[5] + *(int *)((int)param_4 + 4) * 4);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar3,auStack_748,uVar12,*puVar6,*extraout_w8,local_e90);
  }
  else {
    uVar11 = 0;
    uVar7 = 0;
    if (*(uint *)(iVar5 + 8) != 0) {
      do {
        bVar1 = *(byte *)(iVar5 + 0x214 + uVar7);
        uVar7 = uVar7 + 1;
        uVar11 = (ulonglong)*(byte *)(iVar5 + 0x1a + (uint)bVar1 * 8) <<
                 (((ulonglong)bVar1 & 0xf) << 2) | uVar11;
      } while (uVar7 < *(uint *)(iVar5 + 8));
    }
    local_e80 = 0x200;
    local_e7c = 1;
    puVar2 = (undefined8 *)FUN_101322b0(0x200);
    local_e68 = 0;
    local_e70 = auStack_9a0;
    local_e60 = 0;
    uStack_e6c = local_e84;
    local_e88 = puVar2;
    uVar4 = FUN_101325d0(auStack_e20,0,0x430);
    uVar9 = 0;
    do {
      uVar8 = (uint)uVar9;
      (&DAT_10170b40)[uVar8] =
           (&DAT_10162050)[uVar8 & 0xf] | (&DAT_10162050)[(int)(uVar9 >> 4)] << 0xc;
      iVar5 = (&DAT_10162050)[uVar8 + 2 >> 4];
      uVar9 = (ulonglong)(uVar8 + 4);
      uVar7 = (&DAT_10162050)[uVar8 + 2 & 0xf];
      (&DAT_10170b44)[uVar8] =
           (&DAT_10162050)[uVar8 + 1 & 0xf] | (&DAT_10162050)[uVar8 + 1 >> 4] << 0xc;
      (&DAT_10170b48)[uVar8] = uVar7 | iVar5 << 0xc;
      (&DAT_10170b4c)[uVar8] =
           (&DAT_10162050)[uVar8 + 3 & 0xf] | (&DAT_10162050)[uVar8 + 3 >> 4] << 0xc;
    } while (uVar8 + 4 < 0x100);
    uStack_d98 = 0;
    uStack_cc8 = 0;
    uStack_d88 = 0;
    local_d90 = 0;
    uStack_d78 = 0;
    uStack_d80 = 0;
    uStack_d68 = 0;
    local_d70 = 0;
    uStack_d58 = 0;
    uStack_d60 = 0;
    uStack_d48 = 0;
    local_d50 = 0;
    uStack_d38 = 0;
    uStack_d40 = 0;
    uStack_d28 = 0;
    local_d30 = 0;
    uStack_d18 = 0;
    uStack_d20 = 0;
    uStack_d08 = 0;
    local_d10 = 0;
    uStack_cf8 = 0;
    uStack_d00 = 0;
    uStack_ce8 = 0;
    local_cf0 = 0;
    uStack_cd8 = 0;
    uStack_ce0 = 0;
    local_cd0 = ZEXT48(auStack_9f0);
    local_cc0 = 0x1000000;
    uStack_e50 = 0;
    uStack_e40 = 0;
    uStack_e48 = 0;
    uStack_e30 = 0;
    uStack_e38 = 0;
    local_e58 = 0x10040;
    local_e28 = (ulonglong)CONCAT24(0x40,auStack_e0a);
    local_da0 = 0x410802;
    local_dc8 = 0x41040000110400;
    local_dc0 = 0x20000d00;
    uStack_da8 = 0x11080000210800;
    local_db0 = 0x31080000410800;
    cVar10 = '\0';
    uVar7 = 0;
    do {
      iVar5 = uVar7 + 6;
      uVar7 = uVar7 + 1;
      *(char *)((int)&uStack_d40 + iVar5) = cVar10;
      cVar10 = cVar10 + '\x01';
    } while (uVar7 < 0x11);
    *puVar2 = 0x43425844;
    puVar2[1] = 0;
    puVar2[2] = 0x100000000;
    puVar2[3] = 0x100000000;
    local_e84 = (int)puVar2 + 0x24;
    *(int *)(puVar2 + 4) = local_e84 - (int)puVar2;
    local_9a8 = uVar11;
    FUN_10098928(uVar4,&local_e88,&local_e70,0);
    FUN_10122e00(&local_e88);
    puVar2 = local_e88;
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,auStack_748,uVar12,puVar2);
    FUN_101322d0(puVar2);
  }
  *(undefined4 *)(*param_1 + param_2 * 0x18 + 0x14) = local_e90[0];
  return;
}

