/*
 * FUN_1800821c0 at 1800821c0
 * undefined __fastcall FUN_1800821c0(longlong * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 1800821c0-180083e05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800821c0(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte local_res20;
  uint uVar17;
  undefined4 in_stack_fffffffffffffecc;
  undefined4 uVar18;
  undefined8 in_stack_fffffffffffffed8;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_stack_fffffffffffffee8;
  undefined8 uVar21;
  undefined8 in_stack_fffffffffffffef0;
  undefined4 uVar23;
  undefined8 uVar22;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar25;
  undefined8 uVar24;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar27;
  undefined8 uVar26;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar29;
  undefined8 uVar28;
  undefined4 uVar30;
  undefined8 uVar31;
  byte local_b8;
  uint local_b4;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_9c;
  uint local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_7c;
  uint local_74;
  
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  uVar16 = 0;
  if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x100000) == 0) ||
     (bVar3 = true, *(char *)(param_3 + 0x1ca) == '\0')) {
    bVar3 = false;
  }
  puVar14 = (uint *)(param_3 + 0x20);
  local_98 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
  uVar9 = 0;
  FUN_180081d74(param_1,param_2,param_3);
  FUN_18007e5fc(param_1,param_3,param_2,0x36,2,8,*(uint *)(param_3 + 0x184));
  local_res20 = 0;
  bVar5 = 0;
  if (*(char *)(param_3 + 0x1ca) == '\0') {
    if (*(char *)(param_3 + 0x74) == '\0') {
      FUN_18007e5fc(param_1,param_3,param_2,0x2032,2,7,*(uint *)(param_3 + 0xd0));
    }
    else {
      uVar17 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
      FUN_1800edbe0(puVar14,param_2,0x2032,(ulonglong)uVar17);
      FUN_18007e5fc(param_1,param_3,param_2,0x36,2,7,uVar17);
      FUN_1800ec960((longlong)puVar14,uVar17);
    }
  }
  else {
    uVar30 = *(undefined4 *)(param_3 + 0x180);
    uVar31 = 0;
    uVar28 = CONCAT44(uVar29,0xa4);
    uVar26 = CONCAT44(uVar27,*(undefined4 *)(param_3 + 0x17c));
    uVar24 = CONCAT44(uVar25,*(undefined4 *)(param_3 + 0x178));
    uVar22 = CONCAT44(uVar23,0xa4);
    uVar21 = CONCAT44(uVar18,*(undefined4 *)(param_3 + 0x174));
    uVar18 = *(undefined4 *)(param_3 + 0xd0);
    uVar20 = 0xa0;
    uVar19 = CONCAT44(uVar8,0xa4);
    FUN_1800edbe0(puVar14,param_2,0x32,(ulonglong)local_98);
    local_74 = 7;
    uVar9 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28);
    if ((uVar9 & 0xe00000) == 0) {
      local_74 = 7;
      do {
        cVar2 = (char)local_74;
        local_74 = local_74 - 1;
      } while ((uVar9 >> ((cVar2 + -1) * '\x03' & 0x1fU) & 7) == 0);
    }
    puVar14 = (uint *)(param_3 + 0x20);
    if (((*(byte *)(param_3 + 0x1ac) & 4) != 0) && (*(int *)(param_3 + 0x1a0) == 0)) {
      uVar8 = (**(code **)*param_1)
                        (param_1,param_2,param_3,3,0xf,uVar18,uVar19,uVar20,uVar21,uVar22,uVar24,
                         uVar26,uVar28,uVar30,uVar31);
      *(undefined4 *)(param_3 + 0x1a0) = uVar8;
    }
    local_88 = 0;
    do {
      bVar7 = (char)local_88 * '\x03';
      if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28) >> (bVar7 & 0x1f) & 7) != 0) {
        local_b4 = FUN_1800ec8c0((longlong)puVar14,1,'\x01');
        FUN_1800edbe0(puVar14,param_2,0x36,(ulonglong)local_b4);
        local_b4 = local_b4 | 0x10000000;
        uVar9 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x24) >> (bVar7 & 0x1f) & 7;
        puVar12 = puVar14;
        if (uVar9 == 3) {
          local_a4 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
          uVar15 = (ulonglong)local_a4;
          uVar17 = 7;
          FUN_1800edbe0(puVar14,param_2,0x36,uVar15);
LAB_1800829a6:
          local_8c = 0;
          local_90 = 0;
        }
        else {
          local_a4 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
          uVar15 = (ulonglong)local_a4;
          uVar17 = 7;
          FUN_1800edbe0(puVar14,param_2,0,uVar15);
          if (uVar9 == 4) goto LAB_1800829a6;
          local_90 = FUN_1800ec8c0((longlong)puVar14,1,'\x01');
          FUN_1800edbe0(puVar14,param_2,0x10,(ulonglong)local_90);
          FUN_1800edbe0(puVar14,param_2,0x4b,(ulonglong)local_90);
          uVar17 = FUN_1800ec8c0((longlong)puVar14,3,'\0');
          FUN_1800edbe0(puVar14,param_2,0x32,(ulonglong)uVar17);
          FUN_1800edbe0(puVar14,param_2,0x38,(ulonglong)uVar17);
          local_8c = FUN_1800ec8c0((longlong)puVar14,1,'\x01');
          FUN_1800edbe0(puVar14,param_2,0x10,(ulonglong)local_8c);
          if (*puVar14 == 0x10040) {
            FUN_1800edbe0(puVar14,param_2,0xe,(ulonglong)local_8c);
          }
          else {
            FUN_1800edbe0(puVar14,param_2,0x81,(ulonglong)local_8c);
          }
          FUN_1800edbe0(puVar14,param_2,0x33,(ulonglong)local_8c);
          uVar15 = (ulonglong)local_8c;
          uVar17 = 1;
          puVar12 = puVar14;
          FUN_1800edbe0(puVar14,param_2,0x34,uVar15);
          if (local_90 != 0) {
            if (((int)uVar16 == 0) &&
               ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x100000) != 0)) {
              uVar17 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
              uVar16 = (ulonglong)uVar17;
              FUN_1800edbe0(puVar14,param_2,0x57,(ulonglong)uVar17);
            }
            uVar17 = FUN_1800ec8c0((longlong)puVar14,1,'\0');
            FUN_1800edbe0(puVar14,param_2,0x1d,(ulonglong)uVar17);
            uVar17 = uVar17 | 0x10000000;
            uVar15 = 0xffffffff;
            puVar12 = puVar14;
            FUN_1800edbe0(puVar14,param_2,0x4001f,0xffffffff);
          }
        }
        bVar7 = *(byte *)(param_3 + 0x1c0) & 4;
        if (bVar7 == 0) {
          local_ac = 0;
LAB_180082a6b:
          FUN_18007eb88(puVar12,param_2,param_3,local_a4,CONCAT44(in_stack_fffffffffffffecc,uVar17),
                        local_a4,local_90);
        }
        else {
          bVar4 = true;
          puVar12 = puVar14;
          local_ac = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
          uVar17 = local_ac;
          FUN_180083e08(puVar12,param_3,param_2,uVar15,local_ac);
          if ((uVar9 != 2) && ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x100000) == 0))
          {
            puVar12 = puVar14;
            FUN_1800ec960((longlong)puVar14,local_a4);
            local_a4 = 0;
            bVar4 = false;
          }
          FUN_18007eb88(puVar12,param_2,param_3,local_ac,CONCAT44(in_stack_fffffffffffffecc,uVar17),
                        0,0);
          if (bVar4) goto LAB_180082a6b;
        }
        FUN_1800ec960((longlong)puVar14,local_90);
        local_9c = 0;
        if (uVar9 == 2) {
          local_9c = FUN_1800ec8c0((longlong)puVar14,1,'\x01');
          uVar9 = FUN_1800ec8c0((longlong)puVar14,1,'\x01');
          FUN_1800edbe0(puVar14,param_2,0x10,(ulonglong)local_9c);
          FUN_1800edbe0(puVar14,param_2,0x1d,(ulonglong)uVar9);
          FUN_1800edbe0(puVar14,param_2,0,(ulonglong)local_9c);
          FUN_1800edbe0(puVar14,param_2,0x200e,(ulonglong)local_9c);
          FUN_180082054((ulonglong)local_b4,param_2,param_3);
          FUN_1800edbe0(puVar14,param_2,0x37,(ulonglong)local_9c);
          FUN_1800ec960((longlong)puVar14,uVar9);
        }
        uVar17 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x800000;
        uVar9 = FUN_1800ec8c0((longlong)puVar14,1,'\x01');
        FUN_1800edbe0(puVar14,param_2,(-(uint)(uVar17 != 0) & 0x2000) + 0x10,(ulonglong)uVar9);
        if (uVar17 == 0) {
          FUN_1800edbe0(puVar14,param_2,0x34,(ulonglong)uVar9);
        }
        uVar17 = 0;
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x100000) == 0) {
          FUN_1800ec960((longlong)puVar14,local_a4);
          local_a4 = uVar17;
        }
        FUN_1800ec960((longlong)puVar14,local_ac);
        uVar17 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
        FUN_1800edbe0(puVar14,param_2,0x38,(ulonglong)uVar17);
        FUN_1800ec960((longlong)puVar14,uVar9);
        FUN_1800edbe0(puVar14,param_2,0x38,(ulonglong)uVar17);
        if (local_9c != 0) {
          FUN_1800edbe0(puVar14,param_2,0x38,(ulonglong)uVar17);
        }
        FUN_1800edbe0(puVar14,param_2,0x32,(ulonglong)uVar17);
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x100000) == 0) {
          FUN_1800ec960((longlong)puVar14,local_b4);
          local_b4 = 0;
        }
        uVar9 = 0;
        bVar4 = false;
        if ((local_88 == local_74) && (local_90 == 0)) {
          uVar9 = 0x2000;
          local_b8 = 2;
          bVar4 = true;
          local_7c = 0x2038;
          uVar13 = 0x2032;
        }
        else {
          local_b8 = 0;
          local_7c = 0x38;
          uVar13 = 0x32;
        }
        if (local_8c == 0) {
          if ((bVar4) && (*(char *)(param_3 + 0x74) == '\0')) {
            FUN_18007e5fc(param_1,param_3,param_2,0x2000,2,7,uVar17);
            goto LAB_180083196;
          }
          bVar5 = bVar5 | bVar4;
          FUN_1800edbe0(puVar14,param_2,uVar9,(ulonglong)local_98);
        }
        else if ((bVar4) && (*(char *)(param_3 + 0x74) == '\0')) {
          FUN_18007e5fc(param_1,param_3,param_2,0x2032,2,7,local_8c);
LAB_180083196:
          FUN_1800ec960((longlong)puVar14,local_98);
          local_98 = 0;
        }
        else {
          bVar5 = bVar5 | bVar4;
          FUN_1800edbe0(puVar14,param_2,uVar13,(ulonglong)local_98);
        }
        FUN_1800ec960((longlong)puVar14,uVar17);
        if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x100000) != 0) {
          uVar17 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
          FUN_1800edbe0(puVar14,param_2,0x36,(ulonglong)uVar17);
          FUN_1800edbe0(puVar14,param_2,0x36,(ulonglong)uVar17);
          FUN_1800edbe0(puVar14,param_2,0x36,(ulonglong)uVar17);
          if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x20000000) == 0) {
            uVar10 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
            FUN_1800edbe0(puVar14,param_2,0x36,(ulonglong)uVar10);
            FUN_1800edbe0(puVar14,param_2,0x36,(ulonglong)uVar10);
            FUN_1800edbe0(puVar14,param_2,0x36,(ulonglong)uVar10);
            FUN_1800edbe0(puVar14,param_2,0,(ulonglong)uVar10);
          }
          else {
            uVar10 = *(uint *)(param_3 + 0x15c);
          }
          uVar8 = 7;
          puVar12 = puVar14;
          FUN_1800edbe0(puVar14,param_2,0,(ulonglong)uVar17);
          FUN_18007eb88(puVar12,param_2,param_3,uVar17,CONCAT44(in_stack_fffffffffffffecc,uVar8),0,0
                       );
          if (uVar10 != *(uint *)(param_3 + 0x15c)) {
            FUN_1800ec960((longlong)puVar14,uVar10);
          }
          uVar15 = (ulonglong)uVar17;
          uVar8 = 7;
          FUN_1800edbe0(puVar14,param_2,0,uVar15);
          puVar12 = puVar14;
          FUN_1800ec960((longlong)puVar14,local_a4);
          local_a4 = 0;
          if (bVar7 == 0) {
            FUN_18007eb88(puVar12,param_2,param_3,uVar17,CONCAT44(in_stack_fffffffffffffecc,uVar8),0
                          ,0);
          }
          else {
            puVar12 = puVar14;
            uVar11 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
            uVar10 = uVar11;
            FUN_180083e08(puVar12,param_3,param_2,uVar15,uVar11);
            FUN_18007eb88(puVar12,param_2,param_3,uVar11,CONCAT44(in_stack_fffffffffffffecc,uVar10),
                          uVar17,0);
            FUN_1800ec960((longlong)puVar14,uVar11);
          }
          FUN_1800ec960((longlong)puVar14,uVar17);
          if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x800000) == 0) &&
             ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x28) & 0x40000000) == 0)) {
            bVar6 = false;
            local_a8 = 0x10;
          }
          else {
            bVar6 = true;
            local_a8 = 0x2010;
          }
          uVar17 = FUN_1800ec8c0((longlong)puVar14,1,'\x01');
          FUN_1800edbe0(puVar14,param_2,local_a8,(ulonglong)uVar17);
          puVar12 = (uint *)0x0;
          if (!bVar6) {
            puVar12 = puVar14;
            FUN_1800edbe0(puVar14,param_2,0x34,(ulonglong)uVar17);
          }
          FUN_180082054(puVar12,param_2,param_3);
          FUN_1800ec960((longlong)puVar14,uVar17);
          uVar17 = FUN_1800ec8c0((longlong)puVar14,3,'\x01');
          FUN_1800edbe0(puVar14,param_2,0x38,(ulonglong)uVar17);
          FUN_1800edbe0(puVar14,param_2,0x38,(ulonglong)uVar17);
          FUN_1800ec960((longlong)puVar14,local_b4);
          local_b4 = 0;
          if (local_9c != 0) {
            FUN_1800edbe0(puVar14,param_2,0x38,(ulonglong)uVar17);
            FUN_1800ec960((longlong)puVar14,local_9c);
            local_9c = 0;
          }
          uVar10 = (uint)uVar16;
          if (local_8c == 0) {
            if (uVar10 == 0) {
              uVar16 = (ulonglong)uVar17;
              goto LAB_180083964;
            }
            if ((bVar4) && (*(char *)(param_3 + 0x74) == '\0')) {
              FUN_18007e5fc(param_1,param_3,param_2,0x2000,3,7,uVar17);
LAB_180083866:
              FUN_1800ec960((longlong)puVar14,uVar10);
              uVar16 = 0;
            }
            else {
              local_res20 = local_res20 | local_b8;
              FUN_1800edbe0(puVar14,param_2,uVar9,uVar16);
            }
          }
          else if ((bVar4) && (*(char *)(param_3 + 0x74) == '\0')) {
            if (uVar10 != 0) {
              FUN_18007e5fc(param_1,param_3,param_2,0x2032,3,7,local_8c);
              goto LAB_180083866;
            }
            FUN_18007e5fc(param_1,param_3,param_2,0x2038,3,7,local_8c);
          }
          else {
            local_res20 = local_res20 | local_b8;
            if (uVar10 == 0) {
              FUN_1800edbe0(puVar14,param_2,local_7c,(ulonglong)uVar17);
              uVar16 = (ulonglong)uVar17;
              goto LAB_180083964;
            }
            FUN_1800edbe0(puVar14,param_2,uVar13,uVar16);
          }
          if ((uint)uVar16 != uVar17) {
            FUN_1800ec960((longlong)puVar14,uVar17);
          }
        }
LAB_180083964:
        FUN_1800ec960((longlong)puVar14,local_8c);
        FUN_1800ec960((longlong)puVar14,local_a4);
        FUN_1800ec960((longlong)puVar14,local_9c);
        FUN_1800ec960((longlong)puVar14,local_b4);
        if (local_90 != 0) {
          FUN_1800edbe0(puVar14,param_2,0x15,0);
        }
      }
      uVar9 = (uint)uVar16;
      local_88 = local_88 + 1;
    } while (local_88 < 8);
    pbVar1 = (byte *)(param_3 + 0x1c0);
    *pbVar1 = *pbVar1 & 0xfb;
    if ((*pbVar1 == 0) && (*(int *)(param_3 + 0x1a0) != 0)) {
      (**(code **)(*param_1 + 8))(param_1);
      *(undefined4 *)(param_3 + 0x1a0) = 0;
    }
    if (local_98 != 0) {
      if (((byte)~bVar5 == 0) || (*(char *)(param_3 + 0x74) == '\0')) {
        uVar17 = (uint)(byte)~bVar5 << 0xd | 0x36;
      }
      else {
        FUN_1800edbe0(puVar14,param_2,0x2036,(ulonglong)local_98);
        uVar17 = 0x36;
      }
      FUN_18007e5fc(param_1,param_3,param_2,uVar17,2,7,local_98);
    }
  }
  puVar14 = (uint *)(param_3 + 0x20);
  if (bVar3) {
    if (uVar9 != 0) {
      uVar17 = ~((uint)local_res20 << 0xc) & 0x2000;
      if ((uVar17 == 0) || (*(char *)(param_3 + 0x74) == '\0')) {
        uVar17 = uVar17 | 0x36;
      }
      else {
        FUN_1800edbe0(puVar14,param_2,0x2036,(ulonglong)uVar9);
        uVar17 = 0x36;
      }
      FUN_18007e5fc(param_1,param_3,param_2,uVar17,3,7,uVar9);
    }
  }
  else {
    FUN_18007e5fc(param_1,param_3,param_2,0x36,3,(-(*(char *)(param_3 + 0x1c8) != '\0') & 8U) + 7,
                  *(uint *)(param_3 + 0xbc));
  }
  FUN_1800ec960((longlong)puVar14,uVar9);
  FUN_1800ec960((longlong)puVar14,local_98);
  return;
}

