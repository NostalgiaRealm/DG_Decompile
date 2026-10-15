/*
 * FUN_18008ee68 at 18008ee68
 * undefined FUN_18008ee68(void)
 * Address ranges: 18008ee68-18008f1e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008ee68(longlong param_1,int param_2,int param_3,int param_4,int param_5,longlong param_6
                  ,longlong param_7,float *param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  float *pfVar9;
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
  
  iVar5 = *(int *)(param_6 + 8);
  plVar1 = (longlong *)0x0;
  if (param_7 != 0) {
    plVar1 = (longlong *)(param_7 + -0x100);
  }
  plVar2 = (longlong *)0x0;
  if (param_6 != 0) {
    plVar2 = (longlong *)(param_6 + -0x100);
  }
  plVar3 = (longlong *)(param_6 + -0x100);
  if (iVar5 == 0) {
    plVar3 = plVar2;
  }
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_4,param_5,0);
  uVar8 = (**(code **)(*plVar3 + 0xb0))(plVar3,param_2,param_3,0);
  if (((*(char *)(param_8 + 0xb) != '\0') && (*(char *)(param_8 + 10) == '\0')) &&
     (*(char *)((longlong)param_8 + 0x2b) == '\0')) {
    pfVar9 = param_8 + 4;
    FUN_18008b0c8(uVar8,&local_f0,plVar3,plVar1,param_2);
    if (local_cc == local_c8) {
      piVar4 = (int *)&DAT_0000002c;
      if (param_7 != 0) {
        piVar4 = (int *)(param_7 + -0xd4);
      }
      if (*piVar4 == *(int *)((longlong)plVar3 + 0x2c)) {
        if (local_a8._4_4_ - local_b0._4_4_ == local_b8._4_4_ - local_bc) {
          if ((int)local_a0 - (int)local_a8 == (int)local_b0 - (int)local_b8) {
            if (local_98._3_1_ == '\0') {
              if (local_c4 == local_c0) {
                cVar6 = local_98._2_1_;
                if (local_c0 != 1 || local_a0._4_1_ != local_a0._5_1_) goto LAB_18008efd8;
LAB_18008eff8:
                bVar7 = true;
              }
              else {
                if (local_c0 == 1) {
                  cVar6 = local_98._1_1_;
LAB_18008efd8:
                  if (cVar6 != '\0') goto LAB_18008eff8;
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
              FUN_18008b310(param_1,param_2,param_3,param_4,param_5,plVar3,plVar1,&local_f0,param_8,
                            pfVar9);
              goto LAB_18008f198;
            }
          }
        }
      }
    }
  }
  local_b8 = 0;
  local_b0 = 0;
  piVar4 = (int *)&DAT_0000003c;
  if (param_7 != 0) {
    piVar4 = (int *)(param_7 + -0xc4);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_bc = param_4 + *piVar4 * param_5;
  local_78 = 0;
  uStack_70 = 0;
  local_c8 = param_2 + *(int *)((longlong)plVar3 + 0x3c) * param_3;
  local_d0 = param_2;
  local_cc = param_3;
  local_c4 = param_4;
  local_c0 = param_5;
  if (*(char *)(param_8 + 0xb) == '\0') {
    local_f0 = *param_8;
    fStack_ec = param_8[1];
    local_e8 = param_8[2];
    fStack_e4 = param_8[3];
    local_e0 = param_8[4];
    fStack_dc = param_8[5];
    local_d8 = param_8[6];
    fStack_d4 = param_8[7];
    FUN_18008b6f0(param_1,&local_f0,plVar3,plVar1,iVar5 == 0,0,param_8[8],param_8[9],
                  *(undefined1 *)(param_8 + 10),*(undefined1 *)((longlong)param_8 + 0x29),
                  *(undefined1 *)((longlong)param_8 + 0x2a),
                  *(undefined1 *)((longlong)param_8 + 0x2b));
  }
  else {
    fStack_ec = (float)(int)param_8[1];
    local_f0 = (float)(int)*param_8;
    fStack_e4 = (float)(int)param_8[3];
    local_e8 = (float)(int)param_8[2];
    fStack_dc = (float)(int)param_8[5];
    local_e0 = (float)(int)param_8[4];
    fStack_d4 = (float)(int)param_8[7];
    local_d8 = (float)(int)param_8[6];
    FUN_18008b6f0(param_1,&local_f0,plVar3,plVar1,iVar5 == 0,param_8,param_8[8],param_8[9],
                  *(undefined1 *)(param_8 + 10),*(undefined1 *)((longlong)param_8 + 0x29),
                  *(undefined1 *)((longlong)param_8 + 0x2a),
                  *(undefined1 *)((longlong)param_8 + 0x2b));
  }
LAB_18008f198:
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_4,param_5);
  (**(code **)(*plVar3 + 0xb8))(plVar3,param_2,param_3);
  return;
}

