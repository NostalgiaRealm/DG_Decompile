/*
 * FUN_10065e40 at 10065e40
 * undefined FUN_10065e40(void)
 * Address ranges: 10065e40-10065f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10065e40(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 8);
  *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x10) == *(int *)(*piVar1 + 0xd80));
  FUN_10067140(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_10097410,param_4,0xffffffff);
  FUN_100674a8(param_1,*(undefined4 *)(*piVar1 + 8),0x100977b0,0);
  FUN_10067780(param_1,*(undefined4 *)(*piVar1 + 8),0x10097788);
  iVar2 = *(int *)(param_2 + 4);
  FUN_10067ec8(param_1,*(undefined4 *)(*piVar1 + 8),5,*(undefined4 *)(iVar2 + 0x478),
               *(undefined4 *)(iVar2 + 0x470),*(undefined4 *)(iVar2 + 0x3c8));
  FUN_10067bf0(param_1,*(undefined4 *)(*piVar1 + 8),1);
  FUN_10067d48(param_1,*(undefined4 *)(*piVar1 + 8),0);
  FUN_10067e28(param_1,*(undefined4 *)(*piVar1 + 8),0,0);
  return 1;
}

