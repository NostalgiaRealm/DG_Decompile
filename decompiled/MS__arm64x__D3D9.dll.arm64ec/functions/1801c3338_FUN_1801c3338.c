/*
 * FUN_1801c3338 at 1801c3338
 * undefined FUN_1801c3338(void)
 * Address ranges: 1801c3338-1801c35c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c3338(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  undefined *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *pcVar6;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar1 = param_1 + (longlong)param_2 * 4;
  if (*(float *)(lVar1 + 0x478) == param_3) {
    return;
  }
  if (param_2 == 0x9a) {
    if (*(int *)(param_1 + 0x6890) == 0 || *(int *)(param_1 + 0x6890) == 0x1002) {
      if (param_3 != (float)0x304d3241) {
        if (param_3 == (float)0x314d3241) {
          if (*(char *)(param_1 + 0x6895) == '\0') goto LAB_1801c3580;
          uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar6 = extraout_x11_04;
LAB_1801c3540:
          uVar5 = 1;
        }
        else {
          if (((param_3 != (float)0x54534e49) || (*(char *)(param_1 + 0x6896) == '\0')) ||
             (*(char *)(param_1 + 0x22) == '\0')) goto LAB_1801c3580;
          uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar6 = extraout_x11_03;
LAB_1801c350c:
          uVar5 = 2;
        }
LAB_1801c3510:
        (*pcVar6)(uVar4,uVar5);
        goto LAB_1801c35ac;
      }
      if ((*(char *)(param_1 + 0x6895) != '\0') || (*(char *)(param_1 + 0x6896) != '\0')) {
        uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        uVar5 = 0;
        pcVar6 = extraout_x11_05;
        goto LAB_1801c3510;
      }
    }
LAB_1801c3580:
    uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar6 = extraout_x11_06;
LAB_1801c35a0:
    (*pcVar6)(uVar4,param_2,param_3);
    goto LAB_1801c35ac;
  }
  if (param_2 == 0xa6) {
    fVar3 = *(float *)(*(longlong *)(&DAT_00006898 + param_1) + 0xb0);
    if (param_3 <= *(float *)(*(longlong *)(&DAT_00006898 + param_1) + 0xb0)) goto LAB_1801c339c;
  }
  else {
    if (param_2 == 0xb5) {
      if (*(int *)(param_1 + 0x6890) == 0 || *(int *)(param_1 + 0x6890) == 0x10de) {
        if (param_3 == 0.0) {
          if ((*(char *)(param_1 + 0x6895) != '\0') || (*(char *)(param_1 + 0x6896) != '\0')) {
            uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            (*extraout_x11_01)(uVar4,0);
          }
        }
        else if (param_3 == (float)0x41415353) {
          if ((*(char *)(param_1 + 0x6896) != '\0') && (*(char *)(param_1 + 0x22) != '\0')) {
            uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            pcVar6 = extraout_x11_00;
            goto LAB_1801c350c;
          }
        }
        else if ((param_3 == (float)0x434f5441) && (*(char *)(param_1 + 0x6895) != '\0')) {
          uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar6 = extraout_x11;
          goto LAB_1801c3540;
        }
      }
      uVar4 = (*(code *)puVar2)(0x180224000);
      pcVar6 = extraout_x11_02;
      goto LAB_1801c35a0;
    }
    if ((param_2 == 0xb8) &&
       ((*(uint *)(*(longlong *)(&DAT_00006898 + param_1) + 0x1c) >> 0x18 & 1) == 0))
    goto LAB_1801c35ac;
LAB_1801c339c:
    fVar3 = param_3;
  }
  param_3 = fVar3;
  FUN_18011c370(param_1,param_2,param_3);
LAB_1801c35ac:
  *(float *)(lVar1 + 0x478) = param_3;
  return;
}

