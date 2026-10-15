/*
 * FUN_1003fa10 at 1003fa10
 * undefined FUN_1003fa10(void)
 * Address ranges: 1003fa10-1003fd87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1003fa10(int param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  code *extraout_w11;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_470;
  undefined1 uStack_46c;
  undefined1 uStack_46b;
  undefined2 uStack_46a;
  undefined4 local_468;
  undefined1 local_464;
  undefined8 local_460;
  undefined8 uStack_458;
  ulonglong local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined8 local_430;
  undefined8 uStack_428;
  ulonglong local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined1 auStack_3e0 [22];
  undefined1 auStack_3ca [66];
  undefined8 local_388;
  undefined4 local_380;
  undefined1 auStack_370 [360];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  
  iVar8 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xd9b0);
  local_470 = *(int *)(param_1 + 0x7c);
  uStack_46c = *(char *)(param_3 + 0x443) != '\0';
  uStack_46b = *(undefined1 *)(param_1 + 0x86);
  puVar6 = (undefined4 *)FUN_100febf0(0x34);
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[3] = 0;
    puVar6[4] = &PTR_FUN_10129924;
    puVar6[8] = param_2;
    *(ulonglong *)(puVar6 + 9) =
         CONCAT26(uStack_46a,CONCAT15(uStack_46b,CONCAT14(uStack_46c,local_470)));
    *puVar6 = &PTR_FUN_101296dc;
    puVar6[6] = &PTR_FUN_101296d8;
    *(undefined8 *)(puVar6 + 0xb) = 0;
    puVar6[1] = iVar2;
    puVar6[2] = iVar8;
    puVar6[7] = param_3;
    if (param_4 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_100febf0(0xc0);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *puVar7 = 0;
        puVar7[1] = 0;
        uVar12 = *param_4;
        uVar11 = param_4[3];
        uVar10 = param_4[2];
        puVar7[3] = param_4[1];
        puVar7[2] = uVar12;
        puVar7[5] = uVar11;
        puVar7[4] = uVar10;
        uVar12 = param_4[4];
        uVar11 = param_4[7];
        uVar10 = param_4[6];
        puVar7[7] = param_4[5];
        puVar7[6] = uVar12;
        puVar7[9] = uVar11;
        puVar7[8] = uVar10;
        uVar12 = param_4[8];
        uVar11 = param_4[0xb];
        uVar10 = param_4[10];
        puVar7[0xb] = param_4[9];
        puVar7[10] = uVar12;
        puVar7[0xd] = uVar11;
        puVar7[0xc] = uVar10;
        uVar12 = param_4[0xc];
        uVar11 = param_4[0xf];
        uVar10 = param_4[0xe];
        puVar7[0xf] = param_4[0xd];
        puVar7[0xe] = uVar12;
        puVar7[0x11] = uVar11;
        puVar7[0x10] = uVar10;
        uVar12 = param_4[0x10];
        uVar11 = param_4[0x13];
        uVar10 = param_4[0x12];
        puVar7[0x13] = param_4[0x11];
        puVar7[0x12] = uVar12;
        puVar7[0x15] = uVar11;
        puVar7[0x14] = uVar10;
        uVar10 = param_4[0x14];
        puVar7[0x17] = param_4[0x15];
        puVar7[0x16] = uVar10;
      }
      puVar6[3] = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        local_468 = 0x100;
        local_464 = 1;
        local_470 = FUN_100fece0(0x100);
        local_460 = CONCAT44(local_460._4_4_,param_4);
        uStack_458 = 0;
        uStack_46c = (undefined1)local_470;
        uStack_46b = (undefined1)((uint)local_470 >> 8);
        uStack_46a = (undefined2)((uint)local_470 >> 0x10);
        local_450 = (ulonglong)(uint)puVar6[7];
        uStack_428 = 0;
        local_430 = local_460;
        local_420 = local_450;
        FUN_100ff690(auStack_3e0,0,0x3a0);
        FUN_100ff690(auStack_370,0,0x330);
        local_440 = 0;
        uStack_410 = 0;
        uStack_400 = 0;
        uStack_408 = 0;
        uStack_3f0 = 0;
        uStack_3f8 = 0;
        local_418 = 0x10040;
        local_3e8 = (ulonglong)CONCAT24(0x40,auStack_3ca);
        local_388 = 0x41040000110400;
        local_380 = 0x20000d00;
        uStack_200 = 0x11080300210803;
        uStack_208 = 0x31080300410803;
        local_460 = 0x43425844;
        uStack_458 = 0;
        uStack_1f0 = 0x11080400210804;
        uStack_1f8 = 0x31080400410804;
        local_450 = 0x100000000;
        uStack_448 = 0x100000000;
        uVar10 = FUN_100ef6d8(&local_470,&local_460,0x24);
        *(int *)(local_470 + 0x20) =
             CONCAT22(uStack_46a,CONCAT11(uStack_46b,uStack_46c)) - local_470;
        FUN_1007fd60(uVar10,&local_470,&local_430);
        FUN_100ef888(&local_470);
        iVar5 = local_470;
        iVar3 = CONCAT22(uStack_46a,CONCAT11(uStack_46b,uStack_46c)) - local_470;
        puVar1 = (undefined4 *)(iVar2 + iVar8 * 0x1510 + 0x510);
        iVar8 = FUN_100428c0(param_4,extraout_x1,local_470,iVar3,*puVar1);
        puVar6[0xb] = iVar8;
        if (iVar8 == 0) {
LAB_1003fcf4:
          puVar7 = (undefined8 *)puVar6[3];
          bVar4 = false;
          if (puVar7 != (undefined8 *)0x0) {
            FUN_100fed00(*(undefined4 *)puVar7);
            *puVar7 = 0;
            *(undefined4 *)((int)puVar7 + 0xc) = 0;
            *(undefined4 *)(puVar7 + 1) = 0;
            FUN_100fec90(puVar7,0xc0);
          }
        }
        else {
          iVar8 = FUN_100428c0(param_4 + 0x16,extraout_x1_00,iVar5,iVar3,*puVar1);
          puVar6[0xc] = iVar8;
          if (iVar8 == 0) {
            uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar9);
            goto LAB_1003fcf4;
          }
          bVar4 = true;
        }
        FUN_100fed00(iVar5);
        if (bVar4) goto LAB_1003fd5c;
      }
    }
    FUN_10042a70(puVar6);
    FUN_100fec90(puVar6,0x34);
  }
  puVar6 = (undefined4 *)0x0;
LAB_1003fd5c:
  puVar1 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = puVar6 + 6;
  }
  return puVar1;
}

