/*
 * FUN_18006cd80 at 18006cd80
 * undefined FUN_18006cd80(void)
 * Address ranges: 18006cd80-18006cf2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18006cd80(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  local_e0 = 0x4e47534f;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 8;
  local_b8 = 0x210;
  local_b0 = 1;
  local_c8 = thunk_FUN_180102f80(0x210);
  lStack_c0 = local_c8;
  FUN_1800f5a90(&local_c8,&local_e0,0x10);
  uVar7 = 0;
  lVar8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  do {
    bVar2 = ((byte *)(param_3[2] + lVar8))[0x10];
    if ((bVar2 != 0) && (bVar3 = *(byte *)(param_3[2] + lVar8), bVar3 != 0xff)) {
      lVar6 = *param_3;
      uVar5 = 0;
      if (*(uint *)(lVar6 + 8) != 0) {
        do {
          if (*(byte *)(lVar6 + 0x19 + (ulonglong)*(byte *)(lVar6 + 0x214 + uVar5) * 8) == bVar3) {
            uStack_dc = bVar3 & 0xf;
            local_d8 = 0;
            uStack_d4 = 3;
            local_d0 = uVar7 & 0xff;
            local_cc = (uint)CONCAT11(~(bVar2 & 0xf),0xf);
            uVar4 = FUN_180079d90();
            local_e0 = func_0x000180212e90(&local_a0,uVar4);
            uVar7 = uVar7 + 1;
            FUN_1800f5a90(&local_c8,&local_e0,0x18);
            break;
          }
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar6 + 8));
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 0x10) {
      if (*(char *)((longlong)param_3 + 0x53e) != '\0') {
        uStack_dc = 0;
        local_d8 = 0;
        local_d0 = uVar7 & 0xff;
        uStack_d4 = 3;
        local_cc = 0xf80f;
        local_e0 = func_0x000180212e90(&local_a0,s_NFACT_1802349f8);
        uVar7 = uVar7 + 1;
        FUN_1800f5a90(&local_c8,&local_e0,0x18);
      }
      FUN_1800f5da0(&local_c8,uVar7,&local_a0);
      lVar8 = local_c8;
      FUN_1800f5a90(param_2,local_c8,lStack_c0 - local_c8);
      thunk_FUN_180102fc0(lVar8);
      return 1;
    }
  } while( true );
}

