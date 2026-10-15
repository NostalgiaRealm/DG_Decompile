/*
 * FUN_10090b70 at 10090b70
 * undefined FUN_10090b70(void)
 * Address ranges: 10090b70-10090d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090b70(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  piVar2 = (int *)(param_1 + 0xf4);
  if ((*piVar2 == 0) || (*(int *)(param_1 + 0x114) == 0)) {
    FUN_1008f4d8(param_1);
  }
  if (*piVar2 != 0) {
    piVar3 = (int *)(param_1 + 0x60);
    uVar8 = param_2 + *(int *)(param_1 + 0x2c) * param_3;
    pbVar1 = (byte *)((uVar8 >> 3 & 3) + param_1 + ((uVar8 >> 5) + 0x58) * 4);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
    iVar9 = (*(code *)PTR_FUN_10134210)(*piVar3 + uVar8 * 0x1c + 0xc);
    if (iVar9 == 0) {
      FUN_10090078(param_1,param_2,param_3);
      iVar9 = *(int *)(param_1 + 0x120) + uVar8 * 0x1c + 0xc;
      (*(code *)PTR_FUN_10134298)(iVar9,iVar9,*piVar3 + uVar8 * 0x1c + 0xc);
      (*(code *)PTR_FUN_10134270)(*piVar3 + uVar8 * 0x1c + 0xc);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x80);
      if ((iVar9 != 0) &&
         (iVar9 = (*(code *)PTR_FUN_10134210)(iVar9 + uVar8 * 0x1c + 0xc), iVar9 == 0)) {
        iVar9 = *(int *)(param_1 + 0x80) + uVar8 * 0x1c;
        iVar4 = *(int *)(iVar9 + 0xc);
        iVar5 = *(int *)(iVar9 + 0x10);
        iVar6 = *(int *)(iVar9 + 0x14);
        iVar7 = *(int *)(iVar9 + 0x18);
        FUN_1008c590(param_1,*piVar2,*(undefined4 *)(param_1 + 0x74),param_2,param_3,
                     (int *)(iVar9 + 0xc));
        FUN_1008fd50((float)iVar4,(float)iVar5,(float)iVar6,(float)iVar7,param_1,param_2,param_3,0);
      }
    }
  }
  return;
}

