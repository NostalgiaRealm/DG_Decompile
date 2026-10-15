/*
 * FUN_10106480 at 10106480
 * undefined FUN_10106480(void)
 * Address ranges: 10106480-1010655b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10106480(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_1010d638(*(undefined4 *)(param_1 + 4),&PTR_s_DGD3D11ROOT_1016d160,0);
  *(int *)(param_1 + 0x3a8) = iVar3;
  if (iVar3 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x8e);
    if (*(char *)(param_2 + 0x22) == '\0') {
      uVar5 = 1;
      uVar4 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x96);
      uVar4 = *(undefined4 *)(param_2 + 0x92);
    }
    *(undefined4 *)(iVar3 + 0x4d0) = *(undefined4 *)(param_2 + 0x8a);
    *(undefined4 *)(iVar3 + 0x4d4) = uVar1;
    *(undefined4 *)(iVar3 + 0x4d8) = uVar4;
    *(undefined4 *)(iVar3 + 0x4dc) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
    iVar3 = *(int *)(param_1 + 0x3a8);
    *(int *)(param_1 + 8) = iVar3;
    *(undefined4 *)(iVar3 + 0x4e0) = *(undefined4 *)(param_1 + 0x3a0);
    bVar2 = *(int *)(param_1 + 8) != 0;
  }
  return bVar2;
}

