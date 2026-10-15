/*
 * FUN_10113368 at 10113368
 * undefined FUN_10113368(void)
 * Address ranges: 10113368-101138a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10113368(int param_1)

{
  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *extraout_w8;
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
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  uint uVar9;
  code *extraout_w11_15;
  uint uVar10;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [2];
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 0x924);
  uVar10 = 0;
  if (*puVar1 != 0) {
    puVar8 = (undefined4 *)(param_1 + 0x91c);
    local_60 = param_1;
    do {
      uVar5 = (*pcVar4)();
      iVar6 = (*extraout_w11)(uVar5,*puVar8,&DAT_10165980);
      param_1 = local_60;
      if (iVar6 < 0) break;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *puVar1);
  }
  if (uVar10 != *puVar1) {
LAB_10113840:
    iVar6 = uVar10 + 1;
    if (iVar6 != 0) {
      do {
        uVar5 = (*pcVar4)();
        (*extraout_w11_15)(uVar5);
        *(undefined4 *)(param_1 + 0x638 + iVar6 * 4) = 0;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    return 0;
  }
  piVar2 = (int *)(param_1 + 0x638);
  puVar8 = (undefined4 *)(param_1 + 0x63c);
  uVar5 = (*pcVar4)();
  iVar6 = (*extraout_w11_00)(uVar5,0,*extraout_w8,*puVar8,0,&DAT_10165970,piVar2);
  if (iVar6 < 0) goto LAB_10113840;
  puVar1 = (uint *)(param_1 + 0x920);
  *puVar1 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48[0] = 0;
  uVar5 = (*pcVar4)();
  iVar6 = (*extraout_w11_01)(uVar5,0x1015e610,&local_60);
  if (iVar6 < 0) {
    uVar5 = (*pcVar4)();
    iVar6 = (*extraout_w11_03)(uVar5,&DAT_1015e600,&local_5c);
    if (iVar6 < 0) {
      uVar5 = (*pcVar4)();
      iVar6 = (*extraout_w11_05)(uVar5,&DAT_1015e5f0,&local_58);
      if (iVar6 < 0) {
        uVar5 = (*pcVar4)();
        iVar6 = (*extraout_w11_07)(uVar5,&DAT_1015e5a0,&local_54);
        if (iVar6 < 0) {
          uVar5 = (*pcVar4)();
          iVar6 = (*extraout_w11_09)(uVar5,&DAT_1015e590,&local_50);
          if (iVar6 < 0) {
            uVar5 = (*pcVar4)();
            iVar6 = (*extraout_w11_11)(uVar5,&DAT_1015e650,&local_4c);
            if (iVar6 < 0) {
              uVar5 = (*pcVar4)();
              iVar6 = (*extraout_w11_13)(uVar5,&DAT_1015e640,local_48);
              if (-1 < iVar6) {
                uVar5 = (*pcVar4)();
                (*extraout_w11_14)(uVar5);
                *puVar1 = 1;
                *piVar2 = local_48[0];
              }
              goto LAB_10113778;
            }
            uVar5 = (*pcVar4)();
            (*extraout_w11_12)(uVar5);
            *piVar2 = local_4c;
            uVar10 = 2;
          }
          else {
            uVar5 = (*pcVar4)();
            (*extraout_w11_10)(uVar5);
            *piVar2 = local_50;
            uVar10 = 3;
          }
        }
        else {
          uVar5 = (*pcVar4)();
          (*extraout_w11_08)(uVar5);
          *piVar2 = local_54;
          uVar10 = 4;
        }
      }
      else {
        uVar5 = (*pcVar4)();
        (*extraout_w11_06)(uVar5);
        *piVar2 = local_58;
        uVar10 = 5;
      }
    }
    else {
      uVar5 = (*pcVar4)();
      (*extraout_w11_04)(uVar5);
      *piVar2 = local_5c;
      uVar10 = 6;
    }
  }
  else {
    uVar5 = (*pcVar4)();
    (*extraout_w11_02)(uVar5);
    *piVar2 = local_60;
    uVar10 = 7;
  }
  *puVar1 = uVar10;
LAB_10113778:
  if (*(int *)(param_1 + 0x8e0) != 0) {
    uVar7 = FUN_1011b9c0(*(int *)(param_1 + 0x8e0));
    *(undefined8 *)(param_1 + 0x938) = uVar7;
  }
  if ((*(int *)(param_1 + 0x900) != 0) && (1 < *puVar1)) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x900) + 0xc);
    uVar10 = ~*puVar1;
    uVar10 = (uVar10 & 0xaaaaaaaa) >> 1 | (uVar10 & 0x55555555) << 1;
    uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    uVar9 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
    uVar10 = 0xffffffff;
    if ((1 - (uVar9 >> 5) & 0xff) != 0) {
      pbVar3 = (byte *)(((int)uVar9 >> 3) + (int)puVar1);
      *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(uVar9 & 7));
      uVar10 = uVar9;
    }
    *(uint *)(param_1 + 0x910) = uVar10;
  }
  FUN_101325d0(param_1 + 0x10,0,0x620);
  *(undefined4 *)(param_1 + 0x61c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x618) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x614) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x610) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x60c) = 0x7ff00000;
  return 1;
}

