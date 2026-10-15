/*
 * FUN_10074010 at 10074010
 * undefined FUN_10074010(void)
 * Address ranges: 10074010-1007412b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10074010(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  code *extraout_w11;
  int iVar9;
  uint uVar10;
  
  uVar7 = DAT_100acbc0;
  iVar9 = 1;
  uVar10 = 0;
  if (param_3 != 0) {
    do {
      if (iVar9 == 0) goto LAB_100740c0;
      piVar1 = (int *)(param_5 + uVar10 * 4);
      *piVar1 = 0;
      psVar2 = (short *)(param_4 + uVar10 * 2);
      sVar3 = *psVar2;
      if (sVar3 != 0) {
        uVar5 = FUN_10081780(uVar7,sVar3);
        uVar8 = FUN_100817e8(uVar7,*psVar2);
        if ((int)uVar8 != 0) {
          iVar6 = FUN_100797a8(uVar8,uVar5,uVar8 & 0xffffffff);
          *piVar1 = iVar6;
          FUN_10081dc0(uVar8 & 0xffffffff);
          if (*piVar1 != 0) goto LAB_100740b0;
        }
        iVar9 = 0;
      }
LAB_100740b0:
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_3);
    if (iVar9 == 0) {
LAB_100740c0:
      pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar10 = 0;
      do {
        piVar1 = (int *)(param_5 + uVar10 * 4);
        if (*piVar1 != 0) {
          uVar7 = (*pcVar4)();
          (*extraout_w11)(uVar7);
          *piVar1 = 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_3);
    }
  }
  return iVar9;
}

