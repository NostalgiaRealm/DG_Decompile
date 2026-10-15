/*
 * FUN_1001ed18 at 1001ed18
 * undefined FUN_1001ed18(void)
 * Address ranges: 1001ed18-1001f22f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ed18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,int param_8,int param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                 undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
                 undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
                 undefined4 param_30,uint param_31,undefined4 param_32,byte param_33)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 extraout_x1;
  code *extraout_w11;
  uint uVar8;
  undefined4 *local_a0;
  undefined1 auStack_9c [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [20];
  
  piVar1 = (int *)(param_1 + 0x138);
  local_98 = 1;
  if (param_6 != 0) {
    local_98 = 2;
  }
  iVar6 = *(int *)(*piVar1 + 0x3308);
  local_90 = param_5;
  local_8c = param_3;
  local_88 = param_2;
  uVar7 = FUN_10061ab0(*(undefined4 *)(*piVar1 + 0x330c),local_98,
                       *(undefined4 *)(*(int *)(iVar6 + 0x1300) + 0xc),
                       *(undefined8 *)(*(int *)(iVar6 + 0x1304) + 0x938),&local_60);
  if ((uVar7 & 1) != 0) {
    iVar6 = *(int *)(*piVar1 + 0x3308);
    uVar3 = FUN_1005a420(iVar6 + 0x1630,0x100a1238,1);
    FUN_1000f960(*piVar1,5,uVar3,*(undefined4 *)(param_1 + (uint)param_33 * 8 + 0x97c),param_4);
    *(undefined4 *)(*piVar1 + 0x3378) = param_11;
    *(undefined4 *)(*piVar1 + 0x337c) = param_13;
    *(undefined4 *)(*piVar1 + 0x3398) = param_15;
    *(undefined4 *)(*piVar1 + 0x339c) = param_17;
    *(undefined4 *)(*piVar1 + 0x33a0) = 0;
    local_a0 = (undefined4 *)(iVar6 + 0x15dc);
    puVar4 = (undefined4 *)FUN_10062b90(*local_a0,auStack_9c,param_23,0);
    local_80 = *puVar4;
    puVar4 = (undefined4 *)(iVar6 + 0x1304);
    if (param_7 != 0) {
      FUN_10063e28(*puVar4,param_7,0,0,4);
    }
    if (param_8 != 0) {
      puVar5 = (undefined4 *)FUN_10062b90(*local_a0,auStack_9c,param_25,0);
      local_7c = *puVar5;
      FUN_10063e28(*puVar4,param_8,0,0,4);
    }
    if (param_9 != 0) {
      puVar5 = (undefined4 *)FUN_10062b90(*(undefined4 *)(iVar6 + 0x15e0),auStack_9c,param_27,0);
      uVar8 = 0;
      local_94 = *puVar5;
      if (param_31 != 0) {
        do {
          FUN_10063e28(*puVar4,param_9,uVar8,0,0x10);
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_31);
      }
    }
    piVar1 = (int *)(param_1 + 0x138);
    puVar4 = &local_94;
    if (param_9 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    puVar5 = (undefined4 *)(iVar6 + 0x1304);
    uVar3 = 1;
    if (param_8 != 0) {
      uVar3 = 2;
    }
    FUN_10065330(*puVar5,uVar3,&local_80,0,puVar4);
    FUN_100645a0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3308) + 0x1304),1,auStack_54
                );
    puVar4 = (undefined4 *)
             FUN_10062b90(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x15d8),auStack_9c,param_19,0
                         );
    local_78 = *puVar4;
    FUN_10063e28(*puVar5,local_90,0,0,0x80);
    if (param_6 != 0) {
      puVar4 = (undefined4 *)
               FUN_10062b90(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x15d8),auStack_9c,param_21
                            ,0);
      local_74 = *puVar4;
      FUN_10063e28(*puVar5,param_6,param_29,0,0x80);
    }
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,1,auStack_58,&local_98,local_98,&local_78,0x10099c18,0);
    FUN_10064bb0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),2,local_60);
    FUN_100106c8(*piVar1,*(undefined1 *)(*piVar1 + 0x33b4));
    iVar6 = *piVar1;
    *(byte *)(iVar6 + 0x411c) = *(byte *)(iVar6 + 0x32d0) | *(byte *)(iVar6 + 0x411c);
    FUN_1000fda8(*piVar1,*(undefined1 *)(*piVar1 + 0x33b4),0);
    local_a0 = (undefined4 *)0x0;
    iVar6 = FUN_1001ec58(param_1,extraout_x1,&local_a0);
    if (local_a0 != (undefined4 *)0x0) {
      FUN_1001a450(param_1,local_88,local_8c,local_a0 + iVar6 * 4,param_33);
      piVar2 = (int *)(*(int *)(param_1 + 0x988) + 0x2c);
      if (*piVar2 != 0) {
        *piVar2 = 0;
      }
    }
    local_70 = *(undefined8 *)(*(int *)(param_1 + 0x988) + 0x68);
    local_68 = *(undefined4 *)(*(int *)(param_1 + 0x988) + 0x28);
    uStack_64 = 0x10;
    FUN_10064fb0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),0,1,&local_70);
    FUN_10065ca0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),4,1,iVar6,0);
  }
  return;
}

