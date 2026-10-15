/*
 * FUN_180098e5c at 180098e5c
 * undefined __fastcall FUN_180098e5c(longlong param_1, int param_2, int param_3, int param_4, int param_5, longlong param_6, longlong param_7, longlong * param_8)
 * Address ranges: 180098e5c-180099201
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180098e5c(longlong param_1,int param_2,int param_3,int param_4,int param_5,longlong param_6
                  ,longlong param_7,longlong *param_8)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong *plVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 in_stack_fffffffffffffeb0;
  undefined8 in_stack_fffffffffffffec0;
  byte bVar17;
  byte bVar18;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  
  iVar5 = *(int *)(param_6 + 8);
  plVar1 = (longlong *)(param_6 + -0x100);
  plVar16 = (longlong *)(-(ulonglong)(param_7 != 0) & param_7 - 0x100U);
  (**(code **)(*plVar16 + 0xb0))(plVar16,param_4,param_5,0);
  plVar10 = plVar1;
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_2,param_3,0);
  if ((((*(char *)((longlong)param_8 + 0x2c) != '\0') && ((char)param_8[5] == '\0')) &&
      (*(char *)((longlong)param_8 + 0x2b) == '\0')) &&
     (FUN_180095794(plVar10,&local_108,plVar1,plVar16,(byte)param_2,in_stack_fffffffffffffeb0,
                    (byte)param_4,in_stack_fffffffffffffec0,(int *)param_8,(int *)(param_8 + 2)),
     local_e4 == local_e0)) {
    piVar11 = (int *)(param_7 + -0xd4);
    if (param_7 == 0) {
      piVar11 = (int *)&DAT_0000002c;
    }
    if (*piVar11 == *(int *)(param_6 + -0xd4)) {
      if (local_c0._4_4_ - local_c8._4_4_ == local_d0._4_4_ - local_d4) {
        if ((int)local_b8 - (int)local_c0 == (int)local_c8 - (int)local_d0) {
          if (local_b0._3_1_ == '\0') {
            if (local_dc == local_d8) {
              cVar9 = local_b0._2_1_;
              if ((local_d8 != 1) || (local_b8._4_1_ != local_b8._5_1_))
              goto joined_r0x000180098fc5;
LAB_180098fc7:
              bVar8 = true;
            }
            else {
              bVar8 = false;
              if (local_d8 == 1) {
                cVar9 = local_b0._1_1_;
joined_r0x000180098fc5:
                bVar8 = false;
                if (cVar9 != '\0') goto LAB_180098fc7;
              }
            }
            bVar7 = false;
            if ((char)local_b0 == '\0') {
              bVar7 = bVar8;
            }
            if (bVar7) {
LAB_180099010:
              FUN_180095960(param_1,param_2,param_3,param_4,param_5,plVar1,plVar16,&local_108,
                            param_8);
              goto LAB_1800991c6;
            }
          }
          else if ((local_dc == local_d8) &&
                  ((local_b0._2_1_ != '\0' ||
                   ((*(char *)((ulonglong)*(uint *)(param_1 + 0x28) * 0x20 + 0x6ea +
                              *(longlong *)(param_1 + 0x1cf10)) != '\0' &&
                    (local_b8._4_1_ == local_b8._5_1_)))))) goto LAB_180099010;
        }
      }
    }
  }
  piVar11 = (int *)(param_7 + -0xc4);
  if (param_7 == 0) {
    piVar11 = (int *)&DAT_0000003c;
  }
  uVar15 = 0;
  local_d4 = param_5 * *piVar11 + param_4;
  local_e0 = param_3 * *(int *)(param_6 + -0xc4) + param_2;
  uVar14 = uVar15;
  if (*(char *)((longlong)param_8 + 0x2c) == '\0') {
    bVar18 = *(byte *)((longlong)param_8 + 0x2b);
    local_108 = *param_8;
    lStack_100 = param_8[1];
    bVar17 = *(byte *)((longlong)param_8 + 0x2a);
    bVar3 = *(byte *)((longlong)param_8 + 0x29);
    bVar4 = *(byte *)(param_8 + 5);
    uVar12 = *(uint *)((longlong)param_8 + 0x24);
    uVar6 = *(uint *)(param_8 + 4);
    local_f8 = param_8[2];
    lStack_f0 = param_8[3];
    param_8 = (longlong *)0x0;
  }
  else {
    do {
      uVar12 = (int)uVar14 + 1;
      *(float *)((longlong)&local_58 + (longlong)((int)uVar14 * 4)) =
           (float)*(int *)((longlong)param_8 + uVar14 * 4 + 0x10);
      uVar14 = (ulonglong)uVar12;
    } while ((int)uVar12 < 4);
    do {
      iVar13 = (int)uVar15;
      lVar2 = uVar15 * 4;
      uVar12 = iVar13 + 1;
      uVar15 = (ulonglong)uVar12;
      *(float *)((longlong)&local_68 + (longlong)(iVar13 * 4)) =
           (float)*(int *)((longlong)param_8 + lVar2);
    } while ((int)uVar12 < 4);
    bVar18 = *(byte *)((longlong)param_8 + 0x2b);
    bVar17 = *(byte *)((longlong)param_8 + 0x2a);
    bVar3 = *(byte *)((longlong)param_8 + 0x29);
    bVar4 = *(byte *)(param_8 + 5);
    uVar12 = *(uint *)((longlong)param_8 + 0x24);
    uVar6 = *(uint *)(param_8 + 4);
    local_108 = local_68;
    lStack_100 = lStack_60;
    local_f8 = local_58;
    lStack_f0 = lStack_50;
  }
  local_d8 = param_5;
  local_c8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_e8 = param_2;
  local_e4 = param_3;
  local_dc = param_4;
  FUN_180095d14(param_1,(float *)&local_108,plVar1,plVar16,iVar5 == 0,param_8,uVar6,uVar12,bVar4,
                bVar3,bVar17,bVar18);
LAB_1800991c6:
  (**(code **)(*plVar16 + 0xb8))(plVar16,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001800991fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,param_3);
  return;
}

