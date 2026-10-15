/*
 * FUN_10022b20 at 10022b20
 * undefined FUN_10022b20(void)
 * Address ranges: 10022b20-10022cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022b20(int param_1,uint param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  code *extraout_w11;
  undefined1 auVar8 [16];
  undefined1 auStack_60 [64];
  
  if (9 < (int)param_2) {
    uVar6 = param_2 - 10;
    pbVar1 = (byte *)((uVar6 >> 3 & 3) + param_1 + ((uVar6 >> 5) + 0x278) * 4);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
  }
  if (param_2 == 1) {
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    auVar8 = FUN_1002f6e0(*(int *)(param_1 + 0xabc) + 0x40,auStack_60,param_1 + 0xa54);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
              (auVar8._0_8_,auVar8._8_8_,auVar8._0_8_ & 0xffffffff);
    (*extraout_w11)(uVar4,1);
    iVar5 = *(int *)(param_1 + 0xabc);
    if ((((*(float *)(iVar5 + 0x70) != 0.0) || (*(float *)(iVar5 + 0x74) != 0.0)) ||
        (*(float *)(iVar5 + 0x78) != 0.0)) || (uVar7 = 0, *(float *)(iVar5 + 0x7c) != 1.0)) {
      uVar7 = 1;
    }
    *(undefined1 *)(param_1 + 0x221) = uVar7;
switchD_10022c94_caseD_1:
    *(undefined1 *)(param_1 + 0x9d7) = 0;
    puVar2 = (undefined2 *)(param_1 + 0x9d5);
LAB_10022c34:
    *puVar2 = 0;
    puVar3 = (undefined1 *)(param_1 + 0x9da);
  }
  else {
    pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + ((param_2 >> 5) + 0x283) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_2 & 7));
    switch(param_2) {
    case 0:
      *(undefined4 *)(param_1 + 0x9d4) = 0;
      puVar2 = (undefined2 *)(param_1 + 0x9d8);
      goto LAB_10022c34;
    case 1:
      goto switchD_10022c94_caseD_1;
    default:
      goto switchD_10022c94_caseD_2;
    case 10:
      *(undefined1 *)(param_1 + 0x9d4) = 0;
      *(undefined2 *)(param_1 + 0x9d6) = 0;
      *(undefined1 *)(param_1 + 0x9da) = 0;
      puVar3 = (undefined1 *)(param_1 + 0x225);
    }
  }
  *puVar3 = 0;
  *(undefined1 *)(param_1 + 0x9dc) = 0;
switchD_10022c94_caseD_2:
  return;
}

