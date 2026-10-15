/*
 * FUN_100625d4 at 100625d4
 * uint * __thiscall FUN_100625d4(void * this, uint * param_1, int * param_2, uint * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 100625d4-100642b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall
FUN_100625d4(void *this,uint *param_1,int *param_2,uint *param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar6;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  uint *extraout_EDX_00;
  uint extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint local_100 [12];
  uint local_d0;
  undefined1 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint *local_a8;
  int *local_a4;
  uint local_a0;
  byte local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  byte local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint *local_54;
  uint local_50;
  byte local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  byte local_16;
  byte local_15;
  uint *local_14;
  
  local_a8 = param_1;
  param_1[0x138] = 0xffffffff;
  param_1[0xcc] = 0;
  local_14 = (uint *)*param_3;
  local_54 = param_3 + 1;
  local_20 = (uint)local_14 & 0xffff;
  local_a4 = param_2;
  local_1c = this;
  if (0x1e < local_20) {
    if (0x58 < local_20) {
      if (local_20 == 0x5a) {
        param_3 = (uint *)FUN_10061420(local_54,0xf0000,3,0,param_1,param_2,'\0','\0');
        local_16 = (byte)param_1[0xcd];
        local_50 = FUN_100c2e34((int)param_1,4,'\0');
        local_4c = local_16;
        local_40 = 0xffffffff;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_34 = 0xffffffff;
        FUN_100c3cfd((int *)param_1,param_2,0xf);
        FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),0xe4),
                     CONCAT31((int3)((uint)extraout_EDX_03 >> 8),(char)param_1[0xcd]));
        uVar11 = param_1[200];
        goto LAB_1006420d;
      }
      if ((local_20 != 0x5b) && (local_20 != 0x5c)) {
        if (local_20 == 0x5d) {
          param_3 = (uint *)FUN_10061420(local_54,0xf0000,4,0,param_1,param_2,'\0','\0');
          puVar13 = (uint *)0x0;
          uVar12 = 0x49;
        }
        else {
          if (local_20 == 0x5e) {
            param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\0');
            FUN_100624c7((uint)local_14,(int *)param_1,param_2,'\x01');
            goto switchD_10062650_caseD_c;
          }
          if (local_20 != 0x5f) {
            if (local_20 != 0x60) goto switchD_10062650_caseD_c;
            uVar11 = *local_54;
            local_80 = FUN_100612b3((int)param_1);
            local_80 = local_80 | 0x10000000;
            local_7c = (byte)(uVar11 >> 0x10) & 3;
            local_70 = 0xffffffff;
            local_6c = 0xffffffff;
            local_68 = 0xffffffff;
            local_64 = 0xffffffff;
            uVar3 = 3;
            if ((uVar11 & 0xf000000) != 0xd000000) {
              uVar3 = 0x40003;
            }
            FUN_100c3cfd((int *)param_1,param_2,uVar3);
            goto LAB_10064072;
          }
          param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\0');
          puVar13 = param_1 + 0x110;
          local_80 = 0;
          puVar7 = param_1 + 0xf8;
          puVar8 = puVar13;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          *puVar13 = *puVar13 | 0x10000000;
          local_70 = 0xffffffff;
          local_6c = 0xffffffff;
          local_68 = 0xffffffff;
          local_64 = 0xffffffff;
          local_7c = 0;
          puVar13 = &local_80;
          puVar7 = param_1 + 0x11c;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar13 = (uint *)0x0;
          *(undefined1 *)(param_1 + 0x111) = 3;
          uVar12 = 0x48;
LAB_10063b5d:
          local_64 = 0xffffffff;
          local_68 = 0xffffffff;
          local_6c = 0xffffffff;
          local_70 = 0xffffffff;
          local_7c = 0;
          local_80 = 0;
        }
        FUN_10061d29(param_1,param_2,uVar12,puVar13,param_4,param_5);
        goto switchD_10062650_caseD_c;
      }
      param_3 = (uint *)FUN_10061420(local_54,0xf0000,1,0,param_1,param_2,'\0','\0');
      uVar11 = (local_20 != 0x5b) + 0xb | param_1[200];
      goto LAB_10063fcd;
    }
    if (local_20 == 0x58) {
      param_3 = (uint *)FUN_10061420(local_54,0xf0000,3,0,param_1,param_2,'\0','\0');
      if ((param_1[0xf8] & 0x88000000) != 0x8000000) {
        local_16 = (byte)param_1[0xcd];
        local_50 = FUN_100c2e34((int)param_1,4,'\0');
        local_4c = local_16;
        local_40 = 0xffffffff;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_34 = 0xffffffff;
        cVar2 = FUN_100c413d((char)param_1[0xcd]);
        FUN_10058f9a(&local_80,(int)param_1,cVar2);
        FUN_100c3cfd((int *)param_1,param_2,0x1d);
        FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX_01 >> 8),0xe4),
                     CONCAT31((int3)((uint)extraout_EDX_02 >> 8),(char)param_1[0xcd]));
        uVar11 = param_1[200] | 0x37;
        goto LAB_10062814;
      }
      uVar11 = param_1[200] | 0x36;
      goto LAB_10063fcd;
    }
    if (0x28 < local_20) {
      if (local_20 == 0x29) {
        param_3 = FUN_100617f1(local_54,2,0,param_1,param_2,'\0','\0');
        local_80 = FUN_100624c7((uint)local_14,(int *)param_1,param_2,'\0');
        local_80 = local_80 | 0x10000000;
        local_7c = 0;
        local_70 = 0xffffffff;
        local_6c = 0xffffffff;
        local_68 = 0xffffffff;
        local_64 = 0xffffffff;
        FUN_100c3cfd((int *)param_1,param_2,0x4001f);
        bVar5 = (byte)param_1[0x148] + 1;
        cVar2 = *(char *)((byte)param_1[0x148] + 0x500 + (int)param_1);
        *(byte *)(param_1 + 0x148) = bVar5;
        *(byte *)(bVar5 + 0x500 + (int)param_1) = (cVar2 != '\x02') - 1U & 2;
        goto switchD_10062650_caseD_c;
      }
      if (local_20 == 0x2a) {
        uVar11 = (uint)(byte)param_1[0x148];
        cVar2 = *(char *)(uVar11 + 0x500 + (int)param_1);
        if (cVar2 == '\0') {
          FUN_100c3be1((int *)param_1,param_2,0x12);
          param_3 = local_54;
          goto switchD_10062650_caseD_c;
        }
        if (*(char *)(uVar11 + 0x4ff + (int)param_1) != '\x02') {
          cVar2 = (cVar2 == '\x01') + '\x01';
        }
        *(char *)(uVar11 + 0x500 + (int)param_1) = cVar2;
      }
      else {
        if (local_20 != 0x2b) {
          if (local_20 == 0x2c) {
            FUN_100c3be1((int *)param_1,param_2,2);
            param_3 = local_54;
            goto switchD_10062650_caseD_c;
          }
          if (local_20 != 0x2d) {
            if (local_20 != 0x41) {
              if (local_20 != 0x42) goto switchD_10062650_caseD_c;
              param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\0');
              puVar13 = local_14;
              if (((uint)local_14 & 0x10000) == 0) {
                local_14 = param_1 + 0x11c;
                puVar7 = param_1 + 0x110;
                if (((uint)puVar13 & 0x20000) == 0) {
                  local_80 = 0;
                  local_70 = 0xffffffff;
                  local_6c = 0xffffffff;
                  local_68 = 0xffffffff;
                  local_64 = 0xffffffff;
                  local_7c = 0;
                  puVar13 = &local_80;
                  puVar8 = local_14;
                  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar8 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  iVar6 = 8;
                  uVar12 = 0x45;
                  puVar8 = local_14;
                }
                else {
                  local_80 = 0;
                  puVar13 = param_1 + 0xf8;
                  puVar8 = puVar7;
                  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar8 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  *puVar7 = *puVar7 | 0x10000000;
                  local_70 = 0xffffffff;
                  local_6c = 0xffffffff;
                  local_68 = 0xffffffff;
                  local_64 = 0xffffffff;
                  iVar6 = 8;
                  *(undefined1 *)(param_1 + 0x111) = 3;
                  local_7c = 0;
                  uVar12 = 0x4a;
                  puVar8 = &local_80;
                  puVar7 = local_14;
                }
                for (; puVar13 = (uint *)0x0, iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar7 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar7 = puVar7 + 1;
                }
              }
              else {
                local_50 = FUN_100c2e34((int)param_1,4,'\x01');
                local_4c = 0xe4;
                local_40 = 0xffffffff;
                local_3c = 0xffffffff;
                local_38 = 0xffffffff;
                local_34 = 0xffffffff;
                FUN_100c4090((byte)param_1[0xf9],0xff);
                FUN_100c3cfd((int *)param_1,param_2,0xe);
                local_80 = 0;
                local_7c = 0;
                local_70 = 0xffffffff;
                local_6c = 0xffffffff;
                puVar13 = &local_50;
                puVar7 = param_1 + 0xf8;
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar7 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar7 = puVar7 + 1;
                }
                local_68 = 0xffffffff;
                local_64 = 0xffffffff;
                puVar13 = &local_80;
                puVar7 = param_1 + 0x11c;
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar7 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar7 = puVar7 + 1;
                }
                puVar13 = &local_50;
                puVar7 = param_1 + 0x11c;
                puVar8 = param_1 + 0x110;
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
                uVar12 = 0x45;
              }
              goto LAB_10063b5d;
            }
            param_3 = FUN_10061c32(0,local_54,(uint)local_14,local_54,(int *)param_1,param_2);
            local_16 = (byte)param_1[0xcd];
            if (local_16 != 0) {
              uVar11 = param_1[0x138];
              if ((uVar11 == 0) || (uVar11 == 0xffffffff)) {
                local_20 = 0;
              }
              else {
                local_20 = ((uVar11 & 0xf000000) == 0xd000000) + 1;
              }
              local_50 = FUN_100c2e34((int)param_1,4,'\0');
              local_4c = local_16;
              local_80 = param_1[0x28];
              local_40 = 0xffffffff;
              local_3c = 0xffffffff;
              local_38 = 0xffffffff;
              local_34 = 0xffffffff;
              local_6c = 0xffffffff;
              local_68 = 0xffffffff;
              local_64 = 0xffffffff;
              local_14 = (uint *)0x0;
              local_70 = 0;
              local_7c = 0xe4;
              FUN_100c3cfd((int *)param_1,param_2,*(uint *)(&DAT_100d5e2c + local_20 * 4));
              if (*(int *)(&DAT_100d5e20 + local_20 * 4) != -1) {
                uVar12 = FUN_100c40de(param_1[0x138] >> 0x10,
                                      CONCAT31((int3)(local_20 >> 8),(char)param_1[0xcd]));
                local_16 = (byte)uVar12;
                local_a0 = FUN_100612b3((int)param_1);
                local_9c = local_16;
                local_90 = 0xffffffff;
                local_8c = 0xffffffff;
                local_88 = 0xffffffff;
                local_84 = 0xffffffff;
                FUN_100c3cfd((int *)param_1,param_2,*(uint *)(&DAT_100d5e20 + local_20 * 4));
              }
              bVar5 = (byte)param_1[0xcd];
              local_14 = (uint *)(uint)bVar5;
              puVar13 = (uint *)0x0;
              if (local_14 != (uint *)0x0) {
                for (; (bVar5 >> (int)puVar13 & 1) == 0; puVar13 = (uint *)((int)puVar13 + 1)) {
                }
              }
              uVar11 = 0;
              if (local_14 != (uint *)0x0) {
                for (; (bVar5 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
              local_1c = puVar13;
              if (local_14 != (uint *)0x0) {
                local_15 = 1;
                pbVar4 = (byte *)((int)&local_14 + ((int)uVar11 >> 3));
                *pbVar4 = *pbVar4 & ~('\x01' << (uVar11 & 7));
                local_15 = '\x01' << ((byte)puVar13 & 0x1f);
                while( true ) {
                  local_24 = (uint *)(uVar11 & 0xff);
                  if ((uint *)(uVar11 & 0xff) != puVar13) {
                    FUN_100c3cfd((int *)param_1,param_2,*(uint *)(&DAT_100d5e10 + local_20 * 4));
                    puVar13 = local_1c;
                  }
                  uVar11 = 0;
                  if (local_14 != (uint *)0x0) {
                    for (; ((uint)local_14 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                    }
                  }
                  if (local_14 == (uint *)0x0) break;
                  pbVar4 = (byte *)((int)&local_14 + ((int)uVar11 >> 3));
                  *pbVar4 = *pbVar4 & ~('\x01' << (uVar11 & 7));
                }
              }
              local_50 = local_50 | 0x10000000;
              FUN_100c3cfd((int *)param_1,param_2,
                           (*(uint *)(&DAT_100d5e04 + local_20 * 4) & 1) << 0x12 | 0xd);
            }
            goto LAB_1006367b;
          }
          param_3 = FUN_100617f1(local_54,2,0,param_1,param_2,'\0','\0');
          local_80 = FUN_100624c7((uint)local_14,(int *)param_1,param_2,'\0');
          local_80 = local_80 | 0x10000000;
          local_7c = 0;
          local_70 = 0xffffffff;
          local_6c = 0xffffffff;
          local_68 = 0xffffffff;
          local_64 = 0xffffffff;
          uVar11 = 0x40003;
          goto LAB_10063fcd;
        }
        if (*(char *)((byte)param_1[0x148] + 0x500 + (int)param_1) == '\0') {
          FUN_100c3be1((int *)param_1,param_2,0x15);
        }
        *(char *)(param_1 + 0x148) = (char)param_1[0x148] + -1;
        cVar2 = *(char *)((byte)param_1[0x148] + 0x500 + (int)param_1);
      }
      *(bool *)(param_2 + 3) = cVar2 != '\x02';
      param_3 = local_54;
      goto switchD_10062650_caseD_c;
    }
    if (local_20 != 0x28) {
      if (local_20 == 0x20) {
        param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\x01');
        local_80 = param_1[0x28];
        local_14 = (uint *)0x0;
        local_7c = 0xe4;
        local_70 = 0;
        local_6c = 0xffffffff;
        local_68 = 0xffffffff;
        local_64 = 0xffffffff;
        local_50 = FUN_100c2e34((int)param_1,4,'\0');
        local_40 = 0xffffffff;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_34 = 0xffffffff;
        local_4c = 1;
        FUN_100c3cfd((int *)param_1,param_2,0x2f);
        FUN_100c3cfd((int *)param_1,param_2,0x38);
        FUN_100c3cfd((int *)param_1,param_2,0x39);
        FUN_100c3cfd((int *)param_1,param_2,0x37);
        FUN_100c3cfd((int *)param_1,param_2,param_1[200] | 0x19);
        goto switchD_10062650_caseD_c;
      }
      if (local_20 == 0x21) {
        param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\0');
        local_50 = FUN_100c2e34((int)param_1,4,'\0');
        local_4c = 7;
        local_40 = 0xffffffff;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_34 = 0xffffffff;
        FUN_100c4090((byte)param_1[0x105],0x52);
        FUN_100c4090((byte)param_1[0xf9],0xa4);
        FUN_100c3cfd((int *)param_1,param_2,0x38);
        local_50 = local_50 ^ 0x80000000;
        FUN_100c4090((byte)param_1[0x105],0x52);
        FUN_100c4090((byte)param_1[0xf9],9);
        FUN_100c3cfd((int *)param_1,param_2,param_1[200] | 0x32);
        goto switchD_10062650_caseD_c;
      }
      if (local_20 == 0x23) goto switchD_10062650_caseD_1;
      if (local_20 != 0x24) {
        if (local_20 != 0x25) {
          if (local_20 != 0x26) {
            if (local_20 != 0x27) goto switchD_10062650_caseD_c;
            goto switchD_10062650_caseD_1d;
          }
          goto switchD_10062650_caseD_1b;
        }
        local_14 = (uint *)0x1;
        uVar11 = 3;
        if (*(char *)(param_1[0x3d] + 0x126d) == '\x03') {
          uVar11 = 1;
        }
        param_3 = (uint *)FUN_10061420(local_54,0xf0000,uVar11,0,param_1,param_2,'\0','\0');
        uVar11 = param_1[200] | 0x4d;
        if ((*local_54 & 0xf0000) == 0x10000) {
          local_80 = param_1[0x2a];
        }
        else {
          if ((*local_54 & 0xf0000) != 0x20000) goto LAB_10062814;
          local_80 = param_1[0x2a];
        }
        local_64 = 0xffffffff;
        local_68 = 0xffffffff;
        local_6c = 0xffffffff;
        local_70 = 0xffffffff;
        local_7c = 0;
        goto LAB_10062697;
      }
      param_3 = (uint *)FUN_10061420(local_54,0xf0000,1,0,param_1,param_2,'\0','\0');
      local_50 = FUN_100c2e34((int)param_1,4,'\0');
      local_80 = param_1[0x28];
      local_4c = 1;
      local_40 = 0xffffffff;
      local_3c = 0xffffffff;
      local_38 = 0xffffffff;
      local_34 = 0xffffffff;
      local_7c = 0xe4;
      local_70 = 0x7f800000;
      local_6c = 0xffffffff;
      local_68 = 0xffffffff;
      local_64 = 0xffffffff;
      FUN_100c3cfd((int *)param_1,param_2,0x10);
      FUN_100c3cfd((int *)param_1,param_2,0x44);
      FUN_100c3cfd((int *)param_1,param_2,0x27);
      FUN_100c3cfd((int *)param_1,param_2,1);
      uVar11 = param_1[200] | 0x38;
      goto LAB_1006420d;
    }
    local_14 = (uint *)(*local_54 & 0xf000000);
    local_15 = *(byte *)((byte)param_1[0x148] + 0x500 + (int)param_1);
    uVar11 = FUN_1005da5e(*local_54);
    if (uVar11 == 0xe) {
      if (((char)param_1[0x3c] == '\0') ||
         (*(char *)(param_1[0x3d] + 0x2a0 + (extraout_EDX_01 & 0x7ff)) == '\0')) {
        uVar11 = 0x1f;
        if (local_14 != (uint *)0xd000000) {
          uVar11 = 0x4001f;
        }
        FUN_100c3be1((int *)param_1,param_2,uVar11);
        *(char *)(param_1 + 0x148) = (char)param_1[0x148] + '\x01';
        bVar5 = local_15;
        goto LAB_10063998;
      }
      bVar5 = local_15;
      if (local_15 != 2) {
        bVar5 = (*(int *)(param_1[0x3d] + 0x2b0 + (extraout_EDX_01 & 0x7ff) * 4) == 0) + 1;
      }
      bVar1 = (char)param_1[0x148] + 1;
      *(byte *)(param_1 + 0x148) = bVar1;
      *(byte *)(bVar1 + 0x500 + (int)param_1) = bVar5;
      *(bool *)(param_2 + 3) = bVar5 != 2;
    }
    else if (uVar11 == 0x13) {
      FUN_100612b3((int)param_1);
      uVar11 = 0x1f;
      if (local_14 != (uint *)0xd000000) {
        uVar11 = 0x4001f;
      }
      FUN_100c3be1((int *)param_1,param_2,uVar11);
      *(char *)(param_1 + 0x148) = (char)param_1[0x148] + '\x01';
      bVar5 = (local_15 != 2) - 1U & 2;
LAB_10063998:
      *(byte *)((byte)param_1[0x148] + 0x500 + (int)param_1) = bVar5;
    }
    goto LAB_10064072;
  }
  if (local_20 == 0x1e) {
    uVar11 = 0x2c;
    goto LAB_10062f5c;
  }
  switch(local_20) {
  case 1:
switchD_10062650_caseD_1:
    param_1[0x138] = 0;
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,1,0,param_1,param_2,'\0',local_20 == 0x23);
    local_14 = (uint *)param_1[0x138];
    if ((local_14 == (uint *)0xffffffff) || (local_14 == (uint *)0x0)) {
      FUN_100c3cfd((int *)param_1,param_2,param_1[200] | 0x36);
    }
    else {
      uVar10 = FUN_100612b3((int)param_1);
      local_50 = (uint)uVar10;
      local_4c = (byte)((uint)local_14 >> 0x10);
      local_40 = 0xffffffff;
      local_3c = 0xffffffff;
      local_38 = 0xffffffff;
      local_34 = 0xffffffff;
      FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),0xe4),
                   CONCAT31((int3)((ulonglong)uVar10 >> 0x28),(char)param_1[0xcd]));
      FUN_100c3cfd((int *)param_1,param_2,param_1[200] | 0x37);
    }
LAB_1006367b:
    param_1[0x138] = 0xffffffff;
    break;
  case 2:
  case 3:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\0');
    if (local_20 == 3) {
      param_1[0x104] = param_1[0x104] ^ 0x80000000;
    }
    uVar11 = param_1[200];
    goto LAB_10062697;
  case 4:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,3,0,param_1,param_2,'\0','\0');
    uVar11 = param_1[200] | 0x32;
LAB_1006420d:
    FUN_100c3cfd((int *)param_1,param_2,uVar11);
    break;
  case 5:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\0');
    uVar11 = param_1[200] | 0x38;
    goto LAB_10062697;
  case 6:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,1,0,param_1,param_2,'\0','\0');
    local_50 = FUN_100c2e34((int)param_1,4,'\0');
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    local_c0 = 0;
    local_bc = 0;
    local_d0 = param_1[0x29];
    local_b8 = 0;
    local_b4 = 0;
    local_14 = (uint *)0x7cf0bdc2;
    local_70 = 0x7cf0bdc2;
    local_24 = (uint *)0x7cf0bdc2;
    local_6c = 0x7cf0bdc2;
    local_1c = (uint *)0x7cf0bdc2;
    local_68 = 0x7cf0bdc2;
    puVar13 = param_1 + 0xf8;
    puVar7 = local_100;
    local_80 = local_d0;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar7 = puVar7 + 1;
    }
    local_20 = 0x7cf0bdc2;
    local_64 = 0x7cf0bdc2;
    local_4c = 2;
    local_100[0] = local_100[0] & 0x77ffffff | 0x8000000;
    local_cc = 0xe4;
    local_7c = 0xe4;
    FUN_100c3cfd((int *)param_1,param_2,0x31);
    iVar6 = FUN_100c3e1b(*param_1);
    if ((iVar6 == 0x40) || (iVar6 == 0x41)) {
      local_a0 = param_1[0x28];
      local_14 = (uint *)0x3f800000;
      local_90 = 0x3f800000;
      local_9c = 0xe4;
      local_8c = 0xffffffff;
      local_88 = 0xffffffff;
      local_84 = 0xffffffff;
      FUN_100c3cfd((int *)param_1,param_2,0xe);
    }
    else {
      FUN_100c3cfd((int *)param_1,param_2,0x81);
    }
    goto LAB_10062a1a;
  case 7:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,1,0,param_1,param_2,'\x01','\x01');
    local_50 = FUN_100c2e34((int)param_1,4,'\0');
    local_80 = param_1[0x28];
    local_14 = (uint *)0x7cf0bdc2;
    local_90 = 0x7cf0bdc2;
    local_70 = 0x7f800000;
    uVar11 = 0x44;
    goto LAB_10062a94;
  case 8:
  case 9:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\0');
    uVar11 = (local_20 != 8) + 0x10;
    goto LAB_10062761;
  case 10:
  case 0xb:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,2,0,param_1,param_2,'\0','\0');
    uVar11 = (local_20 != 10) + 0x33;
LAB_10062761:
    uVar11 = uVar11 | param_1[200];
LAB_10062697:
    FUN_100c3cfd((int *)param_1,param_2,uVar11);
    break;
  case 0xe:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,1,0,param_1,param_2,'\0','\0');
    uVar11 = param_1[200] | 0x19;
    goto LAB_10063fcd;
  case 0xf:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,1,0,param_1,param_2,'\x01','\x01');
    local_50 = FUN_100c2e34((int)param_1,4,'\0');
    local_80 = param_1[0x28];
    local_14 = (uint *)0xfcf0bdc2;
    local_90 = 0xfcf0bdc2;
    local_70 = 0xff800000;
    uVar11 = 0x2f;
LAB_10062a94:
    local_9c = 0xe4;
    local_84 = 0xffffffff;
    local_88 = 0xffffffff;
    local_8c = 0xffffffff;
    local_64 = 0xffffffff;
    local_68 = 0xffffffff;
    local_6c = 0xffffffff;
    local_7c = 0xe4;
    local_34 = 0xffffffff;
    local_38 = 0xffffffff;
    local_3c = 0xffffffff;
    local_40 = 0xffffffff;
    local_4c = 2;
    local_a0 = local_80;
    FUN_100c3cfd((int *)param_1,param_2,uVar11);
    FUN_100c3cfd((int *)param_1,param_2,0x20);
LAB_10062a1a:
    FUN_100c3cfd((int *)param_1,param_2,param_1[200] | 0x37);
    break;
  case 0x12:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,3,0,param_1,param_2,'\0','\0');
    local_15 = (byte)param_1[0xcd];
    local_50 = FUN_100c2e34((int)param_1,4,'\0');
    puVar13 = param_1 + 0x110;
    *puVar13 = *puVar13 ^ 0x80000000;
    local_4c = local_15;
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    FUN_100c3cfd((int *)param_1,param_2,0);
    *puVar13 = *puVar13 ^ 0x80000000;
    FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                 CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xcd]));
    uVar11 = param_1[200] | 0x32;
LAB_10062814:
    FUN_100c3cfd((int *)param_1,param_2,uVar11);
    break;
  case 0x13:
    param_3 = (uint *)FUN_10061420(local_54,0xf0000,1,0,param_1,param_2,'\0','\0');
    uVar11 = param_1[200] | 0x1a;
LAB_10063fcd:
    FUN_100c3cfd((int *)param_1,param_2,uVar11);
    break;
  case 0x14:
  case 0x15:
    local_1c = (uint *)(param_1[200] | 0x11);
    if ((*local_54 & 0x10000) != 0) {
      param_3 = (uint *)FUN_10061420(local_54,0x10000,2,0,param_1,param_2,'\0','\0');
      FUN_100c3cfd((int *)param_1,param_2,(uint)local_1c);
    }
    if ((*local_54 & 0x20000) != 0) {
      param_3 = (uint *)FUN_10061420(local_54,0x20000,2,1,param_1,param_2,'\0','\0');
      FUN_100c3cfd((int *)param_1,param_2,(uint)local_1c);
    }
    if ((*local_54 & 0x40000) != 0) {
      param_3 = (uint *)FUN_10061420(local_54,0x40000,2,2,param_1,param_2,'\0','\0');
      FUN_100c3cfd((int *)param_1,param_2,(uint)local_1c);
    }
    if (((*local_54 & 0x80000) != 0) && (local_20 == 0x14)) {
      param_3 = (uint *)FUN_10061420(local_54,0x80000,2,3,param_1,param_2,'\0','\0');
      FUN_100c3cfd((int *)param_1,param_2,(uint)local_1c);
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    local_1c = param_1 + 0x105;
    local_14 = (uint *)(param_1[200] | 0x10);
    local_24 = param_1 + 0xf9;
    if ((*local_54 & 0x10000) == 0) {
      local_24 = param_1 + 0xf9;
    }
    else {
      param_3 = (uint *)FUN_10061420(local_54,0x10000,2,0,param_1,param_2,'\0','\0');
      FUN_100c4090((byte)param_1[0x105],0xa4);
      FUN_100c4090((byte)param_1[0xf9],0xa4);
      FUN_100c3cfd((int *)param_1,param_2,(uint)local_14);
    }
    if ((*local_54 & 0x20000) != 0) {
      param_3 = (uint *)FUN_10061420(local_54,0x20000,2,1,param_1,param_2,'\0','\0');
      FUN_100c4090((byte)*local_1c,0xa4);
      FUN_100c4090((byte)*local_24,0xa4);
      FUN_100c3cfd((int *)param_1,param_2,(uint)local_14);
    }
    if (((*local_54 & 0x40000) != 0) && ((local_20 == 0x17 || (local_20 == 0x16)))) {
      param_3 = (uint *)FUN_10061420(local_54,0x40000,2,2,param_1,param_2,'\0','\0');
      FUN_100c4090((byte)*local_1c,0xa4);
      FUN_100c4090((byte)*local_24,0xa4);
      FUN_100c3cfd((int *)param_1,param_2,(uint)local_14);
    }
    if (((*local_54 & 0x80000) != 0) && (local_20 == 0x16)) {
      param_3 = (uint *)FUN_10061420(local_54,0x80000,2,3,param_1,param_2,'\0','\0');
      FUN_100c4090((byte)*local_1c,0xa4);
      FUN_100c4090((byte)*local_24,0xa4);
      FUN_100c3cfd((int *)param_1,param_2,(uint)local_14);
    }
    break;
  case 0x19:
    FUN_1006431d((int *)&local_a8);
    uVar11 = 4;
    goto LAB_10062f5c;
  case 0x1a:
    local_14 = (uint *)param_3[2];
    local_24 = (uint *)((uint)local_14 & 0xf000000);
    uVar11 = FUN_1005da5e((uint)local_14);
    if (uVar11 == 0xe) {
      local_14 = (uint *)((uint)local_14 & 0x7ff);
      local_1c = (uint *)(*extraout_EDX_00 & 0x5ff | 0x20410a00);
      if (((char)param_1[0x3c] == '\0') ||
         (*(char *)(param_1[0x3d] + 0x2a0 + (int)local_14) == '\0')) {
        FUN_1006431d((int *)&local_a8);
        uVar11 = 5;
        if (local_24 != (uint *)0xd000000) {
          uVar11 = 0x40005;
        }
        FUN_100c3be1((int *)param_1,param_2,uVar11);
      }
      else {
        iVar6 = *(int *)(param_1[0x3d] + 0x2b0 + (int)local_14 * 4);
        if (local_24 == (uint *)0xd000000) {
          bVar9 = iVar6 == 0;
        }
        else {
          bVar9 = iVar6 != 0;
        }
        if (bVar9) {
          FUN_1006431d((int *)&local_a8);
          FUN_100c3be1((int *)param_1,param_2,4);
        }
      }
    }
    else if (uVar11 == 0x13) {
      FUN_1006431d((int *)&local_a8);
      FUN_100612b3((int)param_1);
      uVar11 = 5;
      if (local_24 != (uint *)0xd000000) {
        uVar11 = 0x40005;
      }
      FUN_100c3be1((int *)param_1,param_2,uVar11);
    }
    param_3 = param_3 + 3;
    break;
  case 0x1b:
switchD_10062650_caseD_1b:
    if (3 < param_1[0x13a]) break;
    *(undefined1 *)(param_1[0x13a] + 0x4fc + (int)param_1) = 0;
    uVar11 = param_1[0x13a];
    if (param_1[uVar11 + 0xb5] == 0) {
      uVar3 = FUN_100c2e34((int)param_1,4,'\x01');
      param_1[uVar11 + 0xb5] = uVar3;
    }
    uVar11 = param_1[0x13a];
    local_14 = (uint *)param_1[uVar11 + 0xb5];
    local_1c = (uint *)(uVar11 + 1);
    param_1[0x13a] = (uint)local_1c;
    uVar3 = *local_54;
    if (local_20 == 0x1b) {
      uVar3 = local_54[1];
      param_1[uVar11 + 0x13b] = param_1[0x139];
      param_1[0x139] = param_1[0x13a];
      param_1[param_1[0x13a] + 0xb8] = 0xffffffff;
      param_3 = local_54;
    }
    local_24 = (uint *)(uVar3 & 0x7ff);
    if (((char)param_1[0x3c] == '\0') ||
       (local_1c = (uint *)param_1[0x3d], *(byte *)((int)(local_1c + 100) + (int)local_24) == 0)) {
      FUN_100c3be1((int *)param_1,param_2,0x25);
    }
    else {
      local_20 = local_1c[(int)local_24 * 4 + 0x6b];
      if (-1 < (int)local_20) {
        local_20 = 0;
      }
      pbVar4 = (byte *)((int)local_24 + 0x1a);
      local_24 = (uint *)0xff;
      if ((int)local_1c[(int)pbVar4 * 4] < 0xff) {
        local_24 = (uint *)local_1c[(int)pbVar4 * 4];
      }
      FUN_100c3be1((int *)param_1,param_2,0x36);
    }
    FUN_100c3be1((int *)param_1,param_2,0x24);
    FUN_100c3be1((int *)param_1,param_2,0x30);
    uVar11 = 3;
LAB_10062f5c:
    FUN_100c3be1((int *)param_1,param_2,uVar11);
LAB_10064072:
    param_3 = param_3 + 2;
    break;
  case 0x1d:
switchD_10062650_caseD_1d:
    uVar11 = param_1[0x13a];
    param_3 = local_54;
    if (uVar11 < 5) {
      param_1[0x13a] = uVar11 - 1;
      local_14 = (uint *)param_1[uVar11 + 0xb4];
      FUN_100c3be1((int *)param_1,param_2,0x1e);
      if (local_20 == 0x1d) {
        FUN_100c3be1((int *)param_1,param_2,0x1e);
        param_1[0x139] = param_1[param_1[0x13a] + 0x13b];
      }
      FUN_100c3be1((int *)param_1,param_2,0x16);
      if (*(char *)(param_1[0x13a] + 0x4fc + (int)param_1) == '\0') {
        FUN_100c2ed2((int)param_1,(uint)local_14);
        param_1[param_1[0x13a] + 0xb5] = 0;
      }
      uVar11 = param_1[0x13a];
      param_3 = local_54;
      if (uVar11 != 0) {
        pbVar4 = (byte *)(uVar11 + 0x4fb + (int)param_1);
        *pbVar4 = *pbVar4 | *(byte *)(uVar11 + 0x4fc + (int)param_1);
      }
    }
  }
switchD_10062650_caseD_c:
  local_14 = (uint *)param_1[0x138];
  if (local_14 != (uint *)0xffffffff) {
    local_80 = FUN_100612b3((int)param_1);
    local_7c = (byte)((uint)local_14 >> 0x10);
    local_70 = 0xffffffff;
    local_6c = 0xffffffff;
    local_68 = 0xffffffff;
    local_64 = 0xffffffff;
    FUN_100c3cfd((int *)param_1,param_2,0x37);
    FUN_100c2ed2((int)param_1,param_1[0xcc]);
    param_1[0xcc] = 0;
  }
  return param_3;
}

