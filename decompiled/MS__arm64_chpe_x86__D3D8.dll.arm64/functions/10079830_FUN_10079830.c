/*
 * FUN_10079830 at 10079830
 * undefined FUN_10079830(void)
 * Address ranges: 10079830-10079a43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10079830(undefined8 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 local_c0 [4];
  uint local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined8 local_b0;
  longlong local_a8;
  uint local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined2 local_9a;
  int local_98;
  int iStack_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_b0 = 0x4e475349;
  local_a8 = 0x800000000;
  local_90 = 0x210;
  local_8c = 1;
  local_98 = FUN_100fece0(0x210);
  iStack_94 = local_98;
  auVar7 = FUN_100ef6d8(&local_98,&local_b0,0x10);
  uVar5 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(char *)(param_3 + 0x1af) == '\0') {
    if (*(uint *)(param_3 + 0x148) == 0) {
      uVar6 = 0;
    }
    else {
      do {
        local_b4 = 0;
        bVar1 = *(byte *)(param_3 + 0x136 + uVar5);
        local_bc = 3;
        local_b8 = 0;
        local_c0[0] = 0xf;
        FUN_10079680(auVar7._0_8_,auVar7._8_8_,bVar1,&local_b4,&local_b8,&local_bc,local_c0);
        uVar3 = FUN_100ef818(&local_80,local_b4);
        local_9a = 0;
        local_b0 = CONCAT44(local_b8,uVar3);
        local_9b = *(undefined1 *)((uint)bVar1 + param_3 + 0x124);
        local_a8 = (ulonglong)local_bc << 0x20;
        local_9c = local_c0[0];
        local_a0 = uVar5;
        auVar7 = FUN_100ef6d8(&local_98,&local_b0,0x18);
        uVar6 = *(uint *)(param_3 + 0x148);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
  }
  else {
    uVar6 = 0;
    do {
      local_bc = 0;
      local_b8 = 0;
      local_b4 = 3;
      local_c0[0] = 0xf;
      uVar4 = FUN_10079680(auVar7._0_8_,auVar7._8_8_,uVar5,&local_bc,&local_b8,&local_b4,local_c0);
      auVar7._8_4_ = local_bc;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = 0;
      if (local_bc != 0) {
        uVar3 = FUN_100ef818(&local_80,local_bc);
        local_9a = 0;
        local_b0 = CONCAT44(local_b8,uVar3);
        local_a0 = (uint)*(byte *)(uVar5 + param_3 + 0x136);
        local_9b = *(undefined1 *)(uVar5 + param_3 + 0x124);
        local_a8 = (ulonglong)local_b4 << 0x20;
        local_9c = local_c0[0];
        auVar7 = FUN_100ef6d8(&local_98,&local_b0,0x18);
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x11);
  }
  FUN_100efb68(&local_98,uVar6,&local_80);
  iVar2 = local_98;
  FUN_100ef6d8(param_2,local_98,iStack_94 - local_98);
  FUN_100fed00(iVar2);
  return 1;
}

