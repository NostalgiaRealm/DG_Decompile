/*
 * FUN_18001d338 at 18001d338
 * undefined __fastcall FUN_18001d338(longlong param_1, uint param_2, char param_3)
 * Address ranges: 18001d338-18001d54a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d338(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  char local_2c;
  undefined1 local_2b;
  
  uVar9 = (ulonglong)param_2;
  local_res10[0] = param_2;
  FUN_1800fa780(local_res8);
  if (*(char *)(param_1 + 0x40c) != '\0') {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x408) * 8);
    uVar6 = *(uint *)(lVar1 + 0x4ac8);
    if (uVar6 != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x4ac0);
      uVar11 = 0;
      uVar10 = uVar6;
      do {
        uVar4 = uVar10 + uVar11 >> 1;
        uVar7 = (ulonglong)uVar4;
        uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar4 * 0x80);
        if (uVar3 <= uVar9) {
          if (uVar9 <= uVar3) break;
          uVar11 = uVar4 + 1;
          uVar7 = (ulonglong)uVar11;
          uVar4 = uVar10;
        }
        uVar10 = uVar4;
      } while (uVar10 != uVar11);
      if ((((uint)uVar7 != uVar6) && (uVar7 = uVar7 * 0x80, *(ulonglong *)(uVar7 + lVar2) == uVar9))
         && ((uVar7 | 0xc) + lVar2 != 0)) {
        *(char *)((uVar7 | 0x78) + lVar2) = param_3;
        goto LAB_18001d514;
      }
    }
    local_98 = *(undefined8 *)(param_1 + 0x368);
    uStack_90 = *(undefined8 *)(param_1 + 0x370);
    local_2b = 1;
    local_88 = *(undefined8 *)(param_1 + 0x378);
    uStack_80 = *(undefined8 *)(param_1 + 0x380);
    local_78 = *(undefined8 *)(param_1 + 0x388);
    uStack_70 = *(undefined8 *)(param_1 + 0x390);
    local_68 = *(undefined8 *)(param_1 + 0x398);
    uStack_60 = *(undefined8 *)(param_1 + 0x3a0);
    local_58 = *(undefined8 *)(param_1 + 0x3a8);
    uStack_50 = *(undefined8 *)(param_1 + 0x3b0);
    local_48 = *(undefined8 *)(param_1 + 0x3b8);
    uStack_34 = *(undefined8 *)(param_1 + 0x3cc);
    uStack_40 = (undefined4)*(undefined8 *)(param_1 + 0x3c0);
    uStack_3c = (undefined4)*(undefined8 *)(param_1 + 0x3c4);
    uStack_38 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3c4) >> 0x20);
    local_2c = param_3;
    FUN_18001d9f4((longlong *)(lVar1 + 0x4ab8),local_res10,&local_98);
    goto LAB_18001d514;
  }
  uVar6 = *(uint *)(param_1 + 0x328);
  if (uVar6 == 0) {
LAB_18001d4ad:
    plVar8 = (longlong *)(param_1 + 0x318);
    FUN_18001d790(plVar8,local_res10,(undefined8 *)(param_1 + 0x368));
    pfVar5 = FUN_18001e730(plVar8,(float *)&local_98,param_1 + 0x368);
    FUN_18001d6a0((longlong *)(param_1 + 0x330),local_res10,(undefined8 *)pfVar5);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 800);
    uVar11 = 0;
    uVar10 = uVar6;
    do {
      uVar4 = uVar10 + uVar11 >> 1;
      uVar7 = (ulonglong)uVar4;
      uVar3 = *(ulonglong *)(lVar1 + uVar7 * 0x78);
      if (uVar3 <= uVar9) {
        if (uVar9 <= uVar3) break;
        uVar11 = uVar4 + 1;
        uVar7 = (ulonglong)uVar11;
        uVar4 = uVar10;
      }
      uVar10 = uVar4;
    } while (uVar10 != uVar11);
    if ((((uint)uVar7 == uVar6) || (*(ulonglong *)(uVar7 * 0x78 + lVar1) != uVar9)) ||
       (lVar1 + 0xc + uVar7 * 0x78 == 0)) goto LAB_18001d4ad;
  }
  if (*(uint *)(param_1 + 0x360) != 0) {
    uVar9 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0x358) + uVar9 * 4) == param_2) {
        if ((int)uVar9 != -1) {
          if (param_3 == '\0') {
            FUN_18001bc98(param_1,param_2);
          }
          goto LAB_18001d514;
        }
        break;
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x360));
  }
  if (param_3 != '\0') {
    FUN_18001bbd0(param_1,param_2);
  }
LAB_18001d514:
  FUN_1800fa7bc();
  return;
}

