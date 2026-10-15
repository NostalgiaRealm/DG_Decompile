/*
 * FUN_1004e390 at 1004e390
 * undefined FUN_1004e390(void)
 * Address ranges: 1004e390-1004e5ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004e390(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  code *pcVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  uVar3 = param_2 - 1;
  if (uVar3 < 4) {
    FUN_10047f98(param_1,0,0,0);
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    iVar2 = param_1 + uVar3 * 4;
    iVar5 = (int)uVar3 >> 3;
    if (param_4 == 0) {
      *(undefined4 *)(iVar2 + 0xf978) = 0;
      *(undefined4 *)(iVar2 + 0xf98c) = 0;
    }
    else {
      piVar1 = (int *)(param_1 + uVar3 * 8 + 0x7fc);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar9 = (*extraout_w11)(param_4);
      if ((int)uVar9 == 1) {
        *(undefined4 *)(iVar2 + 0xf978) = 0;
        *(int *)(iVar2 + 0xf98c) = param_4 + -0x1c;
        if (*piVar1 != param_3) {
          *piVar1 = param_3;
          pbVar4 = (byte *)(iVar5 + param_1 + 0xf69c);
          *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(uVar3 & 7));
        }
        bVar7 = FUN_10075508(uVar9,param_1 + (param_2 + 0x29f) * 0x20,
                             param_1 + uVar3 * 0x20 + 0x5410,1,
                             *(undefined1 *)(*(int *)(param_4 + -0xc) + 0x10162cc8));
        bVar7 = *(byte *)(param_1 + 0xf694) | bVar7;
      }
      else {
        param_4 = param_4 + -0x88;
        (*pcVar6)();
        (*extraout_w11_00)(param_4,param_5);
        *(int *)(iVar2 + 0xf978) = param_4;
        *(undefined4 *)(iVar2 + 0xf98c) = 0;
        if (*piVar1 != param_3) {
          *piVar1 = param_3;
          pbVar4 = (byte *)(iVar5 + param_1 + 0xf69c);
          *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(uVar3 & 7));
        }
        (*pcVar6)();
        uVar8 = (*extraout_w11_01)(param_4);
        (*pcVar6)();
        uVar10 = (*extraout_w11_02)(param_4);
        bVar7 = FUN_10075508(uVar10,param_1 + (param_2 + 0x29f) * 0x20,
                             param_1 + uVar3 * 0x20 + 0x5410,uVar8,uVar10 & 0xff);
        bVar7 = bVar7 | *(byte *)(param_1 + 0xf694);
      }
      *(byte *)(param_1 + 0xf694) = bVar7;
    }
    *(undefined1 *)(param_1 + 0xf6a0) = 1;
    pbVar4 = (byte *)(iVar5 + param_1 + 0xf698);
    *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(uVar3 & 7));
  }
  return;
}

