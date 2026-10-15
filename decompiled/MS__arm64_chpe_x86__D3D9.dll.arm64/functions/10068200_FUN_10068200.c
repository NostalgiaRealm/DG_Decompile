/*
 * FUN_10068200 at 10068200
 * undefined FUN_10068200(void)
 * Address ranges: 10068200-1006845f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068200(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  byte *pbVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 uVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  iVar4 = param_1[2];
  iVar5 = param_1[3];
  iVar6 = param_1[4];
  iVar7 = param_1[5];
  iVar10 = param_1[6];
  cVar8 = (char)param_1[7];
  FUN_1005df78(iVar2,0,0,0);
  iVar1 = iVar2 + uVar3 * 4;
  iVar12 = iVar1 + 0xc000;
  FUN_100568d8(iVar2,*(undefined4 *)(iVar1 + 0xfb3c));
  *(undefined4 *)(iVar12 + 0x3b3c) = 0;
  pbVar9 = (byte *)(((int)uVar3 >> 3) + iVar2 + 0xfc20);
  *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar5 == 0) {
    FUN_10078248(iVar2,uVar3,iVar4,0,0,iVar6,iVar7,(char)iVar10,cVar8);
    *(undefined4 *)(iVar1 + 0xfabc) = 0;
    *(undefined4 *)(iVar1 + 0xfafc) = 0;
    return;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar12 = (*extraout_w11)(iVar5);
  if (iVar12 == 1) {
    iVar12 = iVar5 + -0x1c;
    iVar14 = 0;
    *(int *)(iVar1 + 0xfafc) = iVar12;
    *(undefined4 *)(iVar1 + 0xfabc) = 0;
    goto LAB_100683c8;
  }
  iVar14 = iVar5 + -0xc0;
  iVar12 = 0;
  if (cVar8 == '\0') {
LAB_10068370:
    uVar15 = 0;
  }
  else {
    (*pcVar11)();
    iVar13 = (*extraout_w11_00)(iVar5);
    if ((iVar13 != 1) || (uVar15 = 1, *(int *)(iVar5 + -0x9c) != 1)) goto LAB_10068370;
  }
  *(undefined1 *)(iVar5 + 0x6e) = uVar15;
  *(int *)(iVar1 + 0xfabc) = iVar14;
  *(undefined4 *)(iVar1 + 0xfafc) = 0;
  if (*(int *)(iVar5 + -0x8c) - 3U < 3) {
    pbVar9 = (byte *)(((int)uVar3 >> 3) + iVar2 + 0xfc20);
    *pbVar9 = *pbVar9 | (byte)(1 << (ulonglong)(uVar3 & 7));
  }
LAB_100683c8:
  FUN_10078248(iVar2,uVar3,iVar4,iVar14,iVar12,iVar6,iVar7,(char)iVar10,cVar8);
  *(undefined1 *)(iVar2 + 0xfd9b) = 1;
  return;
}

