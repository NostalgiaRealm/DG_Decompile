/*
 * FUN_100d9990 at 100d9990
 * undefined FUN_100d9990(void)
 * Address ranges: 100d9990-100d9b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d9990(int param_1,int param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_50 [16];
  
  iVar9 = param_1 + param_3 * 0x10;
  puVar1 = (undefined8 *)(iVar9 + 0x67e8);
  uVar3 = param_5 & 0x3fffffff;
  uVar8 = 0;
  puVar2 = puVar1;
  puVar11 = param_4;
  if (uVar3 != 0) {
    do {
      uVar13 = *puVar11;
      uVar8 = uVar8 + 1;
      puVar11 = puVar11 + 1;
      *puVar2 = uVar13;
      puVar2 = puVar2 + 1;
    } while (uVar8 < uVar3 << 1);
  }
  FUN_10157940(auStack_50);
  uVar7 = (ulonglong)(iVar9 + 0xb040);
  uVar8 = 0;
  uVar10 = uVar7;
  if (uVar3 != 0) {
    do {
      uVar13 = *param_4;
      uVar8 = uVar8 + 1;
      param_4 = param_4 + 1;
      *(undefined8 *)uVar10 = uVar13;
      uVar10 = ZEXT48((undefined8 *)uVar10 + 1);
    } while (uVar8 < uVar3 << 1);
  }
  param_5 = param_3 + param_5;
  uVar10 = (ulonglong)param_5;
  if (param_2 != 0) {
    iVar9 = 0;
    if (*(short *)(param_2 + 0x810) != -1) {
      do {
        uVar4 = ((short *)(param_2 + 0x810))[iVar9];
        if (param_5 < uVar4) break;
        uVar5 = *(ushort *)(param_2 + iVar9 * 2 + 0x812);
        if (param_3 <= uVar5) {
          uVar8 = param_3;
          if (param_3 <= uVar4) {
            uVar8 = (uint)uVar4;
          }
          uVar3 = (uint)uVar5;
          if (param_5 <= uVar5) {
            uVar3 = param_5;
          }
          puVar11 = (undefined8 *)(*(int *)(param_2 + 8) + uVar8 * 0x10 + 0x48d8);
          uVar3 = uVar3 - uVar8 & 0x3fffffff;
          puVar2 = (undefined8 *)(param_1 + uVar8 * 0x10 + 0xb040);
          uVar8 = 0;
          if (uVar3 != 0) {
            do {
              uVar13 = *puVar11;
              uVar8 = uVar8 + 1;
              puVar11 = puVar11 + 1;
              *puVar2 = uVar13;
              puVar2 = puVar2 + 1;
            } while (uVar8 < uVar3 << 1);
          }
        }
        iVar9 = iVar9 + 2;
      } while (*(short *)(param_2 + iVar9 * 2 + 0x810) != -1);
    }
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar7 = uVar7 & 0xffffffff;
    pcVar12 = extraout_w11;
  }
  else {
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar7 = ZEXT48(puVar1);
    pcVar12 = extraout_w11_00;
  }
  (*pcVar12)(uVar6,param_3,uVar10 & 0xffffffff,uVar7);
  FUN_101579f0(auStack_50);
  return;
}

