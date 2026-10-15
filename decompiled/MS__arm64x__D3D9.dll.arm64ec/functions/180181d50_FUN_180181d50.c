/*
 * FUN_180181d50 at 180181d50
 * undefined FUN_180181d50(void)
 * Address ranges: 180181d50-180181f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180181d50(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 extraout_x1;
  ulonglong uVar4;
  uint uVar5;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  uVar1 = FUN_180213760(param_2 + 0x20,4,1);
  *(undefined4 *)(param_2 + 0x1fc) = uVar1;
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x444) < '\0') {
    uVar1 = FUN_180213760(param_2 + 0x20,extraout_x1,1);
    local_88 = *(undefined4 *)(param_2 + 0xbc);
    local_58 = 0;
    local_60 = 0x3f800000;
    local_68 = 0x3f800000;
    local_70 = 0x3f800000;
    local_78 = 0x3f800000;
    local_80 = 0xe4;
    local_90[0] = 0xf;
    FUN_180214c88(param_2 + 0x20,param_3,0x36,uVar1,local_90,0x40);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1c8);
  }
  *(undefined4 *)(param_2 + 0x208) = uVar1;
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x445) < '\0') {
    uVar1 = FUN_180213760(param_2 + 0x20,4,1);
    local_88 = *(undefined4 *)(param_2 + 0xbc);
    local_58 = 0;
    local_60 = 0x3f800000;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0xe4;
    local_90[0] = 0xf;
    FUN_180214c88(param_2 + 0x20,param_3,0x36,uVar1,local_90,0x40);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1cc);
  }
  *(undefined4 *)(param_2 + 0x20c) = uVar1;
  if ((char)(*(byte *)(*(longlong *)(param_2 + 0x10) + 0x443) |
            *(byte *)(*(longlong *)(param_2 + 0x10) + 0x442)) < '\0') {
    uVar1 = FUN_180213760(param_2 + 0x20,4,1);
    local_88 = *(undefined4 *)(param_2 + 0xbc);
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0x3f800000;
    local_80 = 0xe4;
    local_90[0] = 0xf;
    FUN_180214c88(param_2 + 0x20,param_3,0x36,uVar1,local_90,0x40);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1d0);
  }
  *(undefined4 *)(param_2 + 0x200) = uVar1;
  *(undefined4 *)(param_2 + 0x204) = uVar1;
  uVar5 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 + 5);
    if (*(char *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar5 + 0x446) < '\0') {
      uVar2 = FUN_180213760(param_2 + 0x20,4,1);
      uVar1 = (undefined4)uVar2;
      puVar3 = (undefined4 *)FUN_180181450(uVar2,uVar4 & 0xffffffff);
      local_58 = 0;
      local_68 = puVar3[2];
      local_60 = puVar3[3];
      local_90[0] = 0xf;
      local_78 = *puVar3;
      local_70 = puVar3[1];
      local_80 = 0xe4;
      local_88 = *(undefined4 *)(param_2 + 0xbc);
      FUN_180214c88(param_2 + 0x20,param_3,0x36,uVar2 & 0xffffffff,local_90,0x40);
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x1c0 + uVar4 * 4);
    }
    *(undefined4 *)(param_2 + 0x210 + (ulonglong)uVar5 * 4) = uVar1;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  return;
}

