/*
 * FUN_180080e74 at 180080e74
 * undefined __fastcall FUN_180080e74(undefined8 * param_1, longlong * param_2, longlong param_3, int param_4, char param_5)
 * Address ranges: 180080e74-180081b88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180080e74(undefined8 *param_1,longlong *param_2,longlong param_3,int param_4,char param_5)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  sbyte sVar9;
  uint *puVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  undefined *puVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined4 in_stack_ffffffffffffff18;
  undefined4 in_stack_ffffffffffffff1c;
  byte local_68;
  
  lVar1 = *(longlong *)(param_3 + 0x1b0);
  uVar11 = (ulonglong)(uint)(param_4 * 3);
  uVar16 = 4;
  uVar7 = *(uint *)(param_3 + 0x194);
  bVar8 = (byte)(param_4 * 3);
  uVar5 = (*(uint *)(lVar1 + 0x1c) & *(uint *)(lVar1 + 8)) >> (bVar8 & 0x1f);
  uVar13 = uVar5 & 7;
  if ((uVar13 != 0) != (bool)*(char *)(param_3 + 0x199)) {
    uVar16 = (uint)*(byte *)(param_3 + 0x198);
  }
  uVar6 = (*(uint *)(lVar1 + 0x20) & *(uint *)(lVar1 + 0xc)) >> (bVar8 & 0x1f) & 7;
  if (uVar6 == 1) {
    if (uVar7 != 0) goto LAB_1800812ce;
    uVar7 = *(uint *)(param_3 + 0x168);
    if (uVar7 == 0) {
      uVar7 = FUN_180080d20(uVar11,param_2,param_3,0);
      *(uint *)(param_3 + 0x168) = uVar7;
    }
  }
  else if (uVar6 == 2) {
    if (uVar7 != 0) goto LAB_1800812ce;
    uVar7 = *(uint *)(param_3 + 0x164);
  }
  else if (uVar6 == 3) {
    if (uVar7 != 0) goto LAB_1800812ce;
    if (*(int *)(param_3 + 0x16c) == 0) {
      if (*(int *)(param_3 + 0x168) == 0) {
        uVar7 = FUN_180080d20(uVar11,param_2,param_3,0);
        *(uint *)(param_3 + 0x168) = uVar7;
      }
      puVar2 = (uint *)(param_3 + 0x20);
      uVar7 = FUN_1800ec8c0((longlong)puVar2,3,'\x01');
      *(uint *)(param_3 + 0x16c) = uVar7;
      uVar7 = FUN_1800ec8c0((longlong)puVar2,1,'\x01');
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x20000000) == 0) {
        FUN_1800edbe0(puVar2,param_2,0,(ulonglong)uVar7);
        FUN_1800edbe0(puVar2,param_2,0x32,(ulonglong)*(uint *)(param_3 + 0x16c));
      }
      else {
        puVar10 = puVar2;
        uVar16 = FUN_1800ec8c0((longlong)puVar2,3,'\x01');
        FUN_18007eb88(puVar10,param_2,param_3,*(uint *)(param_3 + 0x164) | 0x80000000,
                      CONCAT44(in_stack_ffffffffffffff1c,in_stack_ffffffffffffff18),uVar16,0);
        FUN_1800edbe0(puVar2,param_2,0x10,(ulonglong)uVar7);
        FUN_1800edbe0(puVar2,param_2,0,(ulonglong)uVar7);
        FUN_1800edbe0(puVar2,param_2,0x32,(ulonglong)*(uint *)(param_3 + 0x16c));
        FUN_1800ec960((longlong)puVar2,uVar16);
      }
      FUN_1800ec960((longlong)puVar2,uVar7);
    }
    uVar7 = *(uint *)(param_3 + 0x16c);
  }
  else {
    if ((uVar6 != 4) || (uVar7 != 0)) goto LAB_1800812ce;
    if (*(int *)(param_3 + 0x170) == 0) {
      if (*(int *)(param_3 + 0x168) == 0) {
        uVar7 = FUN_180080d20(uVar11,param_2,param_3,0);
        *(uint *)(param_3 + 0x168) = uVar7;
      }
      uVar7 = FUN_1800ec8c0(param_3 + 0x20,3,'\x01');
      *(uint *)(param_3 + 0x170) = uVar7;
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x32,(ulonglong)uVar7);
    }
    uVar7 = *(uint *)(param_3 + 0x170);
  }
  uVar16 = 3;
LAB_1800812ce:
  puVar2 = *(uint **)(param_3 + 0x1b0);
  bVar12 = 0xf;
  if (((puVar2[0x11] & 0x40000000) == 0) &&
     (((puVar2[7] & puVar2[2]) >> ((char)param_4 + 0x18U & 0x1f) & 1) != 0)) {
    bVar4 = true;
    local_68 = 7;
  }
  else {
    bVar4 = false;
    local_68 = 0xf;
  }
  if (uVar7 == 0) {
    uVar6 = (puVar2[5] & puVar2[4] & *puVar2) >> (bVar8 & 0x1f) & 7;
    sVar9 = (sbyte)uVar6;
    if ((*(uint *)(param_3 + 0x1ac) & 8 << sVar9) != 0) {
      uVar16 = (puVar2[6] & puVar2[1]) >> sVar9 * '\x03' & 7;
      uVar7 = (**(code **)*param_1)
                        (param_1,param_2,param_3,uVar6 + 7,0xf >> (4U - (char)uVar16 & 0x1f) & 0xff)
      ;
      *(uint *)(param_3 + 0x19c) = uVar7;
    }
  }
  uVar15 = (undefined1)uVar16;
  if (uVar13 == 0) {
    if (uVar7 != 0) {
      puVar14 = &DAT_180102a44;
      if (bVar4) {
        puVar14 = &DAT_180102a48;
      }
      if (param_5 != '\0') {
        if (uVar16 != 4) {
          uVar7 = *(uint *)(param_3 + 0x194);
          if (((uVar7 & 0x3f00) == 0) && (uVar7 != *(uint *)(param_3 + 0x19c))) {
            FUN_1800ec960(param_3 + 0x20,uVar7);
            *(undefined4 *)(param_3 + 0x194) = 0;
          }
          puVar2 = (uint *)(param_3 + 0x20);
          uVar7 = FUN_1800ec8c0((longlong)puVar2,4,'\x01');
          if (*puVar2 == 0x10040) {
            FUN_1800edbe0(puVar2,param_2,0x36,(ulonglong)uVar7);
            FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x36,(ulonglong)uVar7);
          }
          else {
            FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x37,(ulonglong)uVar7);
          }
          uVar16 = 4;
        }
        if (*(int *)(param_3 + 0x194) == 0) {
          *(uint *)(param_3 + 0x194) = uVar7;
          *(undefined1 *)(param_3 + 0x198) = uVar15;
          *(undefined1 *)(param_3 + 0x199) = 0;
        }
      }
      FUN_18007e5fc(param_1,param_3,param_2,0x36,param_4 + 5,puVar14[uVar16 - 1],uVar7);
      bVar12 = puVar14[uVar16 - 1] ^ 0xf;
    }
  }
  else {
    bVar12 = (&DAT_180102a4c)[uVar13 - 1] & local_68;
    if (uVar7 == 0) {
      uVar7 = param_4 + 5;
      FUN_18007e5fc(param_1,param_3,param_2,0x36,uVar7,1,*(uint *)(param_3 + 0xd0));
      if ((uVar5 & 6) != 0) {
        FUN_18007e5fc(param_1,param_3,param_2,0x36,uVar7,2,*(uint *)(param_3 + 0xd0));
      }
      if (2 < uVar13) {
        FUN_18007e5fc(param_1,param_3,param_2,0x36,uVar7,2,*(uint *)(param_3 + 0xd0));
      }
      if (((uVar5 & 4) != 0) || (bVar4)) {
        FUN_18007e5fc(param_1,param_3,param_2,0x36,uVar7,4,*(uint *)(param_3 + 0xd0));
      }
    }
    else {
      if (((((uVar16 < 2) || (uVar16 < 3)) || (uVar16 < 4)) &&
          (((uVar16 != 1 && (uVar16 != 2)) && (uVar16 == 3)))) || (uVar16 != 4)) {
        uVar7 = *(uint *)(param_3 + 0x194);
        if (((uVar7 & 0x3f00) == 0) && (uVar7 != *(uint *)(param_3 + 0x19c))) {
          FUN_1800ec960(param_3 + 0x20,uVar7);
          *(undefined4 *)(param_3 + 0x194) = 0;
        }
        uVar7 = FUN_1800ec8c0(param_3 + 0x20,4,'\x01');
        FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x32,(ulonglong)uVar7);
      }
      if (*(int *)(param_3 + 0x194) == 0) {
        *(uint *)(param_3 + 0x194) = uVar7;
        *(undefined1 *)(param_3 + 0x198) = uVar15;
        *(undefined1 *)(param_3 + 0x199) = 1;
      }
      FUN_18007e5fc(param_1,param_3,param_2,0x11,param_4 + 5,1,uVar7);
      if ((uVar5 & 6) != 0) {
        FUN_18007e5fc(param_1,param_3,param_2,0x11,param_4 + 5,2,uVar7);
      }
      if (2 < uVar13) {
        FUN_18007e5fc(param_1,param_3,param_2,0x11,param_4 + 5,4,uVar7);
      }
      if (((uVar5 & 4) != 0) || (bVar4)) {
        FUN_18007e5fc(param_1,param_3,param_2,0x11,param_4 + 5,8,uVar7);
      }
    }
  }
  if (bVar12 != 0) {
    if ((((bVar12 == 1) || (bVar12 == 2)) || (bVar12 == 4)) || (bVar12 == 8)) {
      iVar3 = 0;
      if (bVar12 != 0) {
        for (; (bVar12 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      FUN_18007e5fc(param_1,param_3,param_2,0x36,param_4 + 5U,bVar12,*(uint *)(param_3 + 0xb8));
    }
    else {
      FUN_18007e5fc(param_1,param_3,param_2,0x36,param_4 + 5U,bVar12,*(uint *)(param_3 + 0xbc));
    }
  }
  return;
}

