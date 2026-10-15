/*
 * FUN_1006d0d0 at 1006d0d0
 * undefined FUN_1006d0d0(void)
 * Address ranges: 1006d0d0-1006d21f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006d0d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 8);
  *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x10) == *(int *)(*piVar1 + 0xd80));
  FUN_1006e360(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_1009e820);
  FUN_1006e6c0(param_1,*(undefined4 *)(*piVar1 + 8),0x1009e960,0);
  FUN_1006e998(param_1,*(undefined4 *)(*piVar1 + 8),0x1009e938);
  iVar2 = *(int *)(param_2 + 4);
  FUN_1006f108(param_1,*(undefined4 *)(*piVar1 + 8),5,*(undefined4 *)(iVar2 + 0x478),
               *(undefined4 *)(iVar2 + 0x470),*(undefined4 *)(iVar2 + 0x3c8),0);
  FUN_1006ee08(param_1,*(undefined4 *)(*piVar1 + 8),1,1,*(int *)(param_2 + 4) + 0x47c);
  FUN_1006efa8(param_1,*(undefined4 *)(*piVar1 + 8));
  FUN_1006f068(param_1,*(undefined4 *)(*piVar1 + 8),0,0);
  return 1;
}

