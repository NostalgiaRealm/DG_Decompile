/*
 * FUN_100d9d80 at 100d9d80
 * undefined FUN_100d9d80(void)
 * Address ranges: 100d9d80-100d9f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d9d80(int param_1,int param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined8 extraout_x1;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [16];
  
  iVar7 = param_1 + param_3 * 0x10;
  puVar1 = (undefined8 *)(iVar7 + 0x52ac);
  uVar2 = param_5 & 0x3fffffff;
  uVar6 = 0;
  puVar8 = param_4;
  if (uVar2 != 0) {
    do {
      uVar10 = *puVar8;
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 1;
      *puVar1 = uVar10;
      puVar1 = puVar1 + 1;
    } while (uVar6 < uVar2 << 1);
  }
  FUN_10157940(auStack_50);
  if (*(char *)(param_1 + 0x11) == '\0') {
    puVar8 = (undefined8 *)(iVar7 + 0xb330);
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        uVar10 = *param_4;
        uVar6 = uVar6 + 1;
        param_4 = param_4 + 1;
        *puVar8 = uVar10;
        puVar8 = puVar8 + 1;
      } while (uVar6 < uVar2 << 1);
    }
    param_5 = param_3 + param_5;
    if (param_2 != 0) {
      iVar7 = 0;
      if (*(short *)(param_2 + 0xc) != -1) {
        do {
          uVar3 = ((short *)(param_2 + 0xc))[iVar7];
          if (param_5 < uVar3) break;
          uVar4 = *(ushort *)(param_2 + iVar7 * 2 + 0xe);
          if (param_3 <= uVar4) {
            uVar6 = param_3;
            if (param_3 <= uVar3) {
              uVar6 = (uint)uVar3;
            }
            uVar2 = (uint)uVar4;
            if (param_5 <= uVar4) {
              uVar2 = param_5;
            }
            puVar8 = (undefined8 *)(*(int *)(param_2 + 8) + uVar6 * 0x10 + 0x414);
            uVar2 = uVar2 - uVar6 & 0x3fffffff;
            puVar1 = (undefined8 *)(param_1 + uVar6 * 0x10 + 0xb330);
            uVar6 = 0;
            if (uVar2 != 0) {
              do {
                uVar10 = *puVar8;
                uVar6 = uVar6 + 1;
                puVar8 = puVar8 + 1;
                *puVar1 = uVar10;
                puVar1 = puVar1 + 1;
              } while (uVar6 < uVar2 << 1);
            }
          }
          iVar7 = iVar7 + 2;
        } while (*(short *)(param_2 + iVar7 * 2 + 0xc) != -1);
      }
    }
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar9 = extraout_w11;
  }
  else {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_1 + 0x14),extraout_x1,param_3 + param_5);
    pcVar9 = extraout_w11_00;
  }
  (*pcVar9)(uVar5,param_3);
  FUN_101579f0(auStack_50);
  return;
}

