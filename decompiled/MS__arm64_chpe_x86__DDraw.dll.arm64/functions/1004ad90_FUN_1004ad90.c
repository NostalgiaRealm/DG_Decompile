/*
 * FUN_1004ad90 at 1004ad90
 * undefined FUN_1004ad90(void)
 * Address ranges: 1004ad90-1004ae6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004ad90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar4 = 0;
  iVar1 = param_1;
  for (iVar2 = param_2; (iVar1 != 0 && (iVar2 != 0)); iVar2 = *(int *)(iVar2 + 0x110)) {
    FUN_10047410(iVar1,iVar2);
    iVar1 = *(int *)(iVar1 + 0x110);
    uVar4 = uVar4 + 1;
  }
  uVar3 = 1;
  if (((*(uint *)(param_1 + 0x154) >> 0x11 & 1) != 0) &&
     (uVar3 = *(uint *)(param_1 + 0x168), uVar4 < *(uint *)(param_1 + 0x168))) {
    uVar3 = uVar4;
  }
  local_40 = 0;
  local_38 = *(undefined4 *)(param_1 + 0x15c);
  uStack_34 = *(undefined4 *)(param_1 + 0x158);
  FUN_1004aa70(param_1,param_2,uVar3,&local_40,&local_40);
  do {
    FUN_10047500(param_1,1);
    FUN_1004d810(param_1);
    param_1 = *(int *)(param_1 + 0x110);
  } while (param_1 != 0);
  return 1;
}

