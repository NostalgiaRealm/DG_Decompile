/*
 * FUN_100289c0 at 100289c0
 * undefined FUN_100289c0(void)
 * Address ranges: 100289c0-10028b67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100289c0(int param_1,uint param_2)

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
    pbVar1 = (byte *)((uVar6 >> 3 & 3) + param_1 + ((uVar6 >> 5) + 0x329) * 4);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
  }
  if (param_2 == 1) {
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    auVar8 = FUN_100391e0(*(int *)(param_1 + 0xd80) + 0x40,auStack_60,param_1 + 0xd18);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
              (auVar8._0_8_,auVar8._8_8_,auVar8._0_8_ & 0xffffffff);
    (*extraout_w11)(uVar4,1);
    iVar5 = *(int *)(param_1 + 0xd80);
    if ((((*(float *)(iVar5 + 0x70) != 0.0) || (*(float *)(iVar5 + 0x74) != 0.0)) ||
        (*(float *)(iVar5 + 0x78) != 0.0)) || (uVar7 = 0, *(float *)(iVar5 + 0x7c) != 1.0)) {
      uVar7 = 1;
    }
    *(undefined1 *)(param_1 + 0x3c5) = uVar7;
switchD_10028b34_caseD_1:
    *(undefined1 *)(param_1 + 0xc9b) = 0;
    puVar2 = (undefined2 *)(param_1 + 0xc99);
LAB_10028ad4:
    *puVar2 = 0;
    puVar3 = (undefined1 *)(param_1 + 0xc9e);
  }
  else {
    pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + ((param_2 >> 5) + 0x334) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_2 & 7));
    switch(param_2) {
    case 0:
      *(undefined4 *)(param_1 + 0xc98) = 0;
      puVar2 = (undefined2 *)(param_1 + 0xc9c);
      goto LAB_10028ad4;
    case 1:
      goto switchD_10028b34_caseD_1;
    default:
      goto switchD_10028b34_caseD_2;
    case 10:
      *(undefined1 *)(param_1 + 0xc98) = 0;
      *(undefined2 *)(param_1 + 0xc9a) = 0;
      *(undefined1 *)(param_1 + 0xc9e) = 0;
      puVar3 = (undefined1 *)(param_1 + 0x3c9);
    }
  }
  *puVar3 = 0;
  *(undefined1 *)(param_1 + 0xca0) = 0;
switchD_10028b34_caseD_2:
  return;
}

