/*
 * FUN_10007ba0 at 10007ba0
 * undefined FUN_10007ba0(void)
 * Address ranges: 10007ba0-10007e8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007ba0(int param_1,int param_2,int *param_3,int *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  byte *pbVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  iVar9 = FUN_10021680(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_11);
  if (-1 < iVar9) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x210) + *param_3 * 4 + -4);
    *(undefined2 *)(iVar4 + 0x8a54) = 0xffff;
    *(undefined2 *)(iVar4 + 0x9258) = 0xffff;
    if ((param_2 - 1U & 0xfffffffd) == 0) {
      puVar1 = (undefined8 *)(param_1 + 0x1220);
      puVar2 = (undefined8 *)(iVar4 + 0x4a54);
      uVar7 = *(uint *)(param_1 + 0xb10) & 0x3fffffff;
      uVar13 = 0;
      if (uVar7 != 0) {
        do {
          uVar12 = *puVar1;
          uVar13 = uVar13 + 1;
          puVar1 = puVar1 + 1;
          *puVar2 = uVar12;
          puVar2 = puVar2 + 1;
        } while (uVar13 < uVar7 << 1);
      }
      *(undefined2 *)(iVar4 + 0x8a54) = 0;
      uVar5 = *(undefined2 *)(param_1 + 0xb10);
      *(undefined2 *)(iVar4 + 0x8a58) = 0xffff;
      *(undefined2 *)(iVar4 + 0x8a56) = uVar5;
      *(undefined1 *)(iVar4 + 0x93a1) = 1;
    }
    if (param_2 - 1U < 2) {
      puVar1 = (undefined8 *)(param_1 + 0x5330);
      puVar2 = (undefined8 *)(iVar4 + 0x49d4);
      iVar11 = 0x10;
      do {
        uVar12 = *puVar1;
        iVar11 = iVar11 + -1;
        puVar1 = puVar1 + 1;
        *puVar2 = uVar12;
        puVar2 = puVar2 + 1;
      } while (iVar11 != 0);
      *(undefined2 *)(iVar4 + 0x9258) = 0;
      *(undefined4 *)(iVar4 + 0x925a) = 0xffff0008;
      *(undefined1 *)(iVar4 + 0x93a0) = 1;
      pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (param_2 == 1) {
        uVar14 = 0;
        do {
          uVar13 = (uint)uVar14;
          piVar3 = (int *)(param_1 + 0x57bc + uVar13 * 4);
          if (*piVar3 != 0) {
            uVar10 = (*pcVar8)();
            (*extraout_w11)(uVar10);
          }
          *(int *)(iVar4 + 0x9270 + uVar13 * 4) = *piVar3;
          *(undefined4 *)(iVar4 + 0x92f0 + uVar13 * 4) =
               *(undefined4 *)(param_1 + 0x57fc + uVar13 * 4);
          *(undefined4 *)(iVar4 + 0x92b0 + uVar13 * 4) =
               *(undefined4 *)(param_1 + 0x583c + uVar13 * 4);
          pbVar6 = (byte *)(((uint)(uVar14 >> 3) & 3) + iVar4 + ((uVar13 >> 5) + 0x24e7) * 4);
          uVar14 = (ulonglong)(uVar13 + 1);
          *pbVar6 = *pbVar6 | (byte)(1 << (ulonglong)(uVar13 & 7));
        } while (uVar13 + 1 < 0x10);
        *(undefined4 *)(iVar4 + 0x9330) = *(undefined4 *)(param_1 + 0x58a0);
        *(undefined1 *)(iVar4 + 0x93a3) = 1;
        if (*(int *)(&DAT_000057b8 + param_1) != 0) {
          uVar10 = (*pcVar8)();
          (*extraout_w11_00)(uVar10);
        }
        *(undefined4 *)(iVar4 + 0x926c) = *(undefined4 *)(&DAT_000057b8 + param_1);
        *(undefined1 *)(iVar4 + 0x93a2) = 1;
      }
    }
    *param_4 = iVar4;
  }
  return iVar9;
}

