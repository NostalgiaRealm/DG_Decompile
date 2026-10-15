/*
 * FUN_18008ce40 at 18008ce40
 * byte __fastcall FUN_18008ce40(longlong param_1, uint param_2, int param_3, int param_4, int param_5, longlong param_6, longlong param_7, longlong * param_8)
 * Address ranges: 18008ce40-18008d1bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18008ce40(longlong param_1,uint param_2,int param_3,int param_4,int param_5,
                  longlong param_6,longlong param_7,longlong *param_8)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  longlong *plVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  
  iVar10 = *(int *)(param_6 + 8);
  plVar13 = (longlong *)(param_6 + -0xe0);
  plVar14 = (longlong *)(-(ulonglong)(param_7 != 0) & param_7 - 0xe0U);
  (**(code **)(*plVar14 + 0xb0))(plVar14,param_4,param_5);
  plVar7 = plVar13;
  (**(code **)(*plVar13 + 0xb0))(plVar13,param_2,param_3);
  if (((*(char *)((longlong)param_8 + 0x2c) != '\0') && ((char)param_8[5] == '\0')) &&
     (*(char *)((longlong)param_8 + 0x2b) == '\0')) {
    FUN_18008aa60(plVar7,&local_d8,plVar13,plVar14,iVar10 == 0,param_2,param_3,param_4,param_5,
                  (int *)param_8,(int *)(param_8 + 2));
    if (uStack_c0._4_4_ == local_b8) {
      piVar8 = (int *)(param_7 + -0xb4);
      if (param_7 == 0) {
        piVar8 = (int *)&DAT_0000002c;
      }
      if (*piVar8 == *(int *)(param_6 + -0xb4)) {
        if (local_98._4_4_ - uStack_a0._4_4_ == local_a8._4_4_ - local_ac) {
          if ((int)uStack_90 - (int)local_98 == (int)uStack_a0 - (int)local_a8) {
            bVar6 = 0;
            if (local_88._3_1_ == '\0') {
              if (local_b4 == local_b0) {
                if (local_b0 == 1) {
                  if (uStack_90._4_1_ != uStack_90._5_1_) goto LAB_18008cfaa;
LAB_18008cfb3:
                  bVar6 = 1;
                }
                else {
LAB_18008cfaa:
                  if (local_88._2_1_ != 0) goto LAB_18008cfb3;
                }
                if ((local_b0 == 1) ||
                   (bVar5 = 0,
                   0xa000 < *(int *)((ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 + 0x6cc +
                                    *(longlong *)(param_1 + 0x1cf10)))) {
                  bVar5 = 1;
                }
                bVar5 = bVar6 & bVar5;
              }
              else {
                if (local_b0 == 1) {
                  bVar5 = 1;
                  if (local_88._1_1_ != '\0') goto LAB_18008cfe4;
                }
                bVar5 = bVar6;
              }
LAB_18008cfe4:
              bVar6 = 0;
              if ((char)local_88 == '\0') {
                bVar6 = bVar5;
              }
            }
            else {
              bVar6 = local_88._2_1_;
              if (local_b4 != local_b0) goto LAB_18008d04e;
            }
            if (bVar6 != 0) {
              bVar6 = FUN_18008ad6c(param_1,(ulonglong)param_2,param_3,param_4,param_5,plVar13,
                                    plVar14,(longlong)&local_d8,(int *)param_8,(RECT *)(param_8 + 2)
                                   );
              goto LAB_18008d17f;
            }
          }
        }
      }
    }
  }
LAB_18008d04e:
  uVar12 = 0;
  uVar11 = uVar12;
  if (*(char *)((longlong)param_8 + 0x2c) == '\0') {
    local_d8 = *param_8;
    lStack_d0 = param_8[1];
    iVar10 = *(int *)(param_6 + 8);
    bVar6 = *(byte *)((longlong)param_8 + 0x2b);
    bVar5 = *(byte *)((longlong)param_8 + 0x2a);
    bVar2 = *(byte *)((longlong)param_8 + 0x29);
    bVar3 = *(byte *)(param_8 + 5);
    uVar9 = *(uint *)((longlong)param_8 + 0x24);
    uVar4 = *(uint *)(param_8 + 4);
    local_c8 = param_8[2];
    uStack_c0 = param_8[3];
    param_8 = (longlong *)0x0;
  }
  else {
    do {
      uVar9 = (int)uVar11 + 1;
      *(float *)((longlong)&local_58 + (longlong)((int)uVar11 * 4)) =
           (float)*(int *)((longlong)param_8 + uVar11 * 4 + 0x10);
      uVar11 = (ulonglong)uVar9;
    } while ((int)uVar9 < 4);
    do {
      iVar10 = (int)uVar12;
      lVar1 = uVar12 * 4;
      uVar9 = iVar10 + 1;
      uVar12 = (ulonglong)uVar9;
      *(float *)((longlong)&local_68 + (longlong)(iVar10 * 4)) =
           (float)*(int *)((longlong)param_8 + lVar1);
    } while ((int)uVar9 < 4);
    iVar10 = *(int *)(param_6 + 8);
    bVar6 = *(byte *)((longlong)param_8 + 0x2b);
    bVar5 = *(byte *)((longlong)param_8 + 0x2a);
    bVar2 = *(byte *)((longlong)param_8 + 0x29);
    bVar3 = *(byte *)(param_8 + 5);
    uVar9 = *(uint *)((longlong)param_8 + 0x24);
    uVar4 = *(uint *)(param_8 + 4);
    local_d8 = local_68;
    lStack_d0 = lStack_60;
    local_c8 = local_58;
    uStack_c0 = lStack_50;
  }
  local_ac = param_5;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_b8 = param_2;
  local_b4 = param_3;
  local_b0 = param_4;
  bVar6 = FUN_18008b58c(param_1,(float *)&local_d8,plVar13,plVar14,iVar10 == 0,param_8,uVar4,uVar9,
                        bVar3,bVar2,bVar5,bVar6);
LAB_18008d17f:
  (**(code **)(*plVar14 + 0xb8))(plVar14,param_4,param_5);
  (**(code **)(*plVar13 + 0xb8))(plVar13,param_2,param_3);
  return bVar6;
}

