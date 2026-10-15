/*
 * FUN_100165b0 at 100165b0
 * undefined FUN_100165b0(void)
 * Address ranges: 100165b0-100169af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100165b0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 extraout_x1;
  undefined4 *puVar9;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auStack_58 [24];
  
  uVar8 = FUN_10014798(param_1);
  if ((uVar8 & 1) == 0) {
    FUN_10012060(param_1,param_2,param_3);
  }
  else {
    uVar4 = param_2 + *(int *)(param_1 + 0x2c) * param_3;
    if (*(int *)(param_1 + 0xfc) != 0) {
      iVar6 = (*(code *)PTR_FUN_100ba248)(*(int *)(param_1 + 0x100) + uVar4 * 0x1c + 0xc);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x100) + uVar4 * 0x1c;
        FUN_100154a0((float)*(int *)(iVar6 + 0xc),(float)*(int *)(iVar6 + 0x10),
                     (float)*(int *)(iVar6 + 0x14),(float)*(int *)(iVar6 + 0x18),param_1,param_2,
                     param_3,1);
      }
    }
    piVar1 = (int *)(param_1 + 0x60);
    iVar6 = (*(code *)PTR_FUN_100ba248)(*piVar1 + uVar4 * 0x1c + 0xc);
    if (iVar6 == 0) {
      if ((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0x74) != 0)) {
        FUN_1006e8d0(*(int *)(param_1 + 0x40),extraout_x1,param_1);
        iVar6 = *(int *)(param_1 + 0x120) + uVar4 * 0x1c + 0xc;
        (*(code *)PTR_FUN_100ba2e0)(iVar6,iVar6,*piVar1 + uVar4 * 0x1c + 0xc);
        if (*(int *)(param_1 + 0x34) - 3U < 3) {
          FUN_100151d8(param_1,param_2,param_3,2);
          puVar9 = (undefined4 *)(param_1 + 0x114);
          uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11_00)(uVar7,*(undefined4 *)(param_1 + 0xf4),*puVar9);
        }
        else {
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x58);
          if (*(uint *)(param_1 + 0x58) != 0) {
            iVar6 = 0x28;
            if (*(int *)(param_1 + 0x1c) == 0x15) {
              iVar6 = 0x38;
            }
            puVar9 = (undefined4 *)(iVar6 + *(int *)(param_1 + 4));
            uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar7,*extraout_w8,uVar4,uVar8 & 0xffffffff,uVar4,*puVar9);
          }
          pbVar5 = (byte *)((uVar4 >> 3 & 3) + param_1 + ((uVar4 >> 5) + 0x55) * 4);
          *pbVar5 = *pbVar5 | (byte)(1 << (ulonglong)(uVar4 & 7));
          FUN_100157c8(param_1,param_2,param_3);
        }
        FUN_10011ce0(param_1,*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0xf4),param_2,
                     param_3,*(int *)(param_1 + 0x120) + uVar4 * 0x1c + 0xc);
        (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + 0x40) + 0x4a0);
      }
      (*(code *)PTR_FUN_100ba2bc)(*piVar1 + uVar4 * 0x1c + 0xc);
    }
    else if ((*(byte *)(((int)(uVar4 & 0x1f) >> 3) + param_1 + ((uVar4 >> 5) + 0x58) * 4) >>
              (ulonglong)(uVar4 & 7) & 1) == 0) {
      uVar2 = *(uint *)(param_1 + 0x18) >> (ulonglong)(param_2 & 0x1f);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      uVar3 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_2 & 0x1f);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      (*(code *)PTR_FUN_100ba2b8)(auStack_58,0,0,uVar3,uVar2);
      iVar6 = *(int *)(param_1 + 0xf4);
      if (iVar6 != 0) {
        FUN_10011ce0(param_1,*(undefined4 *)(param_1 + 0x114),iVar6,param_2,param_3,auStack_58);
      }
      if (*(int *)(param_1 + 0x74) != 0) {
        FUN_10011ce0(param_1,*(int *)(param_1 + 0x74),*(int *)(param_1 + 0xf4),param_2,param_3,
                     *(int *)(param_1 + 0x120) + uVar4 * 0x1c + 0xc);
      }
    }
    pbVar5 = (byte *)(((int)(uVar4 & 0x1f) >> 3) + param_1 + ((uVar4 >> 5) + 0x58) * 4);
    *pbVar5 = *pbVar5 | (byte)(1 << (ulonglong)(uVar4 & 7));
  }
  return;
}

