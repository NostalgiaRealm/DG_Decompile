/*
 * FUN_18007c8a8 at 18007c8a8
 * uint * __fastcall FUN_18007c8a8(undefined8 param_1, uint * param_2, longlong param_3, longlong * param_4, undefined1 * param_5)
 * Address ranges: 18007c8a8-18007df2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18007c8a8(undefined8 param_1,uint *param_2,longlong param_3,longlong *param_4,
                    undefined1 *param_5)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint *puVar13;
  uint local_a8;
  undefined1 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  byte bStack_84;
  undefined3 uStack_83;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  byte local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar10 = *param_2;
  puVar5 = param_2 + 1;
  uVar8 = uVar10 & 0xffff;
  if (0x26 < uVar8) {
    if (0x2e < uVar8) {
      if (uVar8 == 0x2f) goto LAB_18007ca10;
      if (uVar8 == 0x30) {
        return param_2 + 6;
      }
      if (uVar8 == 0x4e) {
        if (*(byte *)(*(longlong *)(param_3 + 0x10) + 0x4a6c) < 2) {
          return param_2;
        }
        puVar4 = (uint *)FUN_1800855dc(param_1,puVar5,0xf0000,1,0,param_3,param_4,'\0','\x01');
        puVar5 = (uint *)(param_3 + 0x3d0);
        uVar10 = *(uint *)(param_3 + 0x480) | 0x19;
LAB_18007df16:
        FUN_180088378(param_1,param_3,param_4,uVar10,(uint *)(param_3 + 800),puVar5);
        return puVar4;
      }
      if (uVar8 == 0x5e) {
        puVar5 = (uint *)FUN_18007be04(param_1,puVar5,0xf0000,2,0,param_3,param_4,'\0','\0');
        FUN_18007c794(param_1,uVar10,param_3,param_4,'\x01');
        return puVar5;
      }
      if (uVar8 != 0x5f) {
        if (uVar8 != 0x60) {
          return param_2;
        }
        uVar10 = 3;
        local_58 = *(uint *)(param_3 + 0x2c4) | 0x10000000;
        local_54 = (byte)(*puVar5 >> 0x10) & 3;
        if ((*puVar5 & 0xf000000) != 0xd000000) {
          uVar10 = 0x40003;
        }
        local_48 = 0xffffffffffffffff;
        uStack_40 = 0xffffffffffffffff;
        FUN_1800edd10((uint *)(param_3 + 0x20),param_4,uVar10,param_3 + 0x460);
        goto LAB_18007dca2;
      }
      uVar10 = param_2[3];
      uVar8 = uVar10 & 0x7ff;
      iVar9 = 2;
      uVar11 = 0;
      puVar5 = (uint *)FUN_18007be04((ulonglong)(uVar10 >> 0x10),puVar5,0xf0000,2,0,param_3,param_4,
                                     '\0','\0');
      iVar7 = (uint)*(byte *)(*(longlong *)(param_3 + 0x10) + 0x4880 + (ulonglong)uVar8) << 0x1b;
      if (iVar7 == 0x10000000) {
        uVar6 = FUN_1800ec830((int *)(param_3 + 0x20),uVar8,0,uVar8);
        uVar11 = (uint)uVar6;
      }
      else {
        if (iVar7 == 0x18000000) {
          uVar11 = uVar8 + 5;
          iVar9 = 1;
          uVar8 = uVar8 + 4;
        }
        else {
          if (iVar7 != 0x20000000) goto LAB_18007dd58;
          uVar11 = uVar8 + 10;
          uVar8 = uVar8 + 8;
        }
        uVar6 = FUN_1800ec830((int *)(param_3 + 0x20),uVar8,iVar9,uVar11);
        uVar11 = (uint)uVar6;
      }
LAB_18007dd58:
      uStack_80 = *(undefined4 *)(param_3 + 0x3d8);
      uStack_7c = *(undefined4 *)(param_3 + 0x3dc);
      local_68 = *(undefined8 *)(param_3 + 0x3f0);
      uStack_60 = *(undefined8 *)(param_3 + 0x3f8);
      local_54 = (byte)(uVar10 >> 0x10);
      local_48 = 0xffffffffffffffff;
      uStack_40 = 0xffffffffffffffff;
      local_88 = *(uint *)(param_3 + 0x3d0) | 0x10000000;
      local_78 = *(undefined8 *)(param_3 + 0x3e0);
      uStack_70 = *(undefined8 *)(param_3 + 1000);
      uStack_83 = (undefined3)((uint)*(undefined4 *)(param_3 + 0x3d4) >> 8);
      _bStack_84 = CONCAT31(uStack_83,*(byte *)(param_3 + 0x3d4) >> 6);
      local_58 = uVar11;
      FUN_1800edd10((uint *)(param_3 + 0x20),param_4,0x48,param_3 + 800);
      return puVar5;
    }
    if (uVar8 == 0x2e) {
      puVar5 = (uint *)FUN_1800855dc(param_1,puVar5,0xf0000,1,0,param_3,param_4,'\0','\0');
      FUN_1800edd10((uint *)(param_3 + 0x20),param_4,0x40,param_3 + 800);
      FUN_1800edd10((uint *)(param_3 + 0x20),param_4,0x1b,param_3 + 800);
      return puVar5;
    }
    if (uVar8 != 0x27) {
      if (uVar8 != 0x28) {
        if (uVar8 == 0x29) {
          puVar5 = FUN_18007c1e8(param_1,puVar5,2,0,param_3,'\0','\0');
          local_58 = FUN_18007c794(param_1,uVar10,param_3,param_4,'\0');
          local_58 = local_58 | 0x10000000;
          local_54 = 0;
          local_48 = 0xffffffffffffffff;
          uStack_40 = 0xffffffffffffffff;
          FUN_1800edd10((uint *)(param_3 + 0x20),param_4,0x4001f,param_3 + 0x460);
          cVar2 = *(char *)((ulonglong)*(byte *)(param_3 + 0x314) + 0x2f4 + param_3);
          bVar3 = *(byte *)(param_3 + 0x314) + 1;
          *(byte *)(param_3 + 0x314) = bVar3;
          *(byte *)((ulonglong)bVar3 + 0x2f4 + param_3) = (cVar2 != '\x02') - 1U & 2;
          return puVar5;
        }
        if (uVar8 == 0x2a) {
          uVar6 = (ulonglong)*(byte *)(param_3 + 0x314);
          cVar2 = *(char *)(uVar6 + 0x2f4 + param_3);
          if (cVar2 != '\0') {
            if (*(char *)(uVar6 + 0x2f3 + param_3) != '\x02') {
              cVar2 = (cVar2 == '\x01') + '\x01';
            }
            *(char *)(uVar6 + 0x2f4 + param_3) = cVar2;
            *(bool *)(param_4 + 3) = cVar2 != '\x02';
            return puVar5;
          }
          uVar10 = 0x12;
        }
        else {
          if (uVar8 == 0x2b) {
            if (*(char *)((ulonglong)*(byte *)(param_3 + 0x314) + 0x2f4 + param_3) == '\0') {
              FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,0x15,0);
            }
            *(char *)(param_3 + 0x314) = *(char *)(param_3 + 0x314) + -1;
            *(bool *)(param_4 + 3) =
                 *(char *)((ulonglong)*(byte *)(param_3 + 0x314) + 0x2f4 + param_3) != '\x02';
            return puVar5;
          }
          if (uVar8 != 0x2c) {
            if (uVar8 != 0x2d) {
              return param_2;
            }
            puVar5 = FUN_18007c1e8(param_1,puVar5,2,0,param_3,'\0','\0');
            local_58 = FUN_18007c794(param_1,uVar10,param_3,param_4,'\0');
            local_58 = local_58 | 0x10000000;
            local_54 = 0;
            local_48 = 0xffffffffffffffff;
            uStack_40 = 0xffffffffffffffff;
            FUN_1800edd10((uint *)(param_3 + 0x20),param_4,0x40003,param_3 + 0x460);
            return puVar5;
          }
          uVar10 = 2;
        }
        goto LAB_18007d7bc;
      }
      uVar10 = *puVar5;
      cVar2 = *(char *)((ulonglong)*(byte *)(param_3 + 0x314) + 0x2f4 + param_3);
      uVar8 = (uVar10 >> 0x14 & 0x700 | uVar10 & 0x1800) >> 8;
      if (uVar8 == 0xe) {
        if ((*(char *)(param_3 + 0xdc) == '\0') ||
           (*(char *)(*(longlong *)(param_3 + 0x10) + 0x49d8 + (ulonglong)(uVar10 & 0x7ff)) == '\0')
           ) {
          uVar8 = 0x1f;
          if ((uVar10 & 0xf000000) != 0xd000000) {
            uVar8 = 0x4001f;
          }
          FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,uVar8,0xffffffff);
          *(char *)(param_3 + 0x314) = *(char *)(param_3 + 0x314) + '\x01';
          *(char *)((ulonglong)*(byte *)(param_3 + 0x314) + 0x2f4 + param_3) = cVar2;
        }
        else {
          if (cVar2 != '\x02') {
            cVar2 = '\x02' - (*(int *)(*(longlong *)(param_3 + 0x10) + 0x49e8 +
                                      (ulonglong)(uVar10 & 0x7ff) * 4) != 0);
          }
          bVar3 = *(byte *)(param_3 + 0x314) + 1;
          *(byte *)(param_3 + 0x314) = bVar3;
          *(char *)((ulonglong)bVar3 + 0x2f4 + param_3) = cVar2;
          *(bool *)(param_4 + 3) = cVar2 != '\x02';
        }
      }
      else if (uVar8 == 0x13) {
        uVar8 = 0x1f;
        if ((uVar10 & 0xf000000) != 0xd000000) {
          uVar8 = 0x4001f;
        }
        FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,uVar8,0xffffffff);
        *(char *)(param_3 + 0x314) = *(char *)(param_3 + 0x314) + '\x01';
        *(byte *)((ulonglong)*(byte *)(param_3 + 0x314) + 0x2f4 + param_3) =
             (cVar2 != '\x02') - 1U & 2;
      }
      goto LAB_18007dca2;
    }
LAB_18007dac2:
    if (4 < *(uint *)(param_3 + 0x2ec)) {
      return puVar5;
    }
    uVar10 = *(uint *)(param_3 + 0x2ec) - 1;
    *(uint *)(param_3 + 0x2ec) = uVar10;
    uVar10 = *(uint *)(param_3 + 0x2b4 + (ulonglong)uVar10 * 4);
    FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,0x1e,(ulonglong)uVar10);
    if (uVar8 == 0x1d) {
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,0x1e,(ulonglong)uVar10);
    }
    uVar10 = 0x16;
LAB_18007d7bc:
    FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,uVar10,0);
    return puVar5;
  }
  if (uVar8 == 0x26) {
LAB_18007d4de:
    uVar10 = *(uint *)(param_3 + 0x2ec);
    if (3 < uVar10) {
      return param_2;
    }
    uVar11 = *(uint *)(param_3 + 0x2b4 + (ulonglong)uVar10 * 4);
    *(uint *)(param_3 + 0x2ec) = uVar10 + 1;
    if (uVar8 == 0x1b) {
      uVar8 = param_2[2];
      *(uint *)(param_3 + 0x2f0) = uVar10 + 1;
      param_2 = puVar5;
    }
    else {
      uVar8 = *puVar5;
    }
    if ((*(char *)(param_3 + 0xdc) == '\0') ||
       (*(char *)(*(longlong *)(param_3 + 0x10) + 0x48c5 + (ulonglong)(uVar8 & 0x7ff)) == '\0')) {
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,0x25,(ulonglong)uVar11);
    }
    else {
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,0x36,(ulonglong)uVar11);
    }
    FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,0x24,(ulonglong)uVar11);
    FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,0x30,0);
    uVar10 = 3;
  }
  else {
    if (0x1f < uVar8) {
      if (uVar8 == 0x20) {
        puVar4 = (uint *)FUN_1800855dc(param_1,puVar5,0xf0000,2,0,param_3,param_4,'\0','\x01');
        puVar5 = (uint *)(param_3 + 0x20);
        local_a8 = FUN_1800ec8c0((longlong)puVar5,4,'\0');
        local_58 = *(uint *)(param_3 + 0xb8);
        uStack_40 = 0xffffffffffffffff;
        local_48 = 0xffffffff00000000;
        local_a4 = 1;
        local_98 = 0xffffffffffffffff;
        uStack_90 = 0xffffffffffffffff;
        local_54 = 0;
        FUN_1800edd10(puVar5,param_4,0x2f,&local_a8);
        FUN_1800edd10(puVar5,param_4,0x38,&local_a8);
        FUN_1800edd10(puVar5,param_4,0x39,0x102);
        FUN_1800edd10(puVar5,param_4,0x37,&local_a8);
        puVar5 = (uint *)(param_3 + 800);
        uVar10 = *(uint *)(param_3 + 0x480) | 0x19;
        puVar13 = (uint *)&DAT_00000100;
      }
      else {
        if (uVar8 == 0x21) {
          puVar5 = (uint *)FUN_1800855dc(param_1,puVar5,0xf0000,2,0,param_3,param_4,'\0','\0');
          local_a8 = FUN_1800ec8c0(param_3 + 0x20,4,'\0');
          local_98 = 0xffffffffffffffff;
          uStack_90 = 0xffffffffffffffff;
          local_a4 = 7;
          FUN_1800edd10((uint *)(param_3 + 0x20),param_4,0x38,&local_a8);
          bVar3 = *(byte *)(param_3 + 0x3d4);
          local_a8 = local_a8 | 0x80000000;
          FUN_180088378(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x32,
                        (uint *)(param_3 + 800),
                        (uint *)((ulonglong)(byte)((bVar3 & 3 | bVar3 << 2) << 4) |
                                 (ulonglong)(bVar3 >> 2 & 0xf) | 0x100));
          return puVar5;
        }
        if (uVar8 == 0x22) {
          puVar4 = (uint *)FUN_1800855dc(param_1,puVar5,0xf0000,3,0,param_3,param_4,'\0','\x01');
          puVar5 = (uint *)(param_3 + 0x20);
          local_a8 = FUN_1800ec8c0((longlong)puVar5,4,'\x01');
          local_88 = *(undefined4 *)(param_3 + 0xbc);
          local_98 = 0xffffffffffffffff;
          uStack_90 = 0xffffffffffffffff;
          local_a4 = 0xf;
          _bStack_84 = CONCAT31(uStack_83,0xe4);
          local_78 = 0;
          uStack_70 = 0;
          FUN_1800edd10(puVar5,param_4,0x31,&local_a8);
          local_a8 = local_a8 | 0x80000000;
          if (*(int *)(param_3 + 0x480) == 0) {
            local_58 = FUN_1800ec8c0((longlong)puVar5,4,'\0');
            local_54 = 0xf;
            local_48 = 0xffffffffffffffff;
            uStack_40 = 0xffffffffffffffff;
            FUN_1800edd10(puVar5,param_4,0x31,&local_58);
            FUN_1800edd10(puVar5,param_4,0x1e,&local_58);
          }
          FUN_1800edd10(puVar5,param_4,0x2b,param_3 + 800);
          FUN_1800ec960((longlong)puVar5,local_a8);
          return puVar4;
        }
        if (uVar8 == 0x23) {
          *(undefined4 *)(param_3 + 0x484) = 0;
          puVar5 = (uint *)FUN_1800855dc(param_1,puVar5,0xf0000,1,0,param_3,param_4,'\0','\x01');
          FUN_180085630(param_1,param_3,param_4);
          return puVar5;
        }
        if (uVar8 == 0x24) {
          puVar4 = (uint *)FUN_1800855dc(param_1,puVar5,0xf0000,1,0,param_3,param_4,'\0','\0');
          puVar5 = (uint *)(param_3 + 0x20);
          local_a8 = FUN_1800ec8c0((longlong)puVar5,4,'\0');
          local_a4 = 1;
          local_98 = 0xffffffffffffffff;
          uStack_90 = 0xffffffffffffffff;
          FUN_1800edd10(puVar5,param_4,0x10,&local_a8);
          FUN_1800edd10(puVar5,param_4,0x44,&local_a8);
          local_88 = *(undefined4 *)(param_3 + 0xb8);
          uStack_70 = 0xffffffffffffffff;
          _bStack_84 = CONCAT31(uStack_83,0xe4);
          local_78 = 0xffffffff7f800000;
          FUN_1800edd10(puVar5,param_4,0x27,0x102);
          FUN_1800edd10(puVar5,param_4,1,&local_a8);
          FUN_180088378(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x38,
                        (uint *)(param_3 + 800),(uint *)&DAT_00000100);
          return puVar4;
        }
        if (uVar8 != 0x25) {
          return param_2;
        }
        uVar10 = 3;
        if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x4a6c) == '\x03') {
          uVar10 = 1;
        }
        puVar4 = (uint *)FUN_1800855dc((ulonglong)uVar10,puVar5,0xf0000,uVar10,0,param_3,param_4,
                                       '\0','\0');
        if ((*puVar5 & 0xf0000) == 0x10000) {
          local_58 = *(uint *)(param_3 + 0xc0);
          puVar13 = (uint *)(param_3 + 800);
          uVar10 = *(uint *)(param_3 + 0x480) | 0x4d;
          puVar5 = &local_58;
          local_54 = 0;
          local_48 = 0xffffffffffffffff;
          uStack_40 = 0xffffffffffffffff;
        }
        else {
          if ((*puVar5 & 0xf0000) != 0x20000) {
            puVar5 = (uint *)(param_3 + 800);
            if ((*puVar5 & 0x40000000) != 0) {
              local_58 = FUN_1800ec8c0(param_3 + 0x20,4,'\0');
              local_54 = 0x54;
              local_48 = 0xffffffffffffffff;
              uStack_40 = 0xffffffffffffffff;
              FUN_180088378(param_1,param_3,param_4,*(uint *)(param_3 + 0x480) | 0x4d,(uint *)0x102,
                            &local_58);
              puVar5 = &local_58;
              uVar10 = 0x36;
              goto LAB_18007df16;
            }
            uVar10 = *(uint *)(param_3 + 0x480) | 0x4d;
            puVar13 = (uint *)0x102;
            goto LAB_18007ce49;
          }
          local_58 = *(uint *)(param_3 + 0xc0);
          puVar5 = (uint *)(param_3 + 800);
          uVar10 = *(uint *)(param_3 + 0x480) | 0x4d;
          puVar13 = &local_58;
          local_54 = 0;
          local_48 = 0xffffffffffffffff;
          uStack_40 = 0xffffffffffffffff;
        }
      }
      FUN_180088378(param_1,param_3,param_4,uVar10,puVar5,puVar13);
      return puVar4;
    }
    if (uVar8 == 0x1f) {
LAB_18007ca10:
      return param_2 + 3;
    }
    if (uVar8 == 0x12) {
      puVar4 = (uint *)FUN_1800855dc(param_1,puVar5,0xf0000,3,0,param_3,param_4,'\0','\0');
      uVar1 = *(undefined1 *)(param_3 + 0x324);
      local_58 = FUN_1800ec8c0(param_3 + 0x20,4,'\0');
      puVar5 = (uint *)(param_3 + 0x430);
      *puVar5 = *puVar5 ^ 0x80000000;
      local_48 = 0xffffffffffffffff;
      uStack_40 = 0xffffffffffffffff;
      local_54 = uVar1;
      FUN_1800edd10((uint *)(param_3 + 0x20),param_4,0,&local_58);
      *puVar5 = *puVar5 ^ 0x80000000;
      FUN_1800ee208(0xe4,*(byte *)(param_3 + 0x324));
      puVar13 = (uint *)(param_3 + 800);
      puVar5 = (uint *)(param_3 + 0x3d0);
      uVar10 = *(uint *)(param_3 + 0x480) | 0x32;
LAB_18007ce49:
      FUN_180088378(param_1,param_3,param_4,uVar10,puVar13,puVar5);
      return puVar4;
    }
    if (uVar8 == 0x19) {
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,4,0xffffffff);
      return puVar5;
    }
    if (uVar8 == 0x1a) {
      uVar10 = param_2[2];
      uVar8 = (uVar10 >> 0x14 & 0x700 | uVar10 & 0x1800) >> 8;
      uVar11 = uVar10 & 0xf000000;
      if (uVar8 == 0xe) {
        if ((*(char *)(param_3 + 0xdc) == '\0') ||
           (*(char *)(*(longlong *)(param_3 + 0x10) + 0x49d8 + (ulonglong)(uVar10 & 0x7ff)) == '\0')
           ) {
          uVar10 = 5;
          if (uVar11 != 0xd000000) {
            uVar10 = 0x40005;
          }
          FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,uVar10,0xffffffff);
        }
        else {
          iVar7 = *(int *)(*(longlong *)(param_3 + 0x10) + 0x49e8 + (ulonglong)(uVar10 & 0x7ff) * 4)
          ;
          if (uVar11 == 0xd000000) {
            bVar12 = iVar7 == 0;
          }
          else {
            bVar12 = iVar7 != 0;
          }
          if (bVar12) {
            FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,4,0xffffffff);
          }
        }
      }
      else if (uVar8 == 0x13) {
        uVar10 = 5;
        if (uVar11 != 0xd000000) {
          uVar10 = 0x40005;
        }
        FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,uVar10,0xffffffff);
      }
      goto LAB_18007ca10;
    }
    if (uVar8 == 0x1b) goto LAB_18007d4de;
    if (uVar8 == 0x1c) {
      *param_5 = 1;
      return puVar5;
    }
    if (uVar8 == 0x1d) goto LAB_18007dac2;
    if (uVar8 != 0x1e) {
      return param_2;
    }
    uVar10 = 0x2c;
  }
  FUN_1800edbe0((uint *)(param_3 + 0x20),param_4,uVar10,0xffffffff);
LAB_18007dca2:
  return param_2 + 2;
}

