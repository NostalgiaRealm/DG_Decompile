/*
 * FUN_1006ed00 at 1006ed00
 * undefined FUN_1006ed00(void)
 * Address ranges: 1006ed00-1006ee4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006ed00(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 8);
  *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x10) == *(int *)(*piVar1 + 0xd80));
  FUN_10070000(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_100a1d00,param_4,0xffffffff);
  FUN_10070368(param_1,*(undefined4 *)(*piVar1 + 8),0x100a20a0,0);
  FUN_10070640(param_1,*(undefined4 *)(*piVar1 + 8),0x100a2078);
  iVar2 = *(int *)(param_2 + 4);
  FUN_10070d88(param_1,*(undefined4 *)(*piVar1 + 8),5,*(undefined4 *)(iVar2 + 0x478),
               *(undefined4 *)(iVar2 + 0x470),*(undefined4 *)(iVar2 + 0x3c8));
  FUN_10070ab0(param_1,*(undefined4 *)(*piVar1 + 8),1);
  FUN_10070c08(param_1,*(undefined4 *)(*piVar1 + 8),0);
  FUN_10070ce8(param_1,*(undefined4 *)(*piVar1 + 8),0,0);
  return 1;
}

