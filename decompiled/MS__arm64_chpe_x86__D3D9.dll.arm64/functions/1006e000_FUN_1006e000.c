/*
 * FUN_1006e000 at 1006e000
 * undefined FUN_1006e000(void)
 * Address ranges: 1006e000-1006e223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006e000(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  
  uVar6 = param_1[1] - 1;
  if (3 < uVar6) {
    return;
  }
  iVar3 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_1[3];
  iVar11 = param_1[4];
  FUN_1005df78(iVar3,0,0,0);
  iVar2 = iVar3 + uVar6 * 4;
  FUN_10056a90(iVar3,*(undefined4 *)(iVar2 + 0xfba8));
  *(undefined4 *)(iVar2 + 0xfba8) = 0;
  iVar8 = (int)uVar6 >> 3;
  pbVar7 = (byte *)(iVar8 + iVar3 + 0xfc28);
  *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar2 + 0xfb80) = 0;
    *(undefined4 *)(iVar2 + 0xfb94) = 0;
    goto LAB_1006e1e0;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar10 = (*extraout_w11)(iVar5);
  if (iVar10 == 1) {
    *(undefined4 *)(iVar2 + 0xfb80) = 0;
    *(int *)(iVar2 + 0xfb94) = iVar5 + -0x1c;
  }
  else {
    if ((char)iVar11 == '\0') {
LAB_1006e144:
      uVar12 = 0;
    }
    else {
      (*pcVar9)();
      iVar11 = (*extraout_w11_00)(iVar5);
      if ((iVar11 != 1) || (uVar12 = 1, *(int *)(iVar5 + -0x9c) != 1)) goto LAB_1006e144;
    }
    *(undefined1 *)(iVar5 + 0x6e) = uVar12;
    *(undefined4 *)(iVar2 + 0xfb94) = 0;
    *(int *)(iVar2 + 0xfb80) = iVar5 + -0xc0;
    if (*(int *)(iVar5 + -0x8c) - 3U < 3) {
      pbVar7 = (byte *)(iVar8 + iVar3 + 0xfc20);
      *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar6 & 7));
    }
  }
  piVar1 = (int *)(iVar3 + uVar6 * 8 + 0x7fc);
  if (*piVar1 != iVar4) {
    *piVar1 = iVar4;
    pbVar7 = (byte *)(iVar8 + iVar3 + 0xf69c);
    *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar6 & 7));
  }
  *(undefined1 *)(iVar3 + 0xfd9b) = 1;
LAB_1006e1e0:
  *(undefined1 *)(iVar3 + 0xf6a0) = 1;
  pbVar7 = (byte *)(iVar8 + iVar3 + 0xf698);
  *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar6 & 7));
  return;
}

