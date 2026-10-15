/*
 * FUN_100d34a8 at 100d34a8
 * undefined FUN_100d34a8(void)
 * Address ranges: 100d34a8-100d37a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d34a8(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *pcVar4;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  pfVar1 = (float *)(param_1 + (param_2 + 0x10c) * 4);
  if (*pfVar1 == param_3) {
    return;
  }
  if (param_2 < 0xb5) {
    if (param_2 != 0x9a) {
      if ((param_2 == 0xa6) && (*(float *)(*(int *)(&DAT_00006704 + param_1) + 0xb0) < param_3)) {
        param_3 = *(float *)(*(int *)(&DAT_00006704 + param_1) + 0xb0);
      }
      goto LAB_100d3614;
    }
    if (*(int *)(param_1 + 0x66fc) == 0 || *(int *)(param_1 + 0x66fc) == 0x1002) {
      if (param_3 == (float)0x304d3241) {
        if ((*(char *)(param_1 + 0x6701) != '\0') || (*(char *)(param_1 + 0x6702) != '\0')) {
          uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          uVar3 = 0;
          pcVar4 = extraout_w11_05;
          goto LAB_100d36d0;
        }
      }
      else if (param_3 == (float)0x314d3241) {
        if (*(char *)(param_1 + 0x6701) != '\0') {
          uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          pcVar4 = extraout_w11_04;
          goto LAB_100d370c;
        }
      }
      else if (((param_3 == (float)0x54534e49) && (*(char *)(param_1 + 0x6702) != '\0')) &&
              (*(char *)(param_1 + 0x12) != '\0')) {
        uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        pcVar4 = extraout_w11_03;
        goto LAB_100d36cc;
      }
    }
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar4 = extraout_w11_06;
  }
  else {
    if (0xb5 < param_2) {
      if ((param_2 == 0xb8) &&
         ((*(uint *)(*(int *)(&DAT_00006704 + param_1) + 0x1c) >> 0x18 & 1) == 0))
      goto LAB_100d378c;
LAB_100d3614:
      FUN_10025700(param_1,param_2,param_3);
      goto LAB_100d378c;
    }
    if (*(int *)(param_1 + 0x66fc) == 0 || *(int *)(param_1 + 0x66fc) == 0x10de) {
      if (param_3 == 0.0) {
        if ((*(char *)(param_1 + 0x6701) != '\0') || (*(char *)(param_1 + 0x6702) != '\0')) {
          uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11_01)(uVar2,0);
        }
      }
      else if (param_3 == (float)0x41415353) {
        if ((*(char *)(param_1 + 0x6702) != '\0') && (*(char *)(param_1 + 0x12) != '\0')) {
          uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          pcVar4 = extraout_w11_00;
LAB_100d36cc:
          uVar3 = 2;
          goto LAB_100d36d0;
        }
      }
      else if ((param_3 == (float)0x434f5441) && (*(char *)(param_1 + 0x6701) != '\0')) {
        uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        pcVar4 = extraout_w11;
LAB_100d370c:
        uVar3 = 1;
LAB_100d36d0:
        (*pcVar4)(uVar2,uVar3);
        goto LAB_100d378c;
      }
    }
    uVar2 = (*pcVar4)();
    pcVar4 = extraout_w11_02;
  }
  (*pcVar4)(uVar2,param_2,param_3);
LAB_100d378c:
  *pfVar1 = param_3;
  return;
}

