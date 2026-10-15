/*
 * FUN_100e6cd0 at 100e6cd0
 * undefined FUN_100e6cd0(void)
 * Address ranges: 100e6cd0-100e6df7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e6cd0(undefined8 param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *extraout_w11;
  int iVar8;
  uint uVar9;
  
  iVar8 = 1;
  uVar9 = 0;
  if (param_3 != 0) {
    do {
      if (iVar8 == 0) goto LAB_100e6d8c;
      piVar1 = (int *)(param_5 + uVar9 * 4);
      *piVar1 = 0;
      psVar2 = (short *)(param_4 + uVar9 * 2);
      sVar3 = *psVar2;
      if (sVar3 != 0) {
        uVar5 = FUN_100fde88(param_2,sVar3,&DAT_1012e358);
        iVar6 = FUN_100fdfa0(param_2,*psVar2,&DAT_1012e358);
        if (iVar6 != 0) {
          iVar7 = FUN_100f2160(uVar5,iVar6);
          *piVar1 = iVar7;
          FUN_100fed00(iVar6);
          if (*piVar1 != 0) goto LAB_100e6d7c;
        }
        iVar8 = 0;
      }
LAB_100e6d7c:
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
    if (iVar8 == 0) {
LAB_100e6d8c:
      pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar9 = 0;
      do {
        piVar1 = (int *)(param_5 + uVar9 * 4);
        if (*piVar1 != 0) {
          uVar5 = (*pcVar4)();
          (*extraout_w11)(uVar5);
          *piVar1 = 0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_3);
    }
  }
  return iVar8;
}

