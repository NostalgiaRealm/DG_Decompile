/*
 * FUN_100d73a0 at 100d73a0
 * undefined FUN_100d73a0(void)
 * Address ranges: 100d73a0-100d754f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d73a0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_50 [4];
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar3 == 0) {
      FUN_100071d0(0);
    }
  }
  local_50[0] = -1;
  iVar3 = param_1 + -0x66b4;
  iVar4 = FUN_10008d70(iVar3,local_50,0x8876086c);
  iVar2 = local_50[0];
  if (-1 < iVar4) {
    iVar5 = *(int *)(*(int *)(param_1 + -0x6300) + local_50[0] * 4 + -4);
    FUN_1000bfb0(iVar3,param_1 + 500,iVar5 + 0x5248,0x10);
    FUN_1000bfb0(iVar3,param_1 + 0x204,iVar5 + 0x526c,0x10);
    FUN_1000bfb0(iVar3,param_1 + 0x214,iVar5 + 0x5290,0x10);
    FUN_1000bfb0(iVar3,param_1 + 0x224,iVar5 + 0x52b4,0x10);
    iVar5 = FUN_100cf978(iVar3,iVar2,iVar5);
    if ((iVar5 != 0) && (iVar4 = FUN_100e7d30(iVar5,&DAT_1015e510,param_2), iVar4 < 0)) {
      FUN_10008c80(iVar3,iVar2);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar4;
}

