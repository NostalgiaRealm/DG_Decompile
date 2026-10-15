/*
 * FUN_1005d220 at 1005d220
 * undefined FUN_1005d220(void)
 * Address ranges: 1005d220-1005d317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005d220(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
  local_40 = FUN_100fece0(0x100);
  local_3c = local_40;
  uVar3 = FUN_10070270(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + -4),
                       param_2,param_3,0x51,&local_40,param_4);
  iVar1 = local_40;
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_100f2160(local_3c - local_40,local_40);
  }
  FUN_100fed00(iVar1);
  return uVar2;
}

