/*
 * FUN_1801a5768 at 1801a5768
 * undefined FUN_1801a5768(void)
 * Address ranges: 1801a5768-1801a5b57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a5768(longlong param_1,int param_2,int param_3,int param_4,int param_5,longlong param_6
                  ,longlong param_7,float *param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  float *local_58;
  code *local_50;
  longlong local_48;
  
  iVar5 = *(int *)(param_6 + 8);
  lVar1 = 0;
  if (param_7 != 0) {
    lVar1 = param_7 + -0x100;
  }
  lVar2 = 0;
  if (param_6 != 0) {
    lVar2 = param_6 + -0x100;
  }
  lVar3 = param_6 + -0x100;
  if (iVar5 == 0) {
    lVar3 = lVar2;
  }
  local_50 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_58 = param_8;
  local_48 = param_7;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar1,param_4,param_5,0);
  (*local_50)(0x180224000);
  uVar8 = (*extraout_x11_00)(lVar3,param_2,param_3,0);
  if (((*(char *)(param_8 + 0xb) != '\0') && (*(char *)(param_8 + 10) == '\0')) &&
     (*(char *)((longlong)param_8 + 0x2b) == '\0')) {
    param_8 = param_8 + 4;
    FUN_1801a15e8(uVar8,&local_f0,lVar3,lVar1,param_2);
    if (local_cc == local_c8) {
      piVar4 = (int *)&DAT_0000002c;
      if (local_48 != 0) {
        piVar4 = (int *)(local_48 + -0xd4);
      }
      if (*piVar4 == *(int *)(lVar3 + 0x2c)) {
        if (local_a8._4_4_ - local_b0._4_4_ == local_b8._4_4_ - local_bc) {
          if ((int)local_a0 - (int)local_a8 == (int)local_b0 - (int)local_b8) {
            if (local_98._3_1_ == '\0') {
              if (local_c4 == local_c0) {
                cVar6 = local_98._2_1_;
                if (local_c0 != 1 || local_a0._4_1_ != local_a0._5_1_) goto LAB_1801a5904;
LAB_1801a5924:
                bVar7 = true;
              }
              else {
                if (local_c0 == 1) {
                  cVar6 = local_98._1_1_;
LAB_1801a5904:
                  if (cVar6 != '\0') goto LAB_1801a5924;
                }
                bVar7 = false;
              }
              if ((char)local_98 != '\0') {
                bVar7 = false;
              }
            }
            else if ((local_c4 == local_c0) &&
                    ((local_98._2_1_ != '\0' ||
                     (*(char *)(*(longlong *)(param_1 + 0x1cf10) +
                                (ulonglong)*(uint *)(param_1 + 0x28) * 0x20 + 0x6ea) != '\0' &&
                      local_a0._4_1_ == local_a0._5_1_)))) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              FUN_1801a1820(param_1,param_2,param_3,param_4,param_5,lVar3,lVar1,&local_f0,local_58,
                            param_8);
              goto LAB_1801a5aec;
            }
          }
        }
      }
    }
  }
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0;
  local_60 = 0;
  piVar4 = (int *)&DAT_0000003c;
  if (local_48 != 0) {
    piVar4 = (int *)(local_48 + -0xc4);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_bc = param_4 + *piVar4 * param_5;
  local_c8 = param_2 + *(int *)(lVar3 + 0x3c) * param_3;
  local_d0 = param_2;
  local_cc = param_3;
  local_c4 = param_4;
  local_c0 = param_5;
  if (*(char *)(local_58 + 0xb) == '\0') {
    local_f0 = *local_58;
    fStack_ec = local_58[1];
    local_e8 = local_58[2];
    fStack_e4 = local_58[3];
    local_e0 = local_58[4];
    fStack_dc = local_58[5];
    local_d8 = local_58[6];
    fStack_d4 = local_58[7];
    FUN_1801a1c90(param_1,&local_f0,lVar3,lVar1,iVar5 == 0,0,local_58[8],local_58[9],
                  *(undefined1 *)(local_58 + 10),*(undefined1 *)((longlong)local_58 + 0x29),
                  *(undefined1 *)((longlong)local_58 + 0x2a),
                  *(undefined1 *)((longlong)local_58 + 0x2b));
  }
  else {
    fStack_ec = (float)(int)local_58[1];
    local_f0 = (float)(int)*local_58;
    fStack_e4 = (float)(int)local_58[3];
    local_e8 = (float)(int)local_58[2];
    fStack_dc = (float)(int)local_58[5];
    local_e0 = (float)(int)local_58[4];
    fStack_d4 = (float)(int)local_58[7];
    local_d8 = (float)(int)local_58[6];
    FUN_1801a1c90(param_1,&local_f0,lVar3,lVar1,iVar5 == 0,local_58,local_58[8],local_58[9],
                  *(undefined1 *)(local_58 + 10),*(undefined1 *)((longlong)local_58 + 0x29),
                  *(undefined1 *)((longlong)local_58 + 0x2a),
                  *(undefined1 *)((longlong)local_58 + 0x2b));
  }
LAB_1801a5aec:
  (*local_50)(0x180224000);
  (*extraout_x11_01)(lVar1,param_4,param_5);
  (*local_50)(0x180224000);
  (*extraout_x11_02)(lVar3,param_2,param_3);
  return;
}

