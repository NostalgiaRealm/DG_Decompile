/*
 * FUN_18018b6b8 at 18018b6b8
 * undefined FUN_18018b6b8(void)
 * Address ranges: 18018b6b8-18018b7c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018b6b8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int *local_70;
  undefined4 *puStack_68;
  ulonglong local_60;
  int *piStack_58;
  int *local_50;
  undefined8 uStack_48;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar4 = *(uint *)(param_2 + 0x484);
  if ((uVar4 == 0xffffffff) || (uVar4 == 0)) {
    local_70 = (int *)(param_2 + 800);
    local_60 = 0;
    puStack_68 = (undefined4 *)(param_2 + 0x3d0);
    uVar4 = 0x1b;
    if (*local_70 != *(int *)(param_2 + 0x238)) {
      uVar4 = 0x36;
    }
    FUN_18018dcf8(param_1,param_2,param_3,uVar4 | *(uint *)(param_2 + 0x480),&local_70,0x18);
  }
  else {
    local_30 = *(undefined4 *)(param_2 + 0x2c4);
    piVar3 = (int *)(param_2 + 800);
    uStack_18 = 0xffffffffffffffff;
    local_20 = 0xffffffffffffffff;
    local_2c = (undefined1)(uVar4 >> 0x10);
    bVar2 = FUN_180213268(0xe4,*(undefined1 *)(param_2 + 0x324));
    piStack_58 = (int *)((ulonglong)bVar2 | 0x100);
    uVar1 = *(uint *)(param_2 + 0x480) | 0x37;
    puStack_68 = &local_30;
    local_60 = param_2 + 0x3d0;
    local_70 = piVar3;
    if ((uVar4 & 0xf000000) == 0xd000000) {
      uStack_48 = 0;
      local_50 = (int *)local_60;
      local_60 = (ulonglong)piStack_58;
      piStack_58 = piVar3;
      FUN_18018dcf8(param_1,param_2,param_3,uVar1,&local_70,0x30);
    }
    else {
      uStack_48 = 0;
      local_50 = piVar3;
      FUN_18018dcf8(param_1,param_2,param_3,uVar1,&local_70,0x30);
    }
  }
  *(undefined4 *)(param_2 + 0x484) = 0xffffffff;
  return;
}

