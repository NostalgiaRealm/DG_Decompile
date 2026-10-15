/*
 * FUN_10027e70 at 10027e70
 * undefined FUN_10027e70(void)
 * Address ranges: 10027e70-1002800f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027e70(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x184) == 0)) {
    FUN_10026738(param_1);
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    piVar2 = (int *)(param_1 + 0x5c);
    uVar3 = param_2 + *(int *)(param_1 + 0x2c) * param_3;
    pbVar1 = (byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x73) * 4);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    iVar4 = (*(code *)PTR_FUN_100ba248)(*piVar2 + uVar3 * 0x20 + 0x10);
    if (iVar4 == 0) {
      FUN_10027448(param_1,param_2,param_3);
      iVar4 = *(int *)(param_1 + 0x18c) + uVar3 * 0x20 + 0x10;
      (*(code *)PTR_FUN_100ba2e0)(iVar4,iVar4,*piVar2 + uVar3 * 0x20 + 0x10);
      (*(code *)PTR_FUN_100ba2bc)(*piVar2 + uVar3 * 0x20 + 0x10);
    }
    else {
      iVar4 = (*(code *)PTR_FUN_100ba248)(*(int *)(param_1 + 0x150) + uVar3 * 0x20 + 0x10);
      if ((iVar4 == 0) &&
         ((*(byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x73) * 4) >>
           (ulonglong)(uVar3 & 7) & 1) != 0)) {
        iVar4 = *(int *)(param_1 + 0x150) + uVar3 * 0x20;
        FUN_10027030((float)*(int *)(iVar4 + 0x10),(float)*(int *)(iVar4 + 0x14),
                     (float)*(int *)(iVar4 + 0x18),(float)*(int *)(iVar4 + 0x1c),param_1,param_2,
                     param_3,0);
      }
    }
  }
  return;
}

