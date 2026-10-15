/*
 * FUN_100a2460 at 100a2460
 * undefined FUN_100a2460(void)
 * Address ranges: 100a2460-100a28f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a2460(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  int extraout_w11;
  undefined1 auStack_58 [24];
  
  uVar9 = FUN_100a0318(param_1);
  if ((uVar9 & 1) == 0) {
    FUN_1009c460(param_1,param_2,param_3);
  }
  else {
    piVar1 = (int *)(param_1 + 0x2c);
    piVar2 = (int *)(param_1 + 0x148);
    uVar6 = param_2 + *piVar1 * param_3;
    if ((*piVar2 != 0) &&
       ((*(byte *)((uVar6 >> 3 & 3) + param_1 + ((uVar6 >> 5) + 0x73) * 4) >> (ulonglong)(uVar6 & 7)
        & 1) == 0)) {
      iVar8 = (*(code *)PTR_FUN_10134210)(*(int *)(param_1 + 0x150) + uVar6 * 0x20 + 0x10);
      if (iVar8 == 0) {
        iVar8 = *(int *)(param_1 + 0x150) + uVar6 * 0x20;
        FUN_100a1380((float)*(int *)(iVar8 + 0x10),(float)*(int *)(iVar8 + 0x14),
                     (float)*(int *)(iVar8 + 0x18),(float)*(int *)(iVar8 + 0x1c),param_1,param_2,
                     param_3,1);
      }
    }
    piVar3 = (int *)(param_1 + 0x5c);
    iVar8 = (*(code *)PTR_FUN_10134210)(*piVar3 + uVar6 * 0x20 + 0x10);
    if (iVar8 == 0) {
      if (*piVar2 != 0) {
        iVar8 = *(int *)(param_1 + 0x18c) + uVar6 * 0x20 + 0x10;
        (*(code *)PTR_FUN_10134298)(iVar8,iVar8,*piVar3 + uVar6 * 0x20 + 0x10);
        if (*(int *)(param_1 + 0x34) - 3U < 3) {
          FUN_100a0da0(param_1,param_2,param_3,2);
          iVar8 = param_2 + *piVar1 * param_3;
          FUN_100974b0(*(undefined4 *)(param_1 + 0xe0),param_1 + 0x178,param_1 + 0x13c,iVar8,iVar8);
          if (((*(char *)(*(int *)(param_1 + 0x1c) + 0x1012cfe0) != '\0') &&
              (iVar8 = FUN_100a0348(param_1), *(char *)(iVar8 + extraout_w11) != '\0')) &&
             (*(char *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x18 + 0x531) != '\0')
             ) {
            iVar8 = param_2 + (*(int *)(param_1 + 0x24) + param_3) * *piVar1;
            FUN_100974b0(*(undefined4 *)(param_1 + 0xe0),param_1 + 0x178,param_1 + 0x13c,iVar8,iVar8
                        );
          }
        }
        else {
          if (*(int *)(param_1 + 0x58) != 0) {
            FUN_100970a0(*(undefined4 *)(param_1 + 0xe0),param_1 + 0x48,param_1 + 0x48,
                         *(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x54),0,0,uVar6,0);
          }
          pbVar7 = (byte *)((uVar6 >> 3 & 3) + param_1 + ((uVar6 >> 5) + 0x70) * 4);
          *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar6 & 7));
          FUN_100a1798(param_1,param_2,param_3);
        }
        if (*(int *)(param_1 + 0x90) != 0) {
          FUN_1009c180(param_1,param_1 + 0x84,param_1 + 0x13c);
          *(undefined8 *)(param_1 + 0xe8) = 0;
        }
      }
      (*(code *)PTR_FUN_10134270)(*piVar3 + uVar6 * 0x20 + 0x10);
    }
    else if ((*(byte *)(((int)(uVar6 & 0x1f) >> 3) + param_1 + ((uVar6 >> 5) + 0x73) * 4) >>
              (ulonglong)(uVar6 & 7) & 1) == 0) {
      if (*piVar2 != 0) {
        uVar4 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_2 & 0x1f);
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        uVar5 = *(uint *)(param_1 + 0x18) >> (ulonglong)(param_2 & 0x1f);
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        (*(code *)PTR_FUN_1013426c)(auStack_58,0,0,uVar4,uVar5);
        FUN_1009c180(param_1,param_1 + 0x178,param_1 + 0x13c);
      }
      if (*(int *)(param_1 + 0x90) != 0) {
        FUN_1009c180(param_1,param_1 + 0x84,param_1 + 0x13c);
        *(undefined8 *)(param_1 + 0xe8) = 0;
      }
    }
    pbVar7 = (byte *)(((int)(uVar6 & 0x1f) >> 3) + param_1 + ((uVar6 >> 5) + 0x73) * 4);
    *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar6 & 7));
  }
  return;
}

