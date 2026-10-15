/*
 * FUN_101068d0 at 101068d0
 * undefined FUN_101068d0(void)
 * Address ranges: 101068d0-10106993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_101068d0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = FUN_1010d638(*(undefined4 *)(param_1 + 4),&PTR_s_DGD3D12ROOT_1016d170,param_3);
  *(int *)(param_1 + 0x3a8) = iVar5;
  if (iVar5 == 0) {
    bVar4 = false;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x8e);
    uVar2 = *(undefined4 *)(param_2 + 0x92);
    uVar3 = *(undefined4 *)(param_2 + 0x96);
    *(undefined4 *)(iVar5 + 0x4d0) = *(undefined4 *)(param_2 + 0x8a);
    *(undefined4 *)(iVar5 + 0x4d4) = uVar1;
    *(undefined4 *)(iVar5 + 0x4d8) = uVar2;
    *(undefined4 *)(iVar5 + 0x4dc) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
    iVar5 = *(int *)(param_1 + 0x3a8);
    *(int *)(param_1 + 8) = iVar5;
    *(undefined4 *)(iVar5 + 0x4e0) = *(undefined4 *)(param_1 + 0x3a0);
    bVar4 = *(int *)(param_1 + 8) != 0;
  }
  return bVar4;
}

