/*
 * FUN_18006d278 at 18006d278
 * undefined FUN_18006d278(void)
 * Address ranges: 18006d278-18006d463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18006d278(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 local_100;
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  uint local_ec;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_100 = 0x4e475349;
  uStack_fc = 0;
  local_f8 = 0;
  uStack_f4 = 8;
  local_d8 = 0x210;
  local_d0 = 1;
  local_e8 = thunk_FUN_180102f80(0x210);
  lStack_e0 = local_e8;
  FUN_1800f5a90(&local_e8,&local_100,0x10);
  lVar11 = param_3[0xa4];
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar6 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar8 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  iVar9 = -1;
  do {
    pbVar1 = (byte *)(param_3[2] + uVar8);
    iVar7 = (int)uVar8;
    iVar10 = iVar7;
    if ((pbVar1[0x10] == 0) || (bVar3 = *pbVar1, bVar3 == 0xff)) {
      if (*pbVar1 != 0x30) {
        iVar10 = iVar9;
      }
    }
    else {
      lVar5 = *param_3;
      if (bVar3 != 0x30) {
        iVar10 = iVar9;
      }
      uVar8 = 0;
      if (*(uint *)(lVar5 + 8) != 0) {
        do {
          if ((uint)*(byte *)(lVar5 + 0x19 + (ulonglong)*(byte *)(lVar5 + 0x214 + uVar8) * 8) ==
              (uint)bVar3) {
            uStack_fc = bVar3 & 0xf;
            local_f8 = 0;
            uStack_f4 = 3;
            local_f0 = uVar6 & 0xff;
            local_ec = CONCAT11(pbVar1[0x10],0xf) & 0xffff0fff;
            uVar4 = FUN_180079d90();
            local_100 = func_0x000180212e90(&local_c0,uVar4);
            uVar6 = uVar6 + 1;
            FUN_1800f5a90(&local_e8,&local_100,0x18);
            break;
          }
          uVar2 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(lVar5 + 8));
      }
    }
    uVar8 = (ulonglong)(iVar7 + 1U);
    iVar9 = iVar10;
    if (0xf < iVar7 + 1U) {
      *(undefined4 *)(param_3 + 0xa5) = 0xffffffff;
      if ((iVar10 != -1) && (((uint)lVar11 >> 9 & 1) != 0)) {
        uStack_fc = 0;
        local_f8 = 0;
        *(uint *)(param_3 + 0xa5) = uVar6;
        local_f0 = uVar6 & 0xff;
        uStack_f4 = 3;
        local_ec = 0x70f;
        local_100 = func_0x000180212e90(&local_c0,s_NFACT_1802349f8);
        FUN_1800f5a90(&local_e8,&local_100,0x18);
        uVar6 = uVar6 + 1;
      }
      FUN_1800f5da0(&local_e8,uVar6,&local_c0);
      lVar11 = local_e8;
      FUN_1800f5a90(param_2,local_e8,lStack_e0 - local_e8);
      thunk_FUN_180102fc0(lVar11);
      return 1;
    }
  } while( true );
}

