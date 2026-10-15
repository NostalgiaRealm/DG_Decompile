/*
 * FUN_100d9b80 at 100d9b80
 * undefined FUN_100d9b80(void)
 * Address ranges: 100d9b80-100d9d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d9b80(int param_1,int param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_40 [16];
  
  FUN_10157940(auStack_40);
  iVar6 = param_1 + param_3 * 4;
  puVar10 = (undefined8 *)(iVar6 + 0x67a8);
  uVar3 = param_5 >> 1;
  uVar8 = 0;
  puVar12 = param_4;
  if (uVar3 != 0) {
    do {
      uVar11 = *puVar12;
      uVar8 = uVar8 + 1;
      puVar12 = puVar12 + 1;
      *puVar10 = uVar11;
      puVar10 = puVar10 + 1;
    } while (uVar8 < uVar3);
  }
  if ((param_5 & 1) != 0) {
    *(undefined4 *)puVar10 = *(undefined4 *)puVar12;
  }
  puVar12 = (undefined8 *)(iVar6 + 0xb140);
  uVar5 = ZEXT48(puVar12);
  uVar8 = 0;
  uVar7 = uVar5;
  if (uVar3 != 0) {
    do {
      uVar11 = *param_4;
      uVar8 = uVar8 + 1;
      param_4 = param_4 + 1;
      *(undefined8 *)uVar7 = uVar11;
      puVar12 = (undefined8 *)uVar7 + 1;
      uVar7 = ZEXT48(puVar12);
    } while (uVar8 < uVar3);
  }
  if ((param_5 & 1) != 0) {
    *(undefined4 *)puVar12 = *(undefined4 *)param_4;
  }
  param_5 = param_3 + param_5;
  uVar7 = (ulonglong)param_5;
  if (param_2 != 0) {
    iVar6 = 0;
    if (*(short *)(param_2 + 0x834) != -1) {
      do {
        uVar1 = ((short *)(param_2 + 0x834))[iVar6];
        if (param_5 < uVar1) break;
        uVar2 = *(ushort *)(param_2 + iVar6 * 2 + 0x836);
        if (param_3 <= uVar2) {
          uVar8 = param_3;
          if (param_3 <= uVar1) {
            uVar8 = (uint)uVar1;
          }
          uVar3 = (uint)uVar2;
          if (param_5 <= uVar2) {
            uVar3 = param_5;
          }
          uVar4 = uVar3 - uVar8 >> 1;
          puVar12 = (undefined8 *)(*(int *)(param_2 + 8) + (uVar8 + 0x127a) * 4);
          puVar10 = (undefined8 *)(param_1 + (uVar8 + 0xb14) * 0x10);
          uVar13 = 0;
          if (uVar4 != 0) {
            do {
              uVar11 = *puVar12;
              uVar13 = uVar13 + 1;
              puVar12 = puVar12 + 1;
              *puVar10 = uVar11;
              puVar10 = puVar10 + 1;
            } while (uVar13 < uVar4);
          }
          if ((uVar3 - uVar8 & 1) != 0) {
            *(undefined4 *)puVar10 = *(undefined4 *)puVar12;
          }
        }
        iVar6 = iVar6 + 2;
      } while (*(short *)(param_2 + iVar6 * 2 + 0x834) != -1);
    }
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    auVar14._8_8_ = uVar5;
    auVar14._0_8_ = uVar11;
    pcVar9 = extraout_w11;
  }
  else {
    auVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar9 = extraout_w11_00;
  }
  (*pcVar9)(auVar14._0_8_ & 0xffffffff,param_3,uVar7 & 0xffffffff,auVar14._8_8_ & 0xffffffff);
  FUN_101579f0(auStack_40);
  return;
}

