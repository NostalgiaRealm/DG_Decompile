/*
 * FUN_10063960 at 10063960
 * undefined FUN_10063960(void)
 * Address ranges: 10063960-10063be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10063960(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar5 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar5 == 0) {
    FUN_1004bc70(0);
  }
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 0x80070057;
  if (param_3 != 0) {
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11)(uVar6);
    uVar11 = 0;
    uStack_48 = 0;
    local_50 = 0;
    do {
      iVar8 = (&DAT_100a4c30)[*(int *)(param_1 + 0x98)] + uVar11 * 0x298;
      iVar7 = FUN_10081e90(param_2,&DAT_1009c3f0,0x10);
      if (((iVar7 == 0) || (iVar7 = FUN_10081e90(param_2,&DAT_1009c400,0x10), iVar7 == 0)) ||
         (iVar7 = FUN_10081e90(param_2,&DAT_1009c410,0x10), iVar7 == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      iVar7 = FUN_10081e90(iVar8,&local_50,0x10);
      if (iVar7 != 0) {
        iVar7 = FUN_10081e90(param_2,&DAT_1009c3f0,0x10);
        if (iVar7 == 0) {
          auVar12 = FUN_10081e90(iVar8,&DAT_1009c460,0x10);
          if (auVar12._0_4_ == 0) goto LAB_10063ba0;
          iVar7 = param_1 + uVar11 * 0xfc + 0xe8;
          iVar10 = 0x1c08;
        }
        else {
          auVar12 = FUN_10081e90(param_2,&DAT_1009c400,0x10);
          if (auVar12._0_4_ == 0) {
            iVar7 = param_1 + uVar11 * 0xfc + 0x7cc;
            iVar10 = 0x1d04;
          }
          else {
            iVar7 = FUN_10081e90(iVar8,&DAT_1009c430,0x10);
            if ((iVar7 == 0) ||
               (auVar12 = FUN_10081e90(iVar8,&DAT_1009c460,0x10), auVar12._0_4_ == 0))
            goto LAB_10063ba0;
            iVar7 = param_1 + uVar11 * 0xfc + 0xeb0;
            iVar10 = 0x1e00;
          }
        }
        if (iVar7 != 0) {
          if ((bVar4) || (*(char *)(iVar5 + 0x957) != '\0')) {
            iVar1 = 0x24;
          }
          else {
            iVar1 = 0x28;
          }
          bVar4 = *(char *)(iVar8 + 0x20) == '\0';
          iVar2 = iVar7;
          if (bVar4) {
            iVar2 = param_1 + iVar10;
          }
          uVar9 = (ulonglong)*(uint *)(iVar8 + iVar1);
          iVar10 = param_1 + iVar10;
          if (bVar4) {
            iVar10 = iVar7;
          }
          (*pcVar3)(auVar12._0_8_,auVar12._8_8_,uVar9,iVar10,iVar2);
          iVar8 = (*extraout_w11_00)(iVar8,*extraout_w8,uVar9 & 0xffffffff);
          if (iVar8 == 0) break;
        }
      }
LAB_10063ba0:
      uVar11 = uVar11 + 1;
    } while (uVar11 < 7);
    uVar6 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar6;
}

