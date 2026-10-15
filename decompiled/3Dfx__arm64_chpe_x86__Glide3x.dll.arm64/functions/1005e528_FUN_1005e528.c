/*
 * FUN_1005e528 at 1005e528
 * undefined FUN_1005e528(void)
 * Address ranges: 1005e528-1005e77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e528(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 + param_2 * 0x16c0;
  iVar4 = *(int *)(iVar6 + 0x1ca8);
  if (iVar4 != 0) {
    FUN_10061560(iVar4);
    FUN_1007dd10(iVar4,0x30);
  }
  *(int *)(iVar6 + 0x1ca8) = 0;
  iVar4 = *(int *)(iVar6 + 0x1ca4);
  if (iVar4 != 0) {
    FUN_10061ce0(iVar4);
    FUN_1007dd10(iVar4,0x50);
  }
  *(int *)(iVar6 + 0x1ca4) = 0;
  iVar4 = *(int *)(iVar6 + 0x1ca0);
  if (iVar4 != 0) {
    FUN_10061ce0(iVar4);
    FUN_1007dd10(iVar4,0x50);
  }
  *(int *)(iVar6 + 0x1ca0) = 0;
  piVar2 = (int *)(iVar6 + 0x1c9c);
  iVar4 = *piVar2;
  if (iVar4 != 0) {
    FUN_10061ce0(iVar4);
    FUN_1007dd10(iVar4,0x50);
  }
  *piVar2 = 0;
  piVar3 = (int *)(iVar6 + 0x1c98);
  iVar4 = *piVar3;
  if (iVar4 != 0) {
    FUN_10061ce0(iVar4);
    FUN_1007dd10(iVar4,0x50);
  }
  *piVar3 = 0;
  iVar4 = *(int *)(iVar6 + 0x1d64);
  if (iVar4 != 0) {
    FUN_10060ef0(param_1,iVar4);
    FUN_10060ef0(param_1,*(undefined4 *)(iVar6 + 0x1d60));
    FUN_10060ef0(param_1,*(undefined4 *)(iVar6 + 0x1d74));
    FUN_10060ef0(param_1,*(undefined4 *)(iVar6 + 0x1d6c));
    FUN_10060ef0(param_1,*(undefined4 *)(iVar6 + 0x1d70));
    FUN_10060ef0(param_1,*(undefined4 *)(iVar6 + 0x1d68));
    *(undefined8 *)(iVar6 + 0x1d68) = 0;
    *(int *)(iVar6 + 0x1d64) = 0;
    *(undefined8 *)(iVar6 + 0x1d70) = 0;
    *(undefined4 *)(iVar6 + 0x1d60) = 0;
    iVar4 = *(int *)(iVar6 + 0x1d5c);
    if (iVar4 != -1) {
      iVar5 = *piVar2;
      iVar1 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_100a003c)(iVar1);
      FUN_10061f28(iVar5,iVar4,2);
      (*(code *)PTR_FUN_100a0090)(iVar1);
    }
    iVar4 = *(int *)(iVar6 + 0x1d58);
    if (iVar4 != -1) {
      iVar5 = *piVar3;
      iVar1 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_100a003c)(iVar1);
      FUN_10061f28(iVar5,iVar4,2);
      (*(code *)PTR_FUN_100a0090)(iVar1);
    }
    *(int *)(iVar6 + 0x1d58) = -1;
    *(int *)(iVar6 + 0x1d5c) = -1;
  }
  FUN_1006fc20(param_1,param_2);
  return;
}

