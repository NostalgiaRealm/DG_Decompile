/*
 * FUN_10029040 at 10029040
 * undefined FUN_10029040(void)
 * Address ranges: 10029040-10029227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029040(int param_1,uint param_2,char param_3)

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
  FUN_10157b40(auStack_ac);
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    iVar3 = FUN_10012e10(param_1 + 0x2ec,&local_b0);
    if (iVar3 == 0) {
      uVar5 = FUN_10029720(extraout_x15 & 0xffffffff,&local_b0,param_1 + 0x324);
      uVar4 = FUN_10029fe8(uVar5,&local_a0,param_1 + 0x324);
      FUN_10029480(param_1 + 0x2fc,&local_b0,uVar4);
    }
    if (*(uint *)(param_1 + 0x31c) != 0) {
      uVar7 = 0;
      do {
        if (*(uint *)(*(int *)(param_1 + 0x318) + uVar7 * 4) == param_2) {
          if (uVar7 != 0xffffffff) {
            if (param_3 == '\0') {
              FUN_100267e8(param_1,uVar11);
            }
            goto LAB_100291f0;
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x31c));
    }
    if (param_3 != '\0') {
      FUN_100266f8(param_1,uVar11);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
    uVar7 = *(uint *)(iVar3 + 0x4ab4);
    if (uVar7 != 0) {
      uVar8 = 0;
      uVar6 = uVar7;
      do {
        uVar9 = uVar6 + uVar8 >> 1;
        uVar10 = *(ulonglong *)(*(int *)(iVar3 + 0x4ab0) + uVar9 * 0x80);
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
          (puVar1 = (ulonglong *)(*(int *)(iVar3 + 0x4ab0) + uVar9 * 0x80), *puVar1 == uVar11)) &&
         (puVar1 != (ulonglong *)0xfffffff4)) {
        *(char *)(puVar1 + 0xf) = param_3;
        goto LAB_100291f0;
      }
    }
    uStack_98 = *(undefined8 *)(param_1 + 0x32c);
    local_a0 = *(undefined8 *)(param_1 + 0x324);
    uStack_88 = *(undefined8 *)(param_1 + 0x33c);
    uStack_90 = *(undefined8 *)(param_1 + 0x334);
    local_40 = *(undefined8 *)(param_1 + 900);
    uStack_78 = *(undefined8 *)(param_1 + 0x34c);
    local_80 = *(undefined8 *)(param_1 + 0x344);
    uStack_68 = *(undefined8 *)(param_1 + 0x35c);
    uStack_70 = *(undefined8 *)(param_1 + 0x354);
    local_38 = *(undefined4 *)(param_1 + 0x38c);
    uStack_58 = *(undefined8 *)(param_1 + 0x36c);
    local_60 = *(undefined8 *)(param_1 + 0x364);
    uStack_48 = *(undefined8 *)(param_1 + 0x37c);
    uStack_50 = *(undefined8 *)(param_1 + 0x374);
    local_33 = 1;
    local_34 = param_3;
    FUN_100299d0(iVar3 + 0x4aac,&local_b0,&local_a0);
  }
LAB_100291f0:
  FUN_10157a90(auStack_ac);
  return;
}

