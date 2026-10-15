/*
 * FUN_100234d8 at 100234d8
 * undefined FUN_100234d8(void)
 * Address ranges: 100234d8-10023a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100234d8(int param_1)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  uVar7 = FUN_100233f0(param_1);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x3151) != '\0') {
    iVar4 = FUN_1002c2c0(uVar7,*(undefined4 *)(param_1 + 0x2964));
    if (iVar4 != -1) {
      iVar4 = param_1 + iVar4 * 0x104;
      iVar6 = *(int *)(param_1 + 0x2990);
      iVar2 = *(int *)(param_1 + 0x2988);
      if (*(int *)(param_1 + 0x2bd8) == 1) {
        uVar8 = *(uint *)(iVar4 + 0x3418);
        iVar2 = uVar8 - iVar6;
        iVar6 = uVar8 - *(int *)(param_1 + 0x2988);
      }
      uVar8 = *(uint *)(iVar4 + 0x3414);
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar7 = SoftwareBreakpoint(0xf004,0x100235c0);
        (*(code *)uVar7)();
      }
      local_58 = 0;
      if (uVar8 != 0) {
        local_58 = (uint)(*(int *)(iVar4 + 0x341c) * *(int *)(param_1 + 0x2984)) / uVar8;
      }
      uVar9 = *(uint *)(iVar4 + 0x3418);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        uVar7 = SoftwareBreakpoint(0xf004,0x100235e4);
        (*(code *)uVar7)();
      }
      local_54 = 0;
      if (uVar9 != 0) {
        local_54 = (uint)(*(int *)(iVar4 + 0x3420) * iVar2) / uVar9;
      }
      local_50 = 0;
      if (uVar8 != 0) {
        local_50 = (uint)(*(int *)(iVar4 + 0x341c) * *(int *)(param_1 + 0x298c)) / uVar8;
      }
      local_4c = 0;
      if (uVar9 != 0) {
        local_4c = (uint)(*(int *)(iVar4 + 0x3420) * iVar6) / uVar9;
      }
      uVar5 = (*pcVar3)();
      (*extraout_w11)(uVar5,1,&local_58);
    }
    *(undefined1 *)(param_1 + 0x3151) = 0;
  }
  if (*(char *)(param_1 + 0x3152) != '\0') {
    uVar5 = (*pcVar3)();
    iVar4 = (*extraout_w11_00)(uVar5,*(undefined4 *)(param_1 + 0x319c),0,4,0,&local_58);
    if (-1 < iVar4) {
      uVar8 = 0;
      if (*(uint *)(param_1 + 0xd8) == 0) {
        uVar9 = 0;
      }
      else {
        do {
          pbVar1 = (byte *)(param_1 + 0x21c + uVar8);
          iVar4 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(float *)(local_58 + iVar4) = (float)*pbVar1 / 255.0;
          uVar9 = *(uint *)(param_1 + 0xd8);
        } while (uVar8 < uVar9);
      }
      *(float *)(local_58 + uVar9 * 4) = (float)*(byte *)(uVar9 + param_1 + 0x21b) / 255.0;
      uVar5 = (*pcVar3)();
      (*extraout_w11_01)(uVar5,*(undefined4 *)(param_1 + 0x319c),0);
      *(undefined1 *)(param_1 + 0x3152) = 0;
    }
  }
  uVar8 = 0;
  do {
    if (*(char *)(param_1 + 0x3153 + uVar8) != '\0') {
      FUN_100479f8(*(undefined4 *)(uVar8 * 4 + param_1 + 0xc9fc));
      *(undefined1 *)(uVar8 + param_1 + 0x3153) = 0;
    }
    if (*(char *)(param_1 + 0x3156 + uVar8) != '\0') {
      iVar4 = *(int *)(uVar8 * 4 + param_1 + 0xc9fc);
      if (*(char *)(iVar4 + 0x3014) != '\0') {
        uVar5 = (*pcVar3)();
        iVar6 = (*extraout_w11_02)(uVar5,*(undefined4 *)(iVar4 + 0x302c),0,4,0,&local_58);
        if (-1 < iVar6) {
          FUN_1007ac00(local_58,iVar4 + 0x14,0x1000);
          uVar5 = (*pcVar3)();
          (*extraout_w11_03)(uVar5,*(undefined4 *)(iVar4 + 0x302c),0);
          *(undefined1 *)(iVar4 + 0x3014) = 0;
        }
      }
      if (*(char *)(iVar4 + 0x3015) != '\0') {
        uVar5 = (*pcVar3)();
        iVar6 = (*extraout_w11_04)(uVar5,*(undefined4 *)(iVar4 + 0x3024),0,4,0,&local_58);
        if (-1 < iVar6) {
          FUN_1007ac00(local_58,iVar4 + 0x1014,0x1000);
          uVar5 = (*pcVar3)();
          (*extraout_w11_05)(uVar5,*(undefined4 *)(iVar4 + 0x3024),0);
          *(undefined1 *)(iVar4 + 0x3015) = 0;
        }
      }
      if (*(char *)(iVar4 + 0x3016) != '\0') {
        uVar5 = (*pcVar3)();
        iVar6 = (*extraout_w11_06)(uVar5,*(undefined4 *)(iVar4 + 0x3028),0,4,0,&local_58);
        if (-1 < iVar6) {
          FUN_1007ac00(local_58,iVar4 + 0x2014,0x1000);
          uVar5 = (*pcVar3)();
          (*extraout_w11_07)(uVar5,*(undefined4 *)(iVar4 + 0x3028),0);
          *(undefined1 *)(iVar4 + 0x3016) = 0;
        }
      }
      *(undefined1 *)(uVar8 + param_1 + 0x3156) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  return;
}

