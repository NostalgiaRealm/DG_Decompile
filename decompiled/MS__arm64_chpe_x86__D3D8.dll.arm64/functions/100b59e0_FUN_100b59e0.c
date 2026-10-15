/*
 * FUN_100b59e0 at 100b59e0
 * undefined FUN_100b59e0(void)
 * Address ranges: 100b59e0-100b5bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100b59e0(int param_1,int param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_50 [16];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x5944) = 0;
    *(undefined4 *)(param_1 + 0x589c) = 0;
    uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_01)(uVar9,0);
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
    iVar8 = FUN_100bd3f0(param_1 + 0x591c,param_2);
    if (iVar8 != 0) {
      puVar12 = (undefined4 *)(iVar8 + 4);
      *(int *)(param_1 + 0x5944) = param_2;
      *(undefined4 *)(param_1 + 0x589c) = *puVar12;
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar9,*puVar12);
      iVar3 = *(int *)(iVar8 + 8);
      psVar1 = (short *)(iVar8 + 0xc);
      FUN_10120e20(auStack_50);
      iVar17 = 0;
      if (*psVar1 != -1) {
        do {
          uVar4 = psVar1[iVar17 * 2];
          uVar5 = *(ushort *)(iVar8 + 0xe + iVar17 * 4);
          uVar10 = (ulonglong)uVar5;
          uVar11 = (ulonglong)(iVar3 + 0x4c + (uint)uVar4 * 0x10);
          puVar2 = (undefined8 *)(param_1 + (uVar4 + 0x533) * 0x10);
          uVar6 = (uint)uVar5 - (uint)uVar4 & 0x3fffffff;
          uVar13 = 0;
          uVar15 = uVar11;
          if (uVar6 != 0) {
            do {
              puVar14 = (undefined8 *)uVar15;
              uVar13 = uVar13 + 1;
              uVar15 = ZEXT48(puVar14 + 1);
              *puVar2 = *puVar14;
              puVar2 = puVar2 + 1;
            } while (uVar13 < uVar6 << 1);
          }
          auVar18 = (*pcVar7)();
          (*extraout_w11_00)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_ & 0xffffffff,
                             uVar10 & 0xffffffff,uVar11 & 0xffffffff);
          iVar17 = iVar17 + 1;
        } while (psVar1[iVar17 * 2] != -1);
      }
      uVar16 = 1;
      FUN_10120ed0(auStack_50);
    }
  }
  *(undefined1 *)(param_1 + 0xa00) = 1;
  return uVar16;
}

