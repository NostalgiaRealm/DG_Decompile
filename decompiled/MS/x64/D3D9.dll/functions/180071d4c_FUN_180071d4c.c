/*
 * FUN_180071d4c at 180071d4c
 * uint * __fastcall FUN_180071d4c(undefined8 param_1, uint * param_2, longlong * param_3, uint * param_4, ulonglong param_5)
 * Address ranges: 180071d4c-180074693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180071d4c(undefined8 param_1,uint *param_2,longlong *param_3,uint *param_4,
                    ulonglong param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  bool bVar16;
  uint local_res10 [2];
  uint local_res18;
  undefined8 local_res20;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  byte local_d4;
  undefined7 local_d3;
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  byte local_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  puVar11 = param_2 + 0xd0;
  param_2[0x13c] = 0xffffffff;
  *puVar11 = 0;
  puVar6 = (uint *)&DAT_00000004;
  uVar3 = *param_4;
  puVar12 = param_4 + 1;
  uVar15 = uVar3 & 0xffff;
  local_f8 = param_2;
  plStack_f0 = param_3;
  if (0x1e < uVar15) {
    if (0x58 < uVar15) {
      if (uVar15 == 0x5a) {
        param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,3,0,param_2,param_3,'\0','\0');
        uVar3 = param_2[0xd1];
        uVar15 = FUN_1800ec8c0((longlong)param_2,4,'\0');
        local_e8 = 0xffffffff;
        uStack_e4 = 0xffffffff;
        uStack_e0 = 0xffffffff;
        uStack_dc = 0xffffffff;
        local_f8._0_5_ = CONCAT14((char)uVar3,uVar15);
        FUN_1800edd10(param_2,param_3,0xf,&local_f8);
        FUN_1800ee208(0xe4,(byte)param_2[0xd1]);
        uVar3 = param_2[0xcc];
LAB_180072185:
        FUN_1800edd10(param_2,param_3,uVar3,param_2 + 0xd0);
        goto LAB_180071fd5;
      }
      if ((uVar15 == 0x5b) || (uVar15 == 0x5c)) {
        param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,1,0,param_2,param_3,'\0','\0');
        uVar3 = (uVar15 != 0x5b) + 0xb | param_2[0xcc];
LAB_180072a3d:
        FUN_1800edd10(param_2,param_3,uVar3,puVar11);
        goto LAB_180071fd5;
      }
      if (uVar15 == 0x5d) {
        param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,4,0,param_2,param_3,'\0','\0');
        puVar12 = (uint *)0x0;
        uVar3 = 0x49;
      }
      else {
        if (uVar15 == 0x5e) {
          param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\0');
          FUN_180071c38(puVar6,uVar3,param_2,param_3,'\x01');
          goto LAB_180071fd5;
        }
        if (uVar15 != 0x5f) {
          if (uVar15 != 0x60) goto LAB_180071fd5;
          uVar3 = *puVar12;
          local_d8 = param_2[0xc3];
          if (local_d8 == 0) {
            local_d8 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
            param_2[0xc3] = local_d8;
          }
          local_d8 = local_d8 | 0x10000000;
          local_c8 = 0xffffffffffffffff;
          uVar15 = 3;
          if ((uVar3 & 0xf000000) != 0xd000000) {
            uVar15 = 0x40003;
          }
          uStack_c0 = 0xffffffffffffffff;
          local_d4 = (byte)(uVar3 >> 0x10) & 3;
          FUN_1800edd10(param_2,param_3,uVar15,param_2 + 0x134);
          goto LAB_180072dae;
        }
        param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\0');
        param_2[0x120] = 0;
        uVar3 = 0x48;
        *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0xfc);
        *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0xfe);
        *(undefined1 *)(param_2 + 0x121) = 0;
        puVar12 = (uint *)0x0;
        *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x100);
        *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x102);
        *(undefined8 *)(param_2 + 0x11c) = *(undefined8 *)(param_2 + 0x104);
        *(undefined8 *)(param_2 + 0x11e) = *(undefined8 *)(param_2 + 0x106);
        param_2[0x114] = param_2[0x114] | 0x10000000;
        *(ulonglong *)((longlong)param_2 + 0x485) = CONCAT17((undefined1)uStack_cc,local_d3);
        param_2[0x123] = uStack_cc;
        param_2[0x124] = 0xffffffff;
        param_2[0x125] = 0xffffffff;
        param_2[0x126] = 0xffffffff;
        param_2[0x127] = 0xffffffff;
        *(undefined1 *)(param_2 + 0x115) = 3;
      }
LAB_180073b99:
      FUN_1800712e4(param_1,param_2,param_3,uVar3,param_5,puVar12);
      goto LAB_180071fd5;
    }
    if (uVar15 == 0x58) {
      param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,3,0,param_2,param_3,'\0','\0');
      if ((param_2[0xfc] & 0x88000000) == 0x8000000) {
        uVar3 = param_2[0xcc] | 0x36;
LAB_18007434c:
        FUN_1800edd10(param_2,param_3,uVar3,param_2 + 0xd0);
        goto LAB_180071fd5;
      }
      uVar3 = param_2[0xd1];
      puVar12 = param_2;
      uVar15 = FUN_1800ec8c0((longlong)param_2,4,'\0');
      local_e8 = 0xffffffff;
      uStack_e4 = 0xffffffff;
      uStack_e0 = 0xffffffff;
      uStack_dc = 0xffffffff;
      local_f8._0_5_ = CONCAT14((char)uVar3,uVar15);
      if (((byte)param_2[0xd1] < 9) &&
         (puVar12 = (uint *)0x116, (0x116U >> ((byte)param_2[0xd1] & 0x1f) & 1) != 0)) {
        cVar13 = '\x01';
      }
      else {
        cVar13 = '\0';
      }
      FUN_18006560c(puVar12,(undefined8 *)&local_d8,(longlong)param_2,0,cVar13);
      FUN_1800edd10(param_2,param_3,0x1d,&local_f8);
      FUN_1800ee208(0xe4,(byte)param_2[0xd1]);
      uVar3 = param_2[0xcc] | 0x37;
LAB_180072b40:
      puVar12 = param_2 + 0xd0;
LAB_180072b4d:
      FUN_1800edd10(param_2,param_3,uVar3,puVar12);
      goto LAB_180071fd5;
    }
    if (uVar15 < 0x29) {
      if (uVar15 != 0x28) {
        if (uVar15 == 0x20) {
          param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\x01');
          local_d4 = 0xe4;
          local_d8 = param_2[0x2a];
          local_c8 = 0xffffffff00000000;
          uStack_c0 = 0xffffffffffffffff;
          uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          local_e8 = 0xffffffff;
          uStack_e4 = 0xffffffff;
          uStack_e0 = 0xffffffff;
          uStack_dc = 0xffffffff;
          local_f8._0_5_ = CONCAT14(1,uVar3);
          FUN_1800edd10(param_2,param_3,0x2f,&local_f8);
          FUN_1800edd10(param_2,param_3,0x38,&local_f8);
          FUN_1800edd10(param_2,param_3,0x39,0x102);
          FUN_1800edd10(param_2,param_3,0x37,&local_f8);
          uVar3 = param_2[0xcc] | 0x19;
          goto LAB_18007210d;
        }
        if (uVar15 == 0x21) {
          param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\0');
          uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          local_e8 = 0xffffffff;
          uStack_e4 = 0xffffffff;
          uStack_e0 = 0xffffffff;
          uStack_dc = 0xffffffff;
          local_f8._0_5_ = CONCAT14(7,uVar3);
          FUN_1800edd10(param_2,param_3,0x38,&local_f8);
          local_f8 = (uint *)((ulonglong)local_f8 ^ 0x80000000);
          FUN_1800edd10(param_2,param_3,param_2[0xcc] | 0x32,param_2 + 0xd0);
          goto LAB_180071fd5;
        }
        if (uVar15 == 0x23) goto LAB_18007342d;
        if (uVar15 == 0x24) {
          param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,1,0,param_2,param_3,'\0','\0');
          uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          local_d8 = param_2[0x2a];
          local_e8 = 0xffffffff;
          uStack_e4 = 0xffffffff;
          uStack_e0 = 0xffffffff;
          uStack_dc = 0xffffffff;
          uStack_c0 = 0xffffffffffffffff;
          local_f8._0_5_ = CONCAT14(1,uVar3);
          local_d4 = 0xe4;
          local_c8 = 0xffffffff7f800000;
          FUN_1800edd10(param_2,param_3,0x10,&local_f8);
          FUN_1800edd10(param_2,param_3,0x44,&local_f8);
          FUN_1800edd10(param_2,param_3,0x27,0x102);
          FUN_1800edd10(param_2,param_3,1,&local_f8);
          uVar3 = param_2[0xcc] | 0x38;
          goto LAB_1800729eb;
        }
        if (uVar15 != 0x25) {
          if (uVar15 != 0x26) {
            if (uVar15 != 0x27) goto LAB_180071fd5;
            goto LAB_180072e37;
          }
          goto LAB_180072f4f;
        }
        uVar3 = 3;
        if (*(char *)(*(longlong *)(param_2 + 0x40) + 0x126d) == '\x03') {
          uVar3 = 1;
        }
        param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,uVar3,0,param_2,param_3,'\0','\0');
        puVar11 = param_2 + 0xd0;
        uVar3 = param_2[0xcc] | 0x4d;
        if ((*puVar12 & 0xf0000) == 0x10000) {
          local_d8 = param_2[0x2c];
          puVar11 = &local_d8;
        }
        else {
          if ((*puVar12 & 0xf0000) != 0x20000) {
            puVar12 = (uint *)0x102;
            goto LAB_180072b4d;
          }
          local_d8 = param_2[0x2c];
        }
        uStack_c0 = 0xffffffffffffffff;
        local_c8 = 0xffffffffffffffff;
        local_d4 = 0;
        FUN_1800edd10(param_2,param_3,uVar3,puVar11);
        goto LAB_180071fd5;
      }
      uVar3 = *puVar12;
      cVar13 = *(char *)((ulonglong)(byte)param_2[0x14c] + 0x510 + (longlong)param_2);
      uVar15 = (uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) >> 8;
      if (uVar15 == 0xe) {
        if (((char)param_2[0x3e] == '\0') ||
           (*(char *)(*(longlong *)(param_2 + 0x40) + 0x2a0 + (ulonglong)(uVar3 & 0x7ff)) == '\0'))
        {
          uVar15 = 0x1f;
          if ((uVar3 & 0xf000000) != 0xd000000) {
            uVar15 = 0x4001f;
          }
          FUN_1800edbe0(param_2,param_3,uVar15,0xffffffff);
          *(char *)(param_2 + 0x14c) = (char)param_2[0x14c] + '\x01';
          *(char *)((ulonglong)(byte)param_2[0x14c] + 0x510 + (longlong)param_2) = cVar13;
        }
        else {
          if (cVar13 != '\x02') {
            cVar13 = '\x02' - (*(int *)(*(longlong *)(param_2 + 0x40) + 0x2b0 +
                                       (ulonglong)(uVar3 & 0x7ff) * 4) != 0);
          }
          bVar8 = (byte)param_2[0x14c] + 1;
          *(byte *)(param_2 + 0x14c) = bVar8;
          *(char *)((ulonglong)bVar8 + 0x510 + (longlong)param_2) = cVar13;
          *(bool *)(param_3 + 3) = cVar13 != '\x02';
        }
      }
      else if (uVar15 == 0x13) {
        if (param_2[0xc3] == 0) {
          uVar15 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
          param_2[0xc3] = uVar15;
        }
        uVar15 = 0x1f;
        if ((uVar3 & 0xf000000) != 0xd000000) {
          uVar15 = 0x4001f;
        }
        FUN_1800edbe0(param_2,param_3,uVar15,0xffffffff);
        *(char *)(param_2 + 0x14c) = (char)param_2[0x14c] + '\x01';
        *(byte *)((ulonglong)(byte)param_2[0x14c] + 0x510 + (longlong)param_2) =
             (cVar13 != '\x02') - 1U & 2;
      }
      goto LAB_180072dae;
    }
    if (uVar15 == 0x29) {
      param_4 = FUN_180070e04(4,puVar12,2,0,param_2,param_3,'\0','\0');
      local_d8 = FUN_180071c38(puVar6,uVar3,param_2,param_3,'\0');
      local_d8 = local_d8 | 0x10000000;
      local_d4 = 0;
      local_c8 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      FUN_1800edd10(param_2,param_3,0x4001f,param_2 + 0x134);
      cVar13 = *(char *)((ulonglong)(byte)param_2[0x14c] + 0x510 + (longlong)param_2);
      bVar8 = (byte)param_2[0x14c] + 1;
      *(byte *)(param_2 + 0x14c) = bVar8;
      *(byte *)((ulonglong)bVar8 + 0x510 + (longlong)param_2) = (cVar13 != '\x02') - 1U & 2;
      goto LAB_180071fd5;
    }
    if (uVar15 == 0x2a) {
      uVar7 = (ulonglong)(byte)param_2[0x14c];
      cVar13 = *(char *)(uVar7 + 0x510 + (longlong)param_2);
      if (cVar13 == '\0') {
        uVar3 = 0x12;
LAB_1800740cc:
        FUN_1800edbe0(param_2,param_3,uVar3,0);
        param_4 = puVar12;
        goto LAB_180071fd5;
      }
      if (*(char *)(uVar7 + 0x50f + (longlong)param_2) != '\x02') {
        cVar13 = (cVar13 == '\x01') + '\x01';
      }
      *(char *)(uVar7 + 0x510 + (longlong)param_2) = cVar13;
    }
    else {
      if (uVar15 != 0x2b) {
        if (uVar15 == 0x2c) {
          uVar3 = 2;
          goto LAB_1800740cc;
        }
        if (uVar15 == 0x2d) {
          param_4 = FUN_180070e04(4,puVar12,2,0,param_2,param_3,'\0','\0');
          local_d8 = FUN_180071c38(puVar6,uVar3,param_2,param_3,'\0');
          local_d8 = local_d8 | 0x10000000;
          local_d4 = 0;
          puVar11 = param_2 + 0x134;
          uVar3 = 0x40003;
          local_c8 = 0xffffffffffffffff;
          uStack_c0 = 0xffffffffffffffff;
          goto LAB_180072a3d;
        }
        if (uVar15 != 0x41) {
          if (uVar15 != 0x42) goto LAB_180071fd5;
          param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\0');
          if ((uVar3 >> 0x10 & 1) == 0) {
            param_2[0x120] = 0;
            *(undefined1 *)(param_2 + 0x121) = 0;
            param_2[0x124] = 0xffffffff;
            param_2[0x125] = 0xffffffff;
            param_2[0x126] = 0xffffffff;
            param_2[0x127] = 0xffffffff;
            puVar12 = (uint *)0x0;
            if ((uVar3 >> 0x11 & 1) == 0) {
              uVar3 = 0x45;
              *(ulonglong *)((longlong)param_2 + 0x485) = CONCAT17((undefined1)uStack_cc,local_d3);
              param_2[0x123] = uStack_cc;
              *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x120);
              *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0x122);
              *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x124);
              *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x126);
            }
            else {
              uVar3 = 0x4a;
              *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0xfc);
              *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0xfe);
              *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x100);
              *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x102);
              *(undefined8 *)(param_2 + 0x11c) = *(undefined8 *)(param_2 + 0x104);
              *(undefined8 *)(param_2 + 0x11e) = *(undefined8 *)(param_2 + 0x106);
              param_2[0x114] = param_2[0x114] | 0x10000000;
              *(ulonglong *)((longlong)param_2 + 0x485) = CONCAT17((undefined1)uStack_cc,local_d3);
              param_2[0x123] = uStack_cc;
              *(undefined1 *)(param_2 + 0x115) = 3;
            }
          }
          else {
            uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
            local_f8._0_5_ = CONCAT14(0xe4,uVar3);
            local_e8 = 0xffffffff;
            uStack_e4 = 0xffffffff;
            uStack_e0 = 0xffffffff;
            uStack_dc = 0xffffffff;
            FUN_1800edd10(param_2,param_3,0xe,0x10f);
            uVar3 = 0x45;
            *(uint **)(param_2 + 0xfc) = local_f8;
            *(longlong **)(param_2 + 0xfe) = plStack_f0;
            param_2[0x120] = 0;
            *(ulonglong *)((longlong)param_2 + 0x485) = CONCAT17((undefined1)uStack_cc,local_d3);
            param_2[0x123] = uStack_cc;
            puVar12 = (uint *)&local_f8;
            *(undefined1 *)(param_2 + 0x121) = 0;
            param_2[0x124] = 0xffffffff;
            param_2[0x125] = 0xffffffff;
            param_2[0x126] = 0xffffffff;
            param_2[0x127] = 0xffffffff;
            *(ulonglong *)(param_2 + 0x100) = CONCAT44(uStack_e4,local_e8);
            *(ulonglong *)(param_2 + 0x102) = CONCAT44(uStack_dc,uStack_e0);
            *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x120);
            *(undefined8 *)(param_2 + 0x116) = *(undefined8 *)(param_2 + 0x122);
            *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x124);
            *(undefined8 *)(param_2 + 0x11a) = *(undefined8 *)(param_2 + 0x126);
          }
          goto LAB_180073b99;
        }
        uVar15 = *puVar12;
        local_res10[0] = uVar15 & 0x7ff;
        bVar8 = (byte)(uVar15 >> 0x10);
        bVar14 = bVar8 & 7;
        bVar8 = FUN_1800ee208(0xe4,bVar8 & 7);
        local_res20 = (uint *)CONCAT71(local_res20._1_7_,bVar8);
        local_res18 = uVar15 & 0x2000;
        if (local_res18 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = param_4[2];
        }
        uVar15 = uVar15 >> 0x14 & 0x700 | uVar15 & 0x1800;
        uVar4 = uVar15 >> 8;
        lVar9 = (ulonglong)(-(uint)(local_res18 != 0) & 4) + 8;
        if (uVar15 == 0) {
          uVar15 = FUN_18006c684((ulonglong)local_res18,(longlong)param_2,local_res10[0]);
          param_2[0xfc] = uVar15;
          *(undefined1 *)(param_2 + 0xfd) = (undefined1)local_res20;
LAB_180073d82:
          param_2[0x101] = 0xffffffff;
          param_2[0x102] = 0xffffffff;
          param_2[0x103] = 0xffffffff;
          param_2[0x100] = 0xffffffff;
        }
        else if (uVar4 == 1) {
          FUN_180070bdc((ulonglong)local_res18,param_2,param_3,local_res10[0],bVar8,uVar10,
                        param_2 + 0xfc);
        }
        else {
          if (uVar4 == 3) {
            *(byte *)(param_2 + 0xfd) = bVar8;
            param_2[0xfc] = local_res10[0] + 5 | 0x410100;
            goto LAB_180073d82;
          }
          bVar14 = 0;
        }
        if ((uVar3 >> 0x1c & 1) == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          lVar9 = (ulonglong)(-(uint)(local_res18 != 0) & 4) + 0xc;
          uVar3 = *(uint *)((longlong)param_4 + lVar9);
        }
        param_4 = (uint *)((longlong)param_4 + lVar9);
        param_2[0x13c] = uVar3;
        *(byte *)(param_2 + 0xd1) = bVar14;
        local_res20 = param_4;
        if (bVar14 != 0) {
          lVar9 = 0;
          if (uVar3 - 1 < 0xfffffffe) {
            lVar9 = (ulonglong)((uVar3 & 0xf000000) == 0xd000000) + 1;
          }
          uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          local_d8 = param_2[0x2a];
          local_f8._0_5_ = CONCAT14(bVar14,uVar3);
          local_e8 = 0xffffffff;
          uStack_e4 = 0xffffffff;
          uStack_e0 = 0xffffffff;
          uStack_dc = 0xffffffff;
          local_d4 = 0xe4;
          local_c8 = 0xffffffff00000000;
          uStack_c0 = 0xffffffffffffffff;
          FUN_1800edd10(param_2,param_3,*(uint *)(&DAT_180102948 + lVar9 * 4),&local_f8);
          if (*(int *)(&DAT_180102938 + lVar9 * 4) != -1) {
            uVar3 = param_2[0x13c];
            local_b8 = param_2[0xc3];
            if (local_b8 == 0) {
              local_b8 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
              param_2[0xc3] = local_b8;
            }
            local_b4 = FUN_1800ee208((byte)(uVar3 >> 0x10),(byte)param_2[0xd1]);
            local_a8 = 0xffffffff;
            local_a4 = 0xffffffff;
            local_a0 = 0xffffffff;
            local_9c = 0xffffffff;
            FUN_1800edd10(param_2,param_3,*(uint *)(&DAT_180102938 + lVar9 * 4),&local_f8);
          }
          bVar8 = (byte)param_2[0xd1];
          uVar3 = 0;
          if (bVar8 != 0) {
            for (; (bVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          uVar15 = 0;
          local_res10[0] = (uint)bVar8;
          if (local_res10[0] != 0) {
            for (; (bVar8 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
            }
          }
          if (local_res10[0] != 0) {
            pbVar1 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar15 >> 3));
            *pbVar1 = *pbVar1 & ~('\x01' << (uVar15 & 7));
            while( true ) {
              if ((uVar15 & 0xff) != uVar3) {
                FUN_1800edd10(param_2,param_3,*(uint *)(&DAT_180102928 + lVar9 * 4),
                              (ulonglong)(byte)('\x01' << ((byte)uVar3 & 0x1f)) | 0x100);
              }
              uVar15 = 0;
              if (local_res10[0] != 0) {
                for (; (local_res10[0] >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                }
              }
              param_4 = local_res20;
              if (local_res10[0] == 0) break;
              pbVar1 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar15 >> 3));
              *pbVar1 = *pbVar1 & ~('\x01' << (uVar15 & 7));
            }
          }
          local_f8 = (uint *)((ulonglong)local_f8 | 0x10000000);
          FUN_1800edd10(param_2,param_3,(*(uint *)(&DAT_180102918 + lVar9 * 4) & 1) << 0x12 | 0xd,
                        param_2 + 0x134);
        }
        param_2[0x13c] = 0xffffffff;
        goto LAB_180071fd5;
      }
      if (*(char *)((ulonglong)(byte)param_2[0x14c] + 0x510 + (longlong)param_2) == '\0') {
        FUN_1800edbe0(param_2,param_3,0x15,0);
      }
      *(char *)(param_2 + 0x14c) = (char)param_2[0x14c] + -1;
      cVar13 = *(char *)((ulonglong)(byte)param_2[0x14c] + 0x510 + (longlong)param_2);
    }
    *(bool *)(param_3 + 3) = cVar13 != '\x02';
    param_4 = puVar12;
    goto LAB_180071fd5;
  }
  if (uVar15 == 0x1e) {
    uVar3 = 0x2c;
LAB_180072da3:
    FUN_1800edbe0(param_2,param_3,uVar3,0xffffffff);
LAB_180072dae:
    param_4 = param_4 + 2;
    goto LAB_180071fd5;
  }
  if (0xf < uVar15) {
    if (uVar15 < 0x18) {
      if (uVar15 != 0x17) {
        if (uVar15 == 0x12) {
          param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,3,0,param_2,param_3,'\0','\0');
          uVar3 = param_2[0xd1];
          uVar15 = FUN_1800ec8c0((longlong)param_2,4,'\0');
          local_f8._0_5_ = CONCAT14((char)uVar3,uVar15);
          local_e8 = 0xffffffff;
          puVar12 = param_2 + 0x114;
          uStack_e4 = 0xffffffff;
          *puVar12 = *puVar12 ^ 0x80000000;
          uStack_e0 = 0xffffffff;
          uStack_dc = 0xffffffff;
          FUN_1800edd10(param_2,param_3,0,&local_f8);
          *puVar12 = *puVar12 ^ 0x80000000;
          FUN_1800ee208(0xe4,(byte)param_2[0xd1]);
          uVar3 = param_2[0xcc] | 0x32;
          goto LAB_180072b40;
        }
        if (uVar15 == 0x13) {
          param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,1,0,param_2,param_3,'\0','\0');
          uVar3 = param_2[0xcc] | 0x1a;
          goto LAB_180072a3d;
        }
        if ((uVar15 == 0x14) || (uVar15 == 0x15)) {
          uVar3 = param_2[0xcc] | 0x11;
          if ((*puVar12 & 0x10000) != 0) {
            param_4 = (uint *)FUN_180070948(4,puVar12,0x10000,2,0,param_2,param_3,'\0','\0');
            puVar6 = param_2;
            FUN_1800edd10(param_2,param_3,uVar3,0x101);
          }
          if ((*puVar12 & 0x20000) != 0) {
            param_4 = (uint *)FUN_180070948(puVar6,puVar12,0x20000,2,1,param_2,param_3,'\0','\0');
            puVar6 = param_2;
            FUN_1800edd10(param_2,param_3,uVar3,0x102);
          }
          if ((*puVar12 & 0x40000) != 0) {
            param_4 = (uint *)FUN_180070948(puVar6,puVar12,0x40000,2,2,param_2,param_3,'\0','\0');
            puVar6 = param_2;
            FUN_1800edd10(param_2,param_3,uVar3,0x104);
          }
          if (((*puVar12 & 0x80000) == 0) || (uVar15 != 0x14)) goto LAB_180071fd5;
          param_4 = (uint *)FUN_180070948(puVar6,puVar12,0x80000,2,3,param_2,param_3,'\0','\0');
          puVar11 = (uint *)0x108;
LAB_1800729eb:
          FUN_1800edd10(param_2,param_3,uVar3,puVar11);
          goto LAB_180071fd5;
        }
        if (uVar15 != 0x16) goto LAB_180071fd5;
      }
    }
    else if (uVar15 != 0x18) {
      if (uVar15 == 0x19) {
        FUN_180074694(&local_f8);
        uVar3 = 4;
      }
      else {
        if (uVar15 == 0x1a) {
          uVar3 = param_4[2];
          uVar15 = (uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) >> 8;
          local_res20 = (uint *)(CONCAT44(local_res20._4_4_,uVar3) & 0xffffffff0f000000);
          if (uVar15 == 0xe) {
            if (((char)param_2[0x3e] == '\0') ||
               (*(char *)(*(longlong *)(param_2 + 0x40) + 0x2a0 + (ulonglong)(uVar3 & 0x7ff)) ==
                '\0')) {
              FUN_180074694(&local_f8);
              uVar3 = 5;
              if ((uint)local_res20 != 0xd000000) {
                uVar3 = 0x40005;
              }
              FUN_1800edbe0(param_2,param_3,uVar3,0xffffffff);
            }
            else {
              iVar2 = *(int *)(*(longlong *)(param_2 + 0x40) + 0x2b0 +
                              (ulonglong)(uVar3 & 0x7ff) * 4);
              if ((uVar3 & 0xf000000) == 0xd000000) {
                bVar16 = iVar2 == 0;
              }
              else {
                bVar16 = iVar2 != 0;
              }
              if (bVar16) {
                FUN_180074694(&local_f8);
                FUN_1800edbe0(param_2,param_3,4,0xffffffff);
              }
            }
          }
          else if (uVar15 == 0x13) {
            FUN_180074694(&local_f8);
            if (param_2[0xc3] == 0) {
              uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
              param_2[0xc3] = uVar3;
            }
            uVar3 = 5;
            if ((uint)local_res20 != 0xd000000) {
              uVar3 = 0x40005;
            }
            FUN_1800edbe0(param_2,param_3,uVar3,0xffffffff);
          }
          param_4 = param_4 + 3;
          goto LAB_180071fd5;
        }
        if (uVar15 != 0x1b) {
          if (uVar15 != 0x1d) goto LAB_180071fd5;
LAB_180072e37:
          param_4 = puVar12;
          if (param_2[0x13e] < 5) {
            uVar3 = param_2[0x13e] - 1;
            param_2[0x13e] = uVar3;
            uVar3 = param_2[(ulonglong)uVar3 + 0xb9];
            FUN_1800edbe0(param_2,param_3,0x1e,(ulonglong)uVar3);
            if (uVar15 == 0x1d) {
              FUN_1800edbe0(param_2,param_3,0x1e,(ulonglong)uVar3);
              param_2[0x13d] = param_2[(ulonglong)param_2[0x13e] + 0x13f];
            }
            FUN_1800edbe0(param_2,param_3,0x16,0);
            uVar15 = 0;
            if (*(char *)((ulonglong)param_2[0x13e] + 0x50c + (longlong)param_2) == '\0') {
              FUN_1800ec960((longlong)param_2,uVar3);
              param_2[(ulonglong)param_2[0x13e] + 0xb9] = uVar15;
            }
            uVar3 = param_2[0x13e];
            if (uVar3 != 0) {
              pbVar1 = (byte *)((ulonglong)(uVar3 - 1) + 0x50c + (longlong)param_2);
              *pbVar1 = *pbVar1 | *(byte *)((ulonglong)uVar3 + 0x50c + (longlong)param_2);
            }
          }
          goto LAB_180071fd5;
        }
LAB_180072f4f:
        if (3 < param_2[0x13e]) goto LAB_180071fd5;
        *(undefined1 *)((ulonglong)param_2[0x13e] + 0x50c + (longlong)param_2) = 0;
        if (param_2[(ulonglong)param_2[0x13e] + 0xb9] == 0) {
          uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
          param_2[(ulonglong)param_2[0x13e] + 0xb9] = uVar3;
        }
        uVar3 = param_2[0x13e];
        uVar10 = param_2[(ulonglong)uVar3 + 0xb9];
        param_2[0x13e] = uVar3 + 1;
        if (uVar15 == 0x1b) {
          uVar15 = param_4[2];
          param_2[(ulonglong)uVar3 + 0x13f] = param_2[0x13d];
          param_2[0x13d] = param_2[0x13e];
          param_2[(ulonglong)(param_2[0x13e] - 1) + 0xbd] = 0xffffffff;
          param_4 = puVar12;
        }
        else {
          uVar15 = *puVar12;
        }
        if (((char)param_2[0x3e] == '\0') ||
           (*(char *)(*(longlong *)(param_2 + 0x40) + 400 + (ulonglong)(uVar15 & 0x7ff)) == '\0')) {
          FUN_1800edbe0(param_2,param_3,0x25,(ulonglong)uVar10);
        }
        else {
          FUN_1800edbe0(param_2,param_3,0x36,(ulonglong)uVar10);
        }
        FUN_1800edbe0(param_2,param_3,0x24,(ulonglong)uVar10);
        FUN_1800edbe0(param_2,param_3,0x30,0);
        uVar3 = 3;
      }
      goto LAB_180072da3;
    }
    local_res20 = (uint *)(CONCAT44(local_res20._4_4_,param_2[0xcc]) | 0x10);
    if ((*puVar12 & 0x10000) != 0) {
      param_4 = (uint *)FUN_180070948(4,puVar12,0x10000,2,0,param_2,param_3,'\0','\0');
      puVar6 = param_2;
      FUN_1800edd10(param_2,param_3,(uint)local_res20,0x101);
    }
    if ((*puVar12 & 0x20000) != 0) {
      param_4 = (uint *)FUN_180070948(puVar6,puVar12,0x20000,2,1,param_2,param_3,'\0','\0');
      puVar6 = param_2;
      FUN_1800edd10(param_2,param_3,(uint)local_res20,0x102);
    }
    if (((*puVar12 & 0x40000) != 0) && (uVar15 - 0x16 < 2)) {
      param_4 = (uint *)FUN_180070948(puVar6,puVar12,0x40000,2,2,param_2,param_3,'\0','\0');
      puVar6 = param_2;
      FUN_1800edd10(param_2,param_3,(uint)local_res20,0x104);
    }
    if (((*puVar12 & 0x80000) != 0) && (uVar15 == 0x16)) {
      param_4 = (uint *)FUN_180070948(puVar6,puVar12,0x80000,2,3,param_2,param_3,'\0','\0');
      FUN_1800edd10(param_2,param_3,(uint)local_res20,0x108);
    }
    goto LAB_180071fd5;
  }
  if (uVar15 == 0xf) {
    param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,1,0,param_2,param_3,'\x01','\x01');
    uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\0');
    local_a8 = 0xfcf0bdc2;
    uVar15 = 0x2f;
    local_c8._0_4_ = 0xff800000;
LAB_18007226c:
    local_d8 = param_2[0x2a];
    local_9c = 0xffffffff;
    local_a0 = 0xffffffff;
    local_a4 = 0xffffffff;
    uStack_c0 = 0xffffffffffffffff;
    local_c8 = CONCAT44(0xffffffff,(undefined4)local_c8);
    uStack_dc = 0xffffffff;
    uStack_e0 = 0xffffffff;
    uStack_e4 = 0xffffffff;
    local_e8 = 0xffffffff;
    local_b4 = 0xe4;
    local_d4 = 0xe4;
    local_f8._0_5_ = CONCAT14(2,uVar3);
    local_b8 = local_d8;
    FUN_1800edd10(param_2,param_3,uVar15,&local_f8);
    FUN_1800edd10(param_2,param_3,0x20,0x101);
  }
  else {
    if (7 < uVar15) {
      if ((uVar15 == 8) || (uVar15 == 9)) {
        param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\0');
        uVar3 = (uVar15 != 8) + 0x10;
      }
      else {
        if ((uVar15 != 10) && (uVar15 != 0xb)) {
          if (uVar15 != 0xe) goto LAB_180071fd5;
          param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,1,0,param_2,param_3,'\0','\0');
          uVar3 = param_2[0xcc] | 0x19;
          goto LAB_18007434c;
        }
        param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\0');
        uVar3 = (uVar15 != 10) + 0x33;
      }
      uVar3 = uVar3 | param_2[0xcc];
      goto LAB_18007210d;
    }
    if (uVar15 == 7) {
      param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,1,0,param_2,param_3,'\x01','\x01');
      uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\0');
      local_a8 = 0x7cf0bdc2;
      uVar15 = 0x44;
      local_c8._0_4_ = 0x7f800000;
      goto LAB_18007226c;
    }
    if (uVar15 == 1) {
LAB_18007342d:
      param_2[0x13c] = 0;
      param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,1,0,param_2,param_3,'\0',uVar15 == 0x23);
      uVar3 = param_2[0x13c];
      if ((uVar3 == 0xffffffff) || (uVar3 == 0)) {
        FUN_1800edd10(param_2,param_3,param_2[0xcc] | 0x36,puVar11);
      }
      else {
        uVar15 = param_2[0xc3];
        if (uVar15 == 0) {
          uVar15 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
          param_2[0xc3] = uVar15;
        }
        local_f8._0_5_ = CONCAT14((char)(uVar3 >> 0x10),uVar15);
        local_e8 = 0xffffffff;
        uStack_e4 = 0xffffffff;
        uStack_e0 = 0xffffffff;
        uStack_dc = 0xffffffff;
        FUN_1800ee208(0xe4,(byte)param_2[0xd1]);
        FUN_1800edd10(param_2,param_3,param_2[0xcc] | 0x37,puVar11);
      }
      param_2[0x13c] = 0xffffffff;
      goto LAB_180071fd5;
    }
    if ((uVar15 == 2) || (uVar15 == 3)) {
      param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\0');
      if (uVar15 == 3) {
        param_2[0x108] = param_2[0x108] ^ 0x80000000;
      }
      uVar3 = param_2[0xcc];
LAB_18007210d:
      FUN_1800edd10(param_2,param_3,uVar3,param_2 + 0xd0);
      goto LAB_180071fd5;
    }
    if (uVar15 == 4) {
      param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,3,0,param_2,param_3,'\0','\0');
      uVar3 = param_2[0xcc] | 0x32;
      goto LAB_180072185;
    }
    if (uVar15 == 5) {
      param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,2,0,param_2,param_3,'\0','\0');
      uVar3 = param_2[0xcc] | 0x38;
      goto LAB_18007210d;
    }
    if (uVar15 != 6) goto LAB_180071fd5;
    param_4 = (uint *)FUN_180070948(4,puVar12,0xf0000,1,0,param_2,param_3,'\0','\0');
    uVar3 = FUN_1800ec8c0((longlong)param_2,4,'\0');
    local_d8 = param_2[0x2b];
    uStack_74 = param_2[0xfd];
    uStack_70 = param_2[0xfe];
    uStack_6c = param_2[0xff];
    local_58 = *(undefined8 *)(param_2 + 0x104);
    uStack_50 = *(undefined8 *)(param_2 + 0x106);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = param_2[0xfc] & 0x77ffffff | 0x8000000;
    local_c8 = 0x7cf0bdc27cf0bdc2;
    uStack_c0 = 0x7cf0bdc27cf0bdc2;
    local_68 = *(undefined8 *)(param_2 + 0x100);
    uStack_60 = *(undefined8 *)(param_2 + 0x102);
    local_f8._0_5_ = CONCAT14(2,uVar3);
    local_e8 = 0xffffffff;
    uStack_e4 = 0xffffffff;
    uStack_e0 = 0xffffffff;
    uStack_dc = 0xffffffff;
    local_94 = 0xe4;
    local_d4 = 0xe4;
    local_98 = local_d8;
    FUN_1800edd10(param_2,param_3,0x31,&local_f8);
    uVar5 = FUN_1800ee040(*param_2);
    if (((int)uVar5 == 0x40) || ((int)uVar5 == 0x41)) {
      local_b8 = param_2[0x2a];
      local_a8 = 0x3f800000;
      local_b4 = 0xe4;
      local_a4 = 0xffffffff;
      local_a0 = 0xffffffff;
      local_9c = 0xffffffff;
      FUN_1800edd10(param_2,param_3,0xe,0x101);
    }
    else {
      FUN_1800edd10(param_2,param_3,0x81,0x101);
    }
  }
  FUN_1800edd10(param_2,param_3,param_2[0xcc] | 0x37,puVar11);
LAB_180071fd5:
  uVar3 = param_2[0x13c];
  if (uVar3 != 0xffffffff) {
    uVar15 = param_2[0xc3];
    if (uVar15 == 0) {
      uVar15 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
      param_2[0xc3] = uVar15;
    }
    local_c8 = 0xffffffffffffffff;
    uStack_c0 = 0xffffffffffffffff;
    local_d4 = (byte)(uVar3 >> 0x10);
    local_d8 = uVar15;
    FUN_1800edd10(param_2,param_3,0x37,param_2 + 0xdc);
    FUN_1800ec960((longlong)param_2,param_2[0xd0]);
    param_2[0xd0] = 0;
  }
  return param_4;
}

