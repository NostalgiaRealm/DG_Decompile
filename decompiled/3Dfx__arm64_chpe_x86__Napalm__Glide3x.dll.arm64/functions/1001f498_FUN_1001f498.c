/*
 * FUN_1001f498 at 1001f498
 * undefined FUN_1001f498(void)
 * Address ranges: 1001f498-1001fa23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f498(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,int param_8,int param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                 undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
                 undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
                 undefined4 param_30,uint param_31,undefined4 param_32,byte param_33)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar8;
  undefined4 *local_d0;
  undefined1 auStack_cc [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  uint local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [56];
  
  piVar1 = (int *)(param_1 + 0x138);
  local_c8 = 1;
  if (param_6 != 0) {
    local_c8 = 2;
  }
  iVar6 = *(int *)(*piVar1 + 0x3688);
  local_c0 = param_5;
  local_bc = param_3;
  local_b8 = param_2;
  uVar7 = FUN_10067150(*(undefined4 *)(*piVar1 + 0x368c),local_c8,
                       *(undefined4 *)(*(int *)(iVar6 + 0x1300) + 0xc),
                       *(undefined8 *)(*(int *)(iVar6 + 0x1304) + 0x938),&local_a0);
  if ((uVar7 & 1) != 0) {
    iVar6 = *(int *)(*piVar1 + 0x3688);
    uVar3 = FUN_1005fad0(iVar6 + 0x1630,0x100a9348,1);
    FUN_100118f0(*piVar1,5,uVar3,*(undefined4 *)(param_1 + (uint)param_33 * 8 + 0x994),param_4);
    *(undefined4 *)(*piVar1 + 0x36f8) = param_11;
    *(undefined4 *)(*piVar1 + 0x36fc) = param_13;
    *(undefined4 *)(*piVar1 + 0x3718) = param_15;
    *(undefined4 *)(*piVar1 + 0x371c) = param_17;
    *(undefined4 *)(*piVar1 + 0x3720) = 0;
    local_d0 = (undefined4 *)(iVar6 + 0x15dc);
    puVar4 = (undefined4 *)FUN_10068230(*local_d0,auStack_cc,param_23,0);
    local_b0 = *puVar4;
    puVar4 = (undefined4 *)(iVar6 + 0x1304);
    if (param_7 != 0) {
      FUN_100694c8(*puVar4,param_7,0,0,4);
    }
    if (param_8 != 0) {
      puVar5 = (undefined4 *)FUN_10068230(*local_d0,auStack_cc,param_25,0);
      local_ac = *puVar5;
      FUN_100694c8(*puVar4,param_8,0,0,4);
    }
    if (param_9 != 0) {
      puVar5 = (undefined4 *)FUN_10068230(*(undefined4 *)(iVar6 + 0x15e0),auStack_cc,param_27,0);
      uVar8 = 0;
      local_c4 = *puVar5;
      if (param_31 != 0) {
        do {
          FUN_100694c8(*puVar4,param_9,uVar8,0,0x10);
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_31);
      }
    }
    piVar1 = (int *)(param_1 + 0x138);
    puVar4 = &local_c4;
    if (param_9 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    puVar5 = (undefined4 *)(iVar6 + 0x1304);
    uVar3 = 1;
    if (param_8 != 0) {
      uVar3 = 2;
    }
    FUN_1006a9d0(*puVar5,uVar3,&local_b0,0,puVar4);
    FUN_10069c40(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x1304),1,auStack_94
                );
    puVar4 = (undefined4 *)
             FUN_10068230(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x15d8),auStack_cc,param_19,0
                         );
    local_a8 = *puVar4;
    FUN_100694c8(*puVar5,local_c0,0,0,0x80);
    if (param_6 != 0) {
      puVar4 = (undefined4 *)
               FUN_10068230(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x15d8),auStack_cc,param_21
                            ,0);
      local_a4 = *puVar4;
      FUN_100694c8(*puVar5,param_6,param_29,0,0x80);
    }
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,1,auStack_98,&local_c8,local_c8,&local_a8,&DAT_100a0278,0);
    FUN_1006a250(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),2,local_a0);
    if (param_6 != 0) {
      (*pcVar2)();
      iVar6 = (*extraout_w11_00)(param_6,auStack_78);
      if ((*(uint *)(iVar6 + 0x30) >> 1 & 1) != 0) {
        local_a0 = local_a0 + (ulonglong)local_90;
        FUN_1006a250(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),0x11);
      }
    }
    FUN_10012650(*piVar1,*(undefined1 *)(*piVar1 + 0x3734));
    iVar6 = *piVar1;
    *(byte *)(iVar6 + 0x44b4) = *(byte *)(iVar6 + 0x3650) | *(byte *)(iVar6 + 0x44b4);
    FUN_10011d30(*piVar1,*(undefined1 *)(*piVar1 + 0x3734),0);
    local_d0 = (undefined4 *)0x0;
    iVar6 = FUN_1001f3d8(param_1,extraout_x1,&local_d0);
    if (local_d0 != (undefined4 *)0x0) {
      FUN_1001a940(param_1,local_b8,local_bc,local_d0 + iVar6 * 4,param_33);
      piVar1 = (int *)(*(int *)(param_1 + 0x9a0) + 0x2c);
      if (*piVar1 != 0) {
        *piVar1 = 0;
      }
    }
    local_88 = *(undefined8 *)(*(int *)(param_1 + 0x9a0) + 0x68);
    local_80 = *(undefined4 *)(*(int *)(param_1 + 0x9a0) + 0x28);
    uStack_7c = 0x10;
    FUN_1006a650(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x1304),0,1,
                 &local_88);
    FUN_1006b340(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x1304),4,1,iVar6,0)
    ;
  }
  return;
}

