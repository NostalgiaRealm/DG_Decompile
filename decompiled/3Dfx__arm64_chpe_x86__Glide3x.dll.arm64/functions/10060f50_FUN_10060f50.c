/*
 * FUN_10060f50 at 10060f50
 * undefined FUN_10060f50(void)
 * Address ranges: 10060f50-10061077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10060f50(undefined8 param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  code *extraout_w11;
  int iVar8;
  uint uVar9;
  
  iVar8 = 1;
  uVar9 = 0;
  if (param_3 != 0) {
    do {
      if (iVar8 == 0) goto LAB_1006100c;
      piVar1 = (int *)(param_5 + uVar9 * 4);
      *piVar1 = 0;
      psVar2 = (short *)(param_4 + uVar9 * 2);
      sVar3 = *psVar2;
      if (sVar3 != 0) {
        uVar5 = FUN_1007d9b8(param_2,sVar3,&DAT_1009b2c8);
        uVar7 = FUN_1007dad0(param_2,*psVar2,&DAT_1009b2c8);
        if ((int)uVar7 != 0) {
          iVar6 = FUN_10071928(uVar7,uVar5,uVar7 & 0xffffffff);
          *piVar1 = iVar6;
          FUN_1007dd80(uVar7 & 0xffffffff);
          if (*piVar1 != 0) goto LAB_10060ffc;
        }
        iVar8 = 0;
      }
LAB_10060ffc:
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
    if (iVar8 == 0) {
LAB_1006100c:
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

