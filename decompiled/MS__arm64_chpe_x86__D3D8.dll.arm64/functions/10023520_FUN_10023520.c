/*
 * FUN_10023520 at 10023520
 * undefined FUN_10023520(void)
 * Address ranges: 10023520-10023707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023520(int param_1,uint param_2,char param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong extraout_x15;
  ulonglong uVar11;
  uint local_b0;
  undefined1 auStack_ac [12];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  char local_34;
  undefined1 local_33;
  
  uVar11 = (ulonglong)param_2;
  local_b0 = param_2;
  FUN_10121020(auStack_ac);
  if (*(char *)(param_1 + 0x220) == '\0') {
    iVar3 = FUN_10011ab0(param_1 + 0x148,&local_b0);
    if (iVar3 == 0) {
      uVar5 = FUN_10023c88(extraout_x15 & 0xffffffff,&local_b0,param_1 + 0x180);
      uVar4 = FUN_10024550(uVar5,&local_a0,param_1 + 0x180);
      FUN_100239e8(param_1 + 0x158,&local_b0,uVar4);
    }
    if (*(uint *)(param_1 + 0x178) != 0) {
      uVar7 = 0;
      do {
        if (*(uint *)(*(int *)(param_1 + 0x174) + uVar7 * 4) == param_2) {
          if (uVar7 != 0xffffffff) {
            if (param_3 == '\0') {
              FUN_10020900(param_1,uVar11);
            }
            goto LAB_100236d0;
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x178));
    }
    if (param_3 != '\0') {
      FUN_10020810(param_1,uVar11);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c) * 4);
    uVar7 = *(uint *)(iVar3 + 0x49a4);
    if (uVar7 != 0) {
      uVar8 = 0;
      uVar6 = uVar7;
      do {
        uVar9 = uVar6 + uVar8 >> 1;
        uVar10 = *(ulonglong *)(*(int *)(iVar3 + 0x49a0) + uVar9 * 0x80);
        uVar2 = uVar9;
        if (uVar10 <= uVar11) {
          if (uVar11 <= uVar10) break;
          uVar8 = uVar9 + 1;
          uVar9 = uVar8;
          uVar2 = uVar6;
        }
        uVar6 = uVar2;
      } while (uVar6 != uVar8);
      if (((uVar9 != uVar7) &&
          (puVar1 = (ulonglong *)(*(int *)(iVar3 + 0x49a0) + uVar9 * 0x80), *puVar1 == uVar11)) &&
         (puVar1 != (ulonglong *)0xfffffff4)) {
        *(char *)(puVar1 + 0xf) = param_3;
        goto LAB_100236d0;
      }
    }
    uStack_98 = *(undefined8 *)(param_1 + 0x188);
    local_a0 = *(undefined8 *)(param_1 + 0x180);
    uStack_88 = *(undefined8 *)(param_1 + 0x198);
    uStack_90 = *(undefined8 *)(param_1 + 400);
    local_40 = *(undefined8 *)(param_1 + 0x1e0);
    uStack_78 = *(undefined8 *)(param_1 + 0x1a8);
    local_80 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_68 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1b0);
    local_38 = *(undefined4 *)(param_1 + 0x1e8);
    uStack_58 = *(undefined8 *)(param_1 + 0x1c8);
    local_60 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_48 = *(undefined8 *)(param_1 + 0x1d8);
    uStack_50 = *(undefined8 *)(param_1 + 0x1d0);
    local_33 = 1;
    local_34 = param_3;
    FUN_10023f38(iVar3 + 0x499c,&local_b0,&local_a0);
  }
LAB_100236d0:
  FUN_10120f70(auStack_ac);
  return;
}

