/*
 * FUN_1006ffd0 at 1006ffd0
 * undefined FUN_1006ffd0(void)
 * Address ranges: 1006ffd0-10070067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006ffd0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  local_28 = 0x100;
  local_24 = 1;
  uVar2 = 0;
  local_30 = FUN_101322b0(0x100);
  local_2c = local_30;
  uVar3 = FUN_10086ad8(param_1 + 0x2c,param_1 + 0x40,param_2,*(undefined1 *)(param_1 + 0x78),0x51,
                       &local_30,param_4);
  iVar1 = local_30;
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_10125730(local_2c - local_30,local_30);
  }
  FUN_101322d0(iVar1);
  return uVar2;
}

