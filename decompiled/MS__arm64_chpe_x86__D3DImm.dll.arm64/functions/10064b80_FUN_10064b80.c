/*
 * FUN_10064b80 at 10064b80
 * undefined FUN_10064b80(void)
 * Address ranges: 10064b80-10064f0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10064b80(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 0x80070057;
  if (param_4 != 0) {
    uVar8 = 0;
    do {
      iVar3 = (&DAT_100a4c30)[*(int *)(param_1 + 0x98)] + uVar8 * 0x298;
      iVar4 = FUN_10081e90(param_2,&DAT_1009c420,0x10);
      if ((((iVar4 != 0) && (iVar4 = FUN_10081e90(param_3,iVar3,0x10), iVar4 == 0)) ||
          (iVar4 = FUN_10081e90(param_3,iVar3 + 0x10,0x10), iVar4 == 0)) && (iVar3 != 0)) {
        uVar6 = 0x88760154;
        uVar5 = (*pcVar2)();
        iVar4 = (*extraout_w11)(uVar5);
        if ((*(uint *)(iVar4 + 0x158) >> 0x11 & 1) != 0) {
          puVar1 = (uint *)(iVar4 + 0x34);
          if ((*puVar1 & 0x700) != 0) {
            if ((*puVar1 >> 10 & 1) == 0) {
LAB_10064d10:
              if ((*puVar1 >> 9 & 1) != 0) {
                uVar6 = (*pcVar2)();
                puVar7 = (undefined8 *)(*extraout_w11_02)(uVar6,auStack_c0,0x18);
                uVar11 = *puVar7;
                uVar10 = puVar7[3];
                uVar9 = puVar7[2];
                *(undefined8 *)(iVar3 + 0x220) = puVar7[1];
                *(undefined8 *)(iVar3 + 0x218) = uVar11;
                *(undefined8 *)(iVar3 + 0x230) = uVar10;
                *(undefined8 *)(iVar3 + 0x228) = uVar9;
                uVar6 = (*pcVar2)();
                iVar4 = (*extraout_w11_03)(uVar6,param_5);
                if (iVar4 == 0) goto LAB_10064ec8;
              }
              if ((*puVar1 >> 9 & 1) != 0) {
                uVar6 = (*pcVar2)();
                puVar7 = (undefined8 *)(*extraout_w11_04)(uVar6,auStack_a0,0x19);
                uVar11 = *puVar7;
                uVar10 = puVar7[3];
                uVar9 = puVar7[2];
                *(undefined8 *)(iVar3 + 0x240) = puVar7[1];
                *(undefined8 *)(iVar3 + 0x238) = uVar11;
                *(undefined8 *)(iVar3 + 0x250) = uVar10;
                *(undefined8 *)(iVar3 + 0x248) = uVar9;
                uVar6 = (*pcVar2)();
                iVar4 = (*extraout_w11_05)(uVar6,param_5);
                if (iVar4 == 0) goto LAB_10064ec8;
              }
              if ((*puVar1 >> 8 & 1) != 0) {
                uVar6 = (*pcVar2)();
                puVar7 = (undefined8 *)(*extraout_w11_06)(uVar6,auStack_80,0x18);
                uVar11 = *puVar7;
                uVar10 = puVar7[3];
                uVar9 = puVar7[2];
                *(undefined8 *)(iVar3 + 0x260) = puVar7[1];
                *(undefined8 *)(iVar3 + 600) = uVar11;
                *(undefined8 *)(iVar3 + 0x270) = uVar10;
                *(undefined8 *)(iVar3 + 0x268) = uVar9;
                *(undefined4 *)(iVar3 + 0x264) = 0x20;
                uVar6 = (*pcVar2)();
                iVar4 = (*extraout_w11_07)(uVar6,param_5);
                if (iVar4 == 0) goto LAB_10064ec8;
              }
              if ((*puVar1 >> 8 & 1) != 0) {
                uVar6 = (*pcVar2)();
                puVar7 = (undefined8 *)(*extraout_w11_08)(uVar6,auStack_60,0x1b);
                uVar11 = *puVar7;
                uVar10 = puVar7[3];
                uVar9 = puVar7[2];
                *(undefined8 *)(iVar3 + 0x280) = puVar7[1];
                *(undefined8 *)(iVar3 + 0x278) = uVar11;
                *(undefined8 *)(iVar3 + 0x290) = uVar10;
                *(undefined8 *)(iVar3 + 0x288) = uVar9;
                uVar6 = (*pcVar2)();
                (*extraout_w11_09)(uVar6,param_5);
              }
            }
            else {
              uVar6 = (*pcVar2)();
              puVar7 = (undefined8 *)(*extraout_w11_00)(uVar6,auStack_e0,0x17);
              uVar11 = *puVar7;
              uVar10 = puVar7[3];
              uVar9 = puVar7[2];
              *(undefined8 *)(iVar3 + 0x200) = puVar7[1];
              *(undefined8 *)(iVar3 + 0x1f8) = uVar11;
              *(undefined8 *)(iVar3 + 0x210) = uVar10;
              *(undefined8 *)(iVar3 + 0x208) = uVar9;
              uVar6 = (*pcVar2)();
              iVar4 = (*extraout_w11_01)(uVar6,param_5);
              if (iVar4 != 0) goto LAB_10064d10;
            }
LAB_10064ec8:
            uVar6 = 0;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar6;
}

