/*
 * FUN_10030f48 at 10030f48
 * undefined FUN_10030f48(void)
 * Address ranges: 10030f48-100313e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10030f48(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined8 uVar11;
  char local_d0 [4];
  undefined *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined1 auStack_80 [64];
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = param_1 * 0x228;
  if ((&DAT_101389aa)[iVar2] == '\0') {
    return 0;
  }
  local_c8 = param_3;
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_cc = (undefined *)(*extraout_w11)(uVar6);
  if (param_2 == 0 || (undefined *)param_2 == local_cc) {
    bVar4 = true;
    if (param_2 != 0) goto LAB_10030fdc;
  }
  else {
    bVar4 = false;
LAB_10030fdc:
    if (!bVar4) {
      iVar7 = (*(code *)PTR_FUN_101341b4)(param_2,auStack_80,0x40);
      if (iVar7 == 0) {
        return 0;
      }
      FUN_100feec0(auStack_80);
      iVar7 = FUN_100fef80(auStack_80,&DAT_1012ba00);
      bVar4 = iVar7 == 0;
      if ((iVar7 != 0) &&
         (iVar7 = (*(code *)PTR_FUN_101341dc)(param_2), local_cc == (undefined *)iVar7)) {
        iVar7 = FUN_100fef80(auStack_80,s_mciwndclass_1012ba10);
        bVar4 = iVar7 == 0;
      }
      if (!bVar4) {
        return 0;
      }
    }
  }
  uVar6 = (*pcVar3)();
  cVar5 = (*extraout_w11_00)(uVar6);
  if (cVar5 != '\0') {
    return 0;
  }
  FUN_10030448(local_d0);
  local_cc = &DAT_10138998 + param_1 * 0x228;
  piVar1 = (int *)(&DAT_1013899c + param_1 * 0x228);
  if (*piVar1 != 0) goto LAB_10031344;
  iVar7 = *(int *)(&DAT_10138998 + iVar2);
  if (iVar7 == 0) {
LAB_100310f4:
    puVar8 = (undefined4 *)FUN_100febf0(0x88);
    if (puVar8 != (undefined4 *)0x0) {
      local_c0 = *(undefined4 *)(&DAT_1013895c + iVar2);
      local_c4 = *(undefined4 *)(&DAT_10138958 + iVar2);
      local_bc = *(undefined4 *)(&DAT_1013893c + param_1 * 0x45);
      uStack_b8 = *(undefined4 *)((int)&DAT_1013893c + iVar2 + 4);
      puVar8[1] = (&DAT_101387c0)[param_1 * 0x8a];
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      puVar8[6] = 0xffffffff;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0xe) = 0;
      *(undefined8 *)(puVar8 + 0x14) = 0;
      *(undefined8 *)(puVar8 + 0x12) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 0x16) = 0;
      *(undefined8 *)(puVar8 + 9) = 0;
      *puVar8 = &PTR_FUN_101293ac;
      puVar8[0x1a] = local_c8;
      uVar6 = (*pcVar3)();
      uVar6 = (*extraout_w11_01)(uVar6);
      uStack_98 = 0;
      puVar8[0x1b] = uVar6;
      puVar10 = puVar8 + 8;
      puVar8[0x1c] = local_c4;
      local_88 = (uint)local_88._3_1_ << 0x18;
      puVar8[0x1d] = local_c0;
      uVar11 = *(undefined8 *)(&DAT_10138970 + param_1 * 0x228);
      *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(param_1 * 0x228 + 0x10138978);
      *(undefined8 *)(puVar8 + 0x1e) = uVar11;
      local_a0 = local_bc;
      uStack_9c = uStack_b8;
      *(undefined8 *)(puVar8 + 9) = 0;
      *(ulonglong *)(puVar8 + 7) = CONCAT44(uStack_b8,local_bc);
      *(undefined8 *)(puVar8 + 0xb) = 1;
      puVar8[0xd] = local_88;
      *(undefined4 **)(&DAT_10138998 + iVar2) = puVar8;
      uVar6 = (*pcVar3)();
      iVar7 = (*extraout_w11_02)(uVar6,*extraout_w8,*puVar10,5,1,0,0);
      puVar8[2] = iVar7;
      if (iVar7 != 0) {
        uVar6 = (*pcVar3)();
        (*extraout_w11_03)(uVar6,&local_b0,5);
        puVar8[0xe] = 0x20;
        puVar8[0xf] = local_b0;
        puVar8[0x10] = uStack_ac;
        puVar8[0x11] = local_a8;
        goto LAB_100312e4;
      }
      iVar7 = *(int *)(&DAT_10138998 + iVar2);
      if (iVar7 != 0) {
        FUN_100320a0(iVar7);
        FUN_100fec90(iVar7,0x88);
      }
    }
    *(undefined4 *)(&DAT_10138998 + iVar2) = 0;
  }
  else if (((int)*(undefined8 *)(iVar7 + 0x1c) != *(int *)(&DAT_1013893c + param_1 * 0x45)) ||
          ((int)((ulonglong)*(undefined8 *)(iVar7 + 0x1c) >> 0x20) !=
           *(int *)((int)&DAT_1013893c + iVar2 + 4))) {
    FUN_100320a0(iVar7);
    FUN_100fec90(iVar7,0x88);
    goto LAB_100310f4;
  }
LAB_100312e4:
  iVar2 = *(int *)(&DAT_10138998 + iVar2);
  if (iVar2 != 0) {
    iVar7 = 0;
    uVar9 = FUN_10036470(iVar2 + 4);
    if (((uVar9 & 1) != 0) && (iVar7 = (*(code *)PTR_FUN_10134004)(0), iVar7 != 0)) {
      uVar6 = (*(code *)PTR_FUN_10134034)(iVar7,*(undefined4 *)(iVar2 + 0x48));
      *(undefined4 *)(iVar2 + 0x50) = uVar6;
    }
    *piVar1 = iVar7;
    *(undefined4 *)(local_cc + 8) = 0;
  }
LAB_10031344:
  if (*piVar1 != 0) {
    *(int *)(local_cc + 8) = *(int *)(local_cc + 8) + 1;
  }
  *param_4 = 1;
  iVar2 = *piVar1;
  if (local_d0[0] == '\0') {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  else {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  piVar1 = (int *)(DAT_1013d014 + 0x20);
  do {
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  return iVar2;
}

