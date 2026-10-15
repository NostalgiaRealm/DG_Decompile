/*
 * FUN_1006f650 at 1006f650
 * undefined FUN_1006f650(void)
 * Address ranges: 1006f650-1006f747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006f650(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34;
  
  local_38 = 0x100;
  local_34 = 1;
  uVar2 = 0;
  local_40 = FUN_101322b0(0x100);
  local_3c = local_40;
  uVar3 = FUN_10087098(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + -4),
                       param_2,param_3,0x51,&local_40,param_4);
  iVar1 = local_40;
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_10125730(local_3c - local_40,local_40);
  }
  FUN_101322d0(iVar1);
  return uVar2;
}

