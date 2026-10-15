/*
 * FUN_100b0768 at 100b0768
 * undefined FUN_100b0768(void)
 * Address ranges: 100b0768-100b0adf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b0768(int param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar14;
  undefined1 auVar15 [16];
  uint local_60;
  uint uStack_5c;
  
  piVar1 = (int *)(param_1 + 0x134);
  uVar8 = 0;
  if (*piVar1 == 0) {
    FUN_100cefa0(param_1,&local_60);
    if (*(char *)(param_1 + 0x150) != '\0') {
      iVar12 = 0x24;
      if (*(int *)(param_1 + 0x1c) == 0x15) {
        iVar12 = 0x34;
      }
      uStack_5c = *(uint *)(iVar12 + *(int *)(param_1 + 4));
      iVar12 = 0x1c;
      if (*(int *)(param_1 + 0x1c) == 0x15) {
        iVar12 = 0x2c;
      }
      local_60 = *(uint *)(iVar12 + *(int *)(param_1 + 4));
    }
    uVar11 = (ulonglong)uStack_5c;
    uVar10 = (ulonglong)local_60;
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x24);
    uVar7 = FUN_100cebc8(param_1);
    FUN_100ab158(param_1 + 0x128,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),
                 uVar7,uVar9 & 0xffffffff,1,uVar10 & 0xffffffff,uVar11 & 0xffffffff,0);
    *(undefined1 *)(param_1 + 0xdb) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*piVar1 == 0) goto LAB_100b0a9c;
  if (*(char *)(param_1 + 0xdb) == '\0') {
    uVar4 = *(uint *)(param_1 + 0x24);
    if (uVar4 == 0) {
LAB_100b09fc:
      auVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_00)(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,*extraout_w8);
      if (uVar4 != 0) {
        uVar14 = 0;
        do {
          uVar13 = uVar14 + 0x20;
          puVar3 = (uint *)(param_1 + 0xcc + (uVar14 >> 5) * 4);
          uVar14 = 0xffffffff >> (ulonglong)(0x20 - uVar4 & 0x1f);
          if (uVar13 <= uVar4) {
            uVar14 = 0xffffffff;
          }
          *puVar3 = uVar14 | *puVar3;
          uVar14 = uVar13;
        } while (uVar13 < uVar4);
      }
    }
    else {
      uVar14 = 0;
      uVar13 = 0;
      do {
        if (uVar14 != 0) goto LAB_100b0924;
        uVar2 = uVar13 + 0x20;
        uVar14 = 0xffffffff >> (ulonglong)(0x20 - uVar4 & 0x1f);
        if (uVar2 <= uVar4) {
          uVar14 = 0xffffffff;
        }
        uVar14 = uVar14 & *(uint *)(param_1 + (uVar13 >> 5) * 4 + 0xcc);
        uVar13 = uVar2;
      } while (uVar2 < uVar4);
      if (uVar14 == 0) goto LAB_100b09fc;
LAB_100b0924:
      uVar9 = 0;
      do {
        iVar12 = param_1 + ((int)(uVar9 >> 5) + 0x33) * 4;
        uVar14 = (uint)uVar9;
        if ((*(byte *)(((uint)(uVar9 >> 3) & 3) + iVar12) >> (ulonglong)(uVar14 & 7) & 1) == 0) {
          uVar8 = (*pcVar6)();
          (*extraout_w11)(uVar8,*piVar1,uVar9,0,0,0,*(undefined4 *)(param_1 + 0x54),uVar9,0);
          pbVar5 = (byte *)(((uint)(uVar9 >> 3) & 3) + iVar12);
          *pbVar5 = *pbVar5 | (byte)(1 << (ulonglong)(uVar14 & 7));
        }
        uVar9 = (ulonglong)(uVar14 + 1);
      } while (uVar14 + 1 < uVar4);
    }
    *(char *)(param_1 + 0xdb) = '\x01';
  }
  uVar8 = *(undefined4 *)(param_1 + 0x13c);
LAB_100b0a9c:
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x13c) != 0)) {
    FUN_100ab780(param_1 + 0x128,0);
    uVar8 = *(undefined4 *)(param_1 + 0x144);
  }
  return uVar8;
}

