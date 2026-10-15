/*
 * FUN_180090fbc at 180090fbc
 * undefined8 __fastcall FUN_180090fbc(longlong param_1)
 * Address ranges: 180090fbc-180091432
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180090fbc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined7 uVar7;
  undefined8 *puVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 local_a8;
  int local_a4;
  int local_9c;
  longlong local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong uVar5;
  
  cVar2 = '\x01';
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    uVar5 = (ulonglong)*(uint *)(&DAT_1800ff000 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
    if (*(uint *)(*(longlong *)(param_1 + 0x110) + 0x1cf04) <=
        *(uint *)(&DAT_1800ff000 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4)) goto LAB_180091100;
LAB_180091003:
    uVar7 = (undefined7)(uVar5 >> 8);
    uVar11 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x2c) - 0x15;
    uVar5 = (ulonglong)uVar3;
    if (10 < uVar3) goto LAB_180091003;
LAB_180091100:
    uVar5 = *(ulonglong *)(param_1 + 0x50);
    if ((((*(int *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 + 0x6cc + uVar5) == 0xa000) ||
         (*(float *)(param_1 + 0x240) != 1.0)) || (*(float *)(param_1 + 0x244) != 1.0)) ||
       (*(int *)(param_1 + 0x178) != 1)) goto LAB_180091003;
    uVar11 = 1;
    uVar7 = (undefined7)(uVar5 >> 8);
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x24a) = cVar2;
  if (cVar2 != '\0') {
    iVar10 = 0;
    lVar15 = 0x38;
    lVar9 = 0x38;
    if (*(int *)(param_1 + 0x38) == 0) {
      lVar9 = 0x30;
    }
    FUN_18008e2ec((longlong *)(param_1 + 0x118),*(uint *)(lVar9 + param_1),*(uint *)(param_1 + 0x34)
                 );
    uVar3 = 0x38;
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar3 = 0x30;
    }
    FUN_18008e2ec((longlong *)(param_1 + 0x200),*(uint *)((ulonglong)uVar3 + param_1),
                  *(uint *)(param_1 + 0x34));
    uStack_80 = *(uint *)(param_1 + 0x20);
    lVar9 = *(longlong *)(param_1 + 0x50);
    lVar14 = (ulonglong)uStack_80 * 0x18c0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_78 = lVar9 + 0x6b0 + lVar14;
    uStack_70 = 0;
    local_88 = lVar9;
    if (*(int *)(param_1 + 0x44) - 3U < 3) {
      uVar3 = *(uint *)(param_1 + 0x2c);
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x110) + 0x1cf04);
      if (*(uint *)(&DAT_1800ff000 + (ulonglong)uVar3 * 4) < uVar8) {
        if (uVar8 == 0x10) {
          uVar3 = 0x22;
        }
        else if (uVar8 == 0x18) {
          uVar3 = 0x23;
        }
        else if (uVar8 == 0x20) {
          uVar3 = 0x26;
        }
      }
      puVar6 = FUN_1800ac1a8((undefined8 *)&local_a8,uVar3);
      uVar3 = 0x48;
      iVar12 = *(int *)((longlong)puVar6 + 4);
      if (*(int *)(lVar9 + 0x6cc + lVar14) == 0xa000) {
        uVar3 = 0x40;
        iVar4 = iVar10;
        if (*(int *)(param_1 + 0x178) == 1) {
          uVar3 = 0x48;
          iVar4 = *(int *)((longlong)puVar6 + 4);
        }
        iVar12 = iVar10;
        if (*(int *)(param_1 + 0x34) == 1) {
          iVar12 = iVar4;
        }
      }
      cVar2 = FUN_18008dfa8(&local_88,*(undefined4 *)(param_1 + 0x170),
                            *(undefined4 *)(param_1 + 0x174),*(uint *)(param_1 + 0x30),
                            *(uint *)(param_1 + 0x34),*(uint *)(param_1 + 0x178),
                            *(undefined4 *)puVar6,iVar12,0,*(int *)(puVar6 + 2),0,uVar3,0,
                            -(uint)(*(uint *)(param_1 + 0x34) != 1) & 4,0,'\0','\x01');
      uVar7 = extraout_var;
      if (cVar2 == '\0') goto LAB_18009141c;
      plVar1 = (longlong *)(param_1 + 0x60);
      FUN_180090cc8(param_1,(longlong)plVar1,(longlong)&local_88);
      FUN_18008e2ec(plVar1,1,1);
      *plVar1 = local_88;
      *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_7c,uStack_80);
      *(longlong *)(param_1 + 0x70) = local_78;
      *(undefined8 *)(param_1 + 0x78) = uStack_70;
      *(undefined8 *)(param_1 + 0x80) = local_68;
      *(undefined8 *)(param_1 + 0x88) = uStack_60;
      *(undefined8 *)(param_1 + 0x90) = local_58;
      *(undefined8 *)(param_1 + 0x98) = uStack_50;
      uVar7 = extraout_var_00;
    }
    else {
      FUN_1800ac794(param_1,(undefined8 *)&local_a8);
      if (*(char *)(param_1 + 0x248) != '\0') {
        bVar16 = *(int *)(param_1 + 0x2c) != 0x15;
        lVar13 = 0x48;
        if (bVar16) {
          lVar13 = 0x38;
        }
        local_a8 = *(undefined4 *)(lVar13 + *(longlong *)(param_1 + 8));
        lVar13 = 0x4c;
        if (bVar16) {
          lVar13 = 0x3c;
        }
        local_a4 = *(int *)(lVar13 + *(longlong *)(param_1 + 8));
        lVar13 = 0x50;
        if (bVar16) {
          lVar13 = 0x40;
        }
        local_9c = *(int *)(lVar13 + *(longlong *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        lVar15 = 0x30;
      }
      uVar3 = *(uint *)(lVar15 + param_1);
      if ((1 < uVar3) || (uVar8 = *(uint *)(param_1 + 0x34), 1 < uVar8)) {
        uVar8 = *(uint *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x178) = 1;
      }
      iVar12 = local_a4;
      if ((*(int *)(lVar9 + 0x6cc + lVar14) == 0xa000) &&
         (uVar8 = *(uint *)(param_1 + 0x34), iVar12 = iVar10, uVar8 == 1)) {
        uVar8 = 1;
        iVar12 = local_a4;
      }
      cVar2 = FUN_18008dfa8(&local_88,*(undefined4 *)(param_1 + 0x170),
                            *(undefined4 *)(param_1 + 0x174),uVar3,uVar8,*(uint *)(param_1 + 0x178),
                            local_a8,iVar12,local_9c,0,0,0x28,0,-(uint)(uVar8 != 1) & 4,0,'\0','\0')
      ;
      uVar7 = extraout_var_01;
      if (cVar2 == '\0') goto LAB_18009141c;
      plVar1 = (longlong *)(param_1 + 0x60);
      FUN_180090cc8(param_1,(longlong)plVar1,(longlong)&local_88);
      if (*(int *)(param_1 + 0x2c) == 0) {
        *(longlong *)(param_1 + 0x180) = *plVar1;
        *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x98);
        uVar7 = extraout_var_02;
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          FUN_180091434(param_1);
          uVar7 = extraout_var_03;
        }
      }
      else {
        FUN_18008e2ec(plVar1,*(uint *)(param_1 + 0x3c),*(uint *)(param_1 + 0x34));
        uVar7 = extraout_var_04;
      }
      *plVar1 = local_88;
      *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_7c,uStack_80);
      *(uint *)(param_1 + 0x3c) = uVar3;
      *(longlong *)(param_1 + 0x70) = local_78;
      *(undefined8 *)(param_1 + 0x78) = uStack_70;
      *(undefined8 *)(param_1 + 0x80) = local_68;
      *(undefined8 *)(param_1 + 0x88) = uStack_60;
      *(undefined8 *)(param_1 + 0x90) = local_58;
      *(undefined8 *)(param_1 + 0x98) = uStack_50;
    }
    uVar11 = 1;
  }
LAB_18009141c:
  return CONCAT71(uVar7,uVar11);
}

