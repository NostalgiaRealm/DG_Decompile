/*
 * FUN_100a21c0 at 100a21c0
 * undefined FUN_100a21c0(void)
 * Address ranges: 100a21c0-100a235f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a21c0(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x184) == 0)) {
    FUN_100a0a88(param_1);
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    piVar2 = (int *)(param_1 + 0x5c);
    uVar3 = param_2 + *(int *)(param_1 + 0x2c) * param_3;
    pbVar1 = (byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x73) * 4);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    iVar4 = (*(code *)PTR_FUN_10134210)(*piVar2 + uVar3 * 0x20 + 0x10);
    if (iVar4 == 0) {
      FUN_100a1798(param_1,param_2,param_3);
      iVar4 = *(int *)(param_1 + 0x18c) + uVar3 * 0x20 + 0x10;
      (*(code *)PTR_FUN_10134298)(iVar4,iVar4,*piVar2 + uVar3 * 0x20 + 0x10);
      (*(code *)PTR_FUN_10134270)(*piVar2 + uVar3 * 0x20 + 0x10);
    }
    else {
      iVar4 = (*(code *)PTR_FUN_10134210)(*(int *)(param_1 + 0x150) + uVar3 * 0x20 + 0x10);
      if ((iVar4 == 0) &&
         ((*(byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x73) * 4) >>
           (ulonglong)(uVar3 & 7) & 1) != 0)) {
        iVar4 = *(int *)(param_1 + 0x150) + uVar3 * 0x20;
        FUN_100a1380((float)*(int *)(iVar4 + 0x10),(float)*(int *)(iVar4 + 0x14),
                     (float)*(int *)(iVar4 + 0x18),(float)*(int *)(iVar4 + 0x1c),param_1,param_2,
                     param_3,0);
      }
    }
  }
  return;
}

