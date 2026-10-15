/*
 * FUN_10033280 at 10033280
 * undefined FUN_10033280(void)
 * Address ranges: 10033280-10033563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10033280(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined1 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_108;
  undefined4 uStack_104;
  int local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined2 uStack_9a;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  uint local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    puVar2 = (undefined4 *)(param_1 + 0x14);
    iVar9 = FUN_10031ee0(param_1,param_2);
    local_100 = param_2;
    if (iVar9 == 0) {
      local_ac = param_6;
      uStack_bc = FUN_1006f7d0(*puVar1,param_2);
      local_a4 = 1;
      uStack_a0 = 1;
      uStack_104 = *puVar2;
      local_108 = 0;
      local_cc = 0xffffffff00000000;
      local_c4 = 0xffffffff;
      local_9b = 0;
      local_fc = 0;
      local_f4 = 0;
      local_ec = 0;
      local_e4 = 0;
      local_dc = 0;
      local_d4 = 0;
      local_d0 = 0;
      iStack_b8 = param_3;
      iStack_b4 = param_5;
      uStack_b0 = param_4;
      local_a8 = param_7;
      local_9c = param_8;
      local_c0 = FUN_1006e920(*puVar1,&local_108);
      if (local_c0 == 0) {
        iVar9 = *(int *)(param_1 + 4);
        if (param_3 < 4) {
          local_64 = *(undefined4 *)(&DAT_100b3568 + param_3 * 4);
        }
        else {
          local_64 = 0;
        }
        local_4c = *(undefined4 *)(iVar9 + 0xde);
        uStack_50 = *(undefined4 *)(iVar9 + 0xda);
        uStack_60 = *(undefined4 *)(&DAT_100b5478 + *(int *)(iVar9 + 0xce) * 4);
        local_58 = *(undefined1 *)(iVar9 + 0x26);
        uStack_7c = 0x100000001;
        local_84 = 0x100000001;
        local_5c = (uint)(param_5 == 1);
        local_57 = *(int *)(iVar9 + 0x18) == 1;
        local_6c = *(undefined4 *)(&DAT_100b5490 + *(int *)(iVar9 + 0x1c) * 4);
        uStack_8c = *puVar2;
        local_54 = 0;
        uStack_68 = 0;
        local_74 = 0x100000000;
        local_90 = param_1;
        local_88 = param_2;
        local_c0 = FUN_1006e920(*puVar1,&local_90);
        if (local_c0 == 0) {
          return 0;
        }
        FUN_10070168(*puVar1,local_c0,param_1 + 0xc228,param_1 + 0xc);
      }
      piVar3 = (int *)(param_1 + 0x98);
      puVar4 = (uint *)(param_1 + 0xa0);
      puVar5 = (uint *)(param_1 + 0x9c);
      uVar7 = *puVar4;
      if (*puVar5 == uVar7) {
        uVar8 = uVar7 << 1;
        if (uVar7 == 0) {
          uVar8 = 0x10;
        }
        uVar10 = (undefined4)((ulonglong)uVar8 * 0x28);
        if ((ulonglong)uVar8 * 0x28 >> 0x20 != 0) {
          uVar10 = 0xffffffff;
        }
        iVar9 = FUN_100914b0(uVar10);
        if (iVar9 == 0) {
          FUN_1006f598(*puVar1,param_2,param_1);
          return 0;
        }
        FUN_100917a0(iVar9,*piVar3,((ulonglong)(*puVar4 * 5) & 0x1fffffff) << 3);
        FUN_100914d0(*piVar3);
        *piVar3 = iVar9;
        *puVar4 = uVar8;
      }
      puVar6 = (undefined8 *)(*piVar3 + *puVar5 * 0x28);
      puVar6[1] = CONCAT44(iStack_b4,iStack_b8);
      *puVar6 = CONCAT44(uStack_bc,local_c0);
      puVar6[3] = CONCAT44(local_a4,local_a8);
      puVar6[2] = CONCAT44(local_ac,uStack_b0);
      puVar6[4] = CONCAT26(uStack_9a,CONCAT15(local_9b,CONCAT14(local_9c,uStack_a0)));
      *puVar5 = *puVar5 + 1;
    }
    else {
      uStack_104 = *puVar2;
      local_fc = 0;
      local_f4 = 0;
      local_ec = 0;
      local_108 = 0;
      local_cc = 0xffffffff00000000;
      local_c4 = 0xffffffff;
      local_e4 = 0;
      local_dc = 0;
      local_d4 = 0;
      local_d0 = 0;
      FUN_1006e920(*puVar1,&local_108);
    }
  }
  return 1;
}

