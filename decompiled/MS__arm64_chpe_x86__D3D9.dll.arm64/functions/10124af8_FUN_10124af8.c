/*
 * FUN_10124af8 at 10124af8
 * undefined FUN_10124af8(void)
 * Address ranges: 10124af8-1012503b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10124af8(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 *local_120;
  int *local_11c;
  int *local_118;
  undefined1 local_110 [8];
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 auStack_bc [4];
  uint local_b8;
  undefined1 auStack_b0 [16];
  ulonglong local_a0;
  undefined4 local_98;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_2 + 0xd8c) != 0) {
    local_11c = (int *)(param_2 + 8);
    iVar3 = param_1 + *local_11c * 0x16c0;
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,auStack_b0);
    piVar1 = (int *)(iVar3 + 0x19c4);
    local_120 = (undefined8 *)(iVar3 + 0x750);
    *(int *)(*piVar1 + 0x634) = *(int *)(*piVar1 + 0x634) + 1;
    *local_120 = *(undefined8 *)(*piVar1 + 0x938);
    uVar8 = FUN_1011fe80(*(undefined4 *)(iVar3 + 0x1ca8),2,
                         *(undefined4 *)(*(int *)(iVar3 + 0x19c0) + 0xc),
                         *(undefined8 *)(*piVar1 + 0x938),&local_c8);
    if ((uVar8 & 1) != 0) {
      local_118 = (int *)(iVar3 + 0x6c8);
      uVar9 = FUN_1011bc80(*local_118 + 0x38,local_110,2,
                           *(undefined4 *)(*(int *)(iVar3 + 0x19c0) + 0xc),*local_120);
      if ((int)local_108 != 0) {
        *(int *)(*piVar1 + 0x948) = param_1;
        FUN_1010e460(uVar9,param_2,param_3,local_a0 & 0xffffffff,local_98,(int)local_108,&local_100)
        ;
        uVar5 = *(undefined4 *)(param_2 + *(int *)(param_2 + 0xd68) * 4 + 0xd70);
        (*pcVar4)();
        (*extraout_w11_00)(uVar5,auStack_78);
        FUN_10112730(*(undefined4 *)(iVar3 + 0x1c9c),&local_120,*(undefined4 *)(param_2 + 0xd78),
                     *(int *)(param_2 + 0xd68));
        iVar2 = *local_11c;
        uVar6 = FUN_10112730(*(undefined4 *)(iVar3 + 0x1c98),&local_11c,
                             *(undefined4 *)(param_2 + 0xd94),0);
        puVar7 = (undefined4 *)(*pcVar4)(uVar6);
        (*extraout_w11_01)(*(undefined4 *)(param_1 + iVar2 * 0x18 + 0x520),2,local_c0,*puVar7,0);
        *(undefined4 *)(iVar3 + 0x708) = 1;
        *(undefined4 *)(iVar3 + 0x70c) = local_58;
        uVar6 = FUN_10061858(iVar3 + 0x1cb0,&DAT_10165ae8);
        *(undefined4 *)(iVar3 + 0x6f8) = uVar6;
        uVar6 = FUN_10060cf8(iVar3 + 0x1ce0,&DAT_10165b20);
        iVar2 = *piVar1;
        *(undefined4 *)(iVar3 + 0x6f4) = uVar6;
        puVar7 = (undefined4 *)(iVar3 + 0x6d0);
        *(undefined4 *)(iVar3 + 0x6d8) = *(undefined4 *)(iVar3 + 0x1850);
        *(undefined4 *)(iVar3 + 0x6d4) = *(undefined4 *)(iVar3 + 0x1860);
        *(undefined4 *)(iVar3 + 0x6fc) = *(undefined4 *)(iVar3 + 0x1868);
        FUN_1011ec30(*(undefined4 *)(iVar2 + 0x8e4),*puVar7,*(undefined4 *)(iVar2 + 0x8e0),iVar2,
                     *(undefined8 *)(iVar2 + 0x938));
        FUN_10114b80(*piVar1,*puVar7);
        FUN_10114a90(*piVar1,1,auStack_bc);
        FUN_10114d70(*piVar1,5);
        local_108 = 0x1000000200;
        FUN_101154a0(*piVar1,0,1,local_110);
        FUN_10115820(*piVar1,1,&local_120,0,0);
        local_d0 = 0;
        local_cc = 0x3f800000;
        local_f0 = (int)local_100;
        local_e0 = local_100;
        fStack_dc = fStack_fc;
        iStack_ec = (int)fStack_fc;
        local_d8 = local_f8;
        fStack_d4 = fStack_f4;
        local_e8 = (int)(local_f8 + local_100);
        iStack_e4 = (int)(fStack_f4 + fStack_fc);
        FUN_10115c60(*piVar1,1,&local_e0);
        FUN_10115b30(*piVar1,1,&local_f0);
        FUN_10113dd8(*piVar1,uVar5,0,0,4);
        if (*(int *)(param_2 + 0xd90) == 0) {
          puVar10 = &DAT_10165fb0;
        }
        else {
          FUN_101150a0(*piVar1,1,local_c8 + (ulonglong)local_b8);
          uVar5 = FUN_100b7740(iVar3 + 0x1cc0,0x10165d10);
          *(undefined4 *)(iVar3 + 0x6ec) = uVar5;
          uVar5 = FUN_1011a318(iVar3 + 0x1d00,puVar7);
          iVar2 = *piVar1;
          FUN_1011ec30(*(undefined4 *)(iVar2 + 0x8e4),uVar5,*(undefined4 *)(iVar2 + 0x8e0),iVar2,
                       *(undefined8 *)(iVar2 + 0x938));
          FUN_10114ce0(*piVar1,uVar5);
          FUN_10113dd8(*piVar1,*(int *)(param_2 + 0xd90),0,0,0x80);
          FUN_10116190(*piVar1,4,1,0,0);
          puVar10 = (undefined *)0x10165e60;
        }
        uVar5 = FUN_100b7740(iVar3 + 0x1cc0,puVar10);
        *(undefined4 *)(iVar3 + 0x6ec) = uVar5;
        uVar5 = FUN_1011a318(iVar3 + 0x1d00,puVar7);
        FUN_10114ce0(*piVar1,uVar5);
        iVar3 = *piVar1;
        FUN_1011ec30(*(undefined4 *)(iVar3 + 0x8e4),uVar5,*(undefined4 *)(iVar3 + 0x8e0),iVar3,
                     *(undefined8 *)(iVar3 + 0x938));
        FUN_101150a0(*piVar1,1,local_c8);
        FUN_10113dd8(*piVar1,*(int *)(param_2 + 0xd8c),0,0,0x80);
        FUN_10116190(*piVar1,4,1,0,0);
        if (*(int *)(*local_118 + 0x2c) != 0) {
          *(int *)(*local_118 + 0x2c) = 0;
        }
        FUN_10113d40(*piVar1 + 4,0);
      }
    }
  }
  return;
}

