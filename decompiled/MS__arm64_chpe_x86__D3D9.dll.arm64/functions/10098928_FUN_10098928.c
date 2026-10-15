/*
 * FUN_10098928 at 10098928
 * undefined FUN_10098928(void)
 * Address ranges: 10098928-10098b57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10098928(undefined8 param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
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
  undefined4 local_88;
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
  local_98 = FUN_101322b0(0x210);
  iStack_94 = local_98;
  uVar4 = FUN_10122c50(&local_98,&local_b0,0x10);
  uVar5 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(char *)(param_3 + 0x1b3) == '\0') {
    if (*(uint *)(param_3 + 0x148) == 0) {
      uVar6 = 0;
    }
    else {
      local_88 = param_2;
      do {
        local_b4 = 0;
        bVar1 = *(byte *)(param_3 + 0x136 + uVar5);
        local_c0[0] = 0xf;
        local_bc = 3;
        local_b8 = 0;
        FUN_10098738(uVar4,param_3,bVar1,&local_b4,&local_b8,&local_bc,local_c0,param_4);
        uVar3 = FUN_10122d90(&local_80,local_b4);
        local_9a = 0;
        local_b0 = CONCAT44(local_b8,uVar3);
        local_9b = *(undefined1 *)((uint)bVar1 + param_3 + 0x124);
        local_a8 = (ulonglong)local_bc << 0x20;
        local_9c = local_c0[0];
        local_a0 = uVar5;
        uVar4 = FUN_10122c50(&local_98,&local_b0,0x18);
        uVar6 = *(uint *)(param_3 + 0x148);
        uVar5 = uVar5 + 1;
        param_2 = local_88;
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
      uVar4 = FUN_10098738(uVar4,param_3,uVar5,&local_bc,&local_b8,&local_b4,local_c0,param_4);
      if (local_bc != 0) {
        uVar3 = FUN_10122d90(&local_80,local_bc);
        local_9a = 0;
        local_b0 = CONCAT44(local_b8,uVar3);
        local_a0 = (uint)*(byte *)(uVar5 + param_3 + 0x136);
        local_9b = *(undefined1 *)(uVar5 + param_3 + 0x124);
        local_a8 = (ulonglong)local_b4 << 0x20;
        local_9c = local_c0[0];
        uVar4 = FUN_10122c50(&local_98,&local_b0,0x18);
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x11);
  }
  FUN_101230e0(&local_98,uVar6,&local_80);
  iVar2 = local_98;
  FUN_10122c50(param_2,local_98,iStack_94 - local_98);
  FUN_101322d0(iVar2);
  return 1;
}

