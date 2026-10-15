/*
 * FUN_18009ccf8 at 18009ccf8
 * undefined1 __fastcall FUN_18009ccf8(longlong param_1, longlong param_2, int param_3, int param_4, longlong param_5, uint param_6, uint * param_7, LPRECT param_8, byte * param_9)
 * Address ranges: 18009ccf8-18009d9ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_18009ccf8(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5,
             uint param_6,uint *param_7,LPRECT param_8,byte *param_9)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  byte extraout_var;
  uint uVar7;
  byte extraout_var_00;
  uint uVar8;
  byte extraout_var_01;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 unaff_RDI;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined8 in_stack_fffffffffffffeb8;
  byte local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  undefined4 local_118;
  uint local_114;
  uint local_110;
  undefined4 local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint *local_e0;
  uint local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  ulonglong local_b8;
  uint local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_98 [6];
  undefined1 local_80 [48];
  uint local_50;
  ulonglong uVar13;
  
  uVar2 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_2 + 0x14) + 0x70))
                    (*(longlong **)(param_2 + 0x14),local_98,0);
  if (iVar5 < 0) {
    return 0;
  }
  uVar11 = (ulonglong)param_6;
  local_104 = param_4 * *(int *)(param_1 + 0x3c) + param_3;
  FUN_18009c074(param_1,&local_f8,param_3,param_4);
  uVar19 = local_ec;
  local_100 = *param_7;
  local_108 = param_7[2];
  uVar9 = param_7[3];
  uVar8 = param_7[1];
  *param_9 = 1;
  local_d8 = uVar9;
  if (((*(int *)(param_1 + 0x44) - 3U < 3) &&
      (*(char *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + 0x6ea + *(longlong *)(param_1 + 0x50)
                ) == '\0')) &&
     ((local_100 != 0 || uVar8 != 0 || ((local_108 != local_e8 || (uVar9 != local_ec - 1)))))) {
    (**(code **)(**(longlong **)(param_2 + 0x14) + 0x50))(*(longlong **)(param_2 + 0x14),local_80);
    *param_9 = ~(byte)(local_50 >> 1) & 1;
  }
  uVar6 = FUN_1800fb1a0(*(longlong *)(param_1 + 0x58) + 0x12c0);
  if (((((char)uVar6 == '\0') || (local_98[0] != 4)) || (*(int *)(param_1 + 0x44) - 3U < 3)) ||
     (cVar1 = FUN_1800eacd8(*(longlong **)(*(longlong *)(param_1 + 0x50) + 0x1b500),
                            *(ulonglong *)(param_2 + 0x14),local_104), cVar1 == '\0')) {
    uVar13 = 1;
    if (*param_9 == 0) {
      uVar2 = FUN_18009bf6c(param_1);
      uVar13 = (ulonglong)(byte)uVar2;
      if (!(bool)uVar2) goto LAB_18009d92f;
    }
    local_fc = (*(int *)(param_1 + 0x34) + param_4) * *(int *)(param_1 + 0x3c) + param_3;
    local_d0 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1508);
    local_c0 = 0;
    local_124 = 0;
    FUN_18009c104(param_1,param_3,param_4,&local_c0,&local_124,(uint *)0x0);
    if (local_100 != 0) {
      local_118 = 0;
      local_10c = 1;
      local_120 = local_f0 * local_100;
      local_e0 = (uint *)((ulonglong)(uVar8 * param_6) + param_5 + (ulonglong)(local_f4 * local_100)
                         );
      uVar7 = uVar8 + 1;
      local_11c = uVar19 * uVar8;
      local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_120);
      local_114 = local_108;
      if (uVar9 != uVar8) {
        local_114 = local_e8;
      }
      local_114 = local_114 * local_f0;
      local_110 = uVar19 * uVar7;
      local_b8 = CONCAT44(local_b8._4_4_,local_110);
      local_128 = (byte)uVar13;
      local_100 = uVar7;
      if (*param_9 != 0) {
        local_b0 = local_114;
        bVar3 = FUN_18009c2bc(param_1,local_d0,*(longlong **)(param_2 + 0x14),local_104,
                              (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),(int *)&local_120
                              ,local_e0,param_6,in_stack_fffffffffffffeb8,0);
        local_128 = bVar3 & local_128;
        if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          bVar3 = FUN_18009c2bc(param_1,local_d0,*(longlong **)(param_2 + 0x14),local_fc,
                                (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),
                                (int *)&local_120,local_e0,param_6,in_stack_fffffffffffffeb8,1);
          local_128 = local_128 & bVar3;
        }
      }
      uVar8 = uVar7;
      local_b0 = local_114;
      if (local_c0 != 0) {
        uVar13 = (ulonglong)local_11c / (ulonglong)uVar19;
        uVar18 = local_110 / uVar19;
        iVar5 = (int)uVar13;
        puVar17 = (undefined8 *)
                  ((ulonglong)(iVar5 * local_124) +
                  local_c0 + (ulonglong)((local_120 / local_f0) * local_f4));
        uVar7 = (local_114 / local_f0 - local_120 / local_f0) * local_f4;
        local_c8 = puVar17;
        if ((param_6 == local_124) && (uVar7 == param_6)) {
          FUN_1800fbec0(puVar17,(undefined8 *)local_e0,(ulonglong)((uVar18 - iVar5) * param_6));
        }
        else if (iVar5 < (int)uVar18) {
          uVar22 = (ulonglong)local_124;
          puVar20 = local_e0;
          local_a8 = uVar11;
          do {
            FUN_1800fbec0(puVar17,(undefined8 *)puVar20,(ulonglong)uVar7);
            puVar20 = (uint *)((longlong)puVar20 + uVar11);
            puVar17 = (undefined8 *)((longlong)puVar17 + uVar22);
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            uVar19 = local_ec;
            uVar9 = local_d8;
            uVar8 = local_100;
          } while ((int)uVar12 < (int)uVar18);
        }
      }
      uVar13 = (ulonglong)local_128;
    }
    if (uVar8 < uVar9) {
      uVar11 = 0;
      local_114 = local_f0 * local_e8;
      local_11c = uVar19 * uVar8;
      uVar7 = uVar9 + 1;
      local_120 = 0;
      local_118 = 0;
      local_e0 = (uint *)((ulonglong)(uVar8 * param_6) + param_5);
      local_110 = uVar9;
      if (local_108 == local_e8) {
        local_110 = uVar7;
      }
      local_110 = local_110 * uVar19;
      local_10c = 1;
      local_128 = (byte)uVar13;
      local_100 = uVar7;
      if (*param_9 != 0) {
        bVar3 = FUN_18009c2bc(param_1,local_d0,*(longlong **)(param_2 + 0x14),local_104,
                              (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),(int *)&local_120
                              ,local_e0,param_6,in_stack_fffffffffffffeb8,0);
        local_128 = bVar3 & local_128;
        if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          bVar3 = FUN_18009c2bc(param_1,local_d0,*(longlong **)(param_2 + 0x14),local_fc,
                                (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),
                                (int *)&local_120,local_e0,param_6,in_stack_fffffffffffffeb8,1);
          local_128 = local_128 & bVar3;
        }
        uVar11 = (ulonglong)local_120;
      }
      if (local_c0 != 0) {
        uVar13 = (ulonglong)local_11c / (ulonglong)uVar19;
        uVar18 = local_110 / uVar19;
        iVar16 = (int)uVar13;
        iVar5 = (int)(uVar11 / local_f0);
        puVar17 = (undefined8 *)
                  ((ulonglong)(iVar16 * local_124) + local_c0 + (ulonglong)(uint)(iVar5 * local_f4))
        ;
        uVar8 = (local_114 / local_f0 - iVar5) * local_f4;
        local_c8 = puVar17;
        if ((param_6 == local_124) && (uVar8 == param_6)) {
          FUN_1800fbec0(puVar17,(undefined8 *)local_e0,(ulonglong)((uVar18 - iVar16) * param_6));
        }
        else if (iVar16 < (int)uVar18) {
          uVar11 = (ulonglong)local_124;
          puVar20 = local_e0;
          local_a0 = (ulonglong)param_6;
          do {
            FUN_1800fbec0(puVar17,(undefined8 *)puVar20,(ulonglong)uVar8);
            puVar20 = (uint *)((longlong)puVar20 + (ulonglong)param_6);
            puVar17 = (undefined8 *)((longlong)puVar17 + uVar11);
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            uVar19 = local_ec;
            uVar9 = local_d8;
            uVar7 = local_100;
          } while ((int)uVar12 < (int)uVar18);
        }
      }
      uVar13 = (ulonglong)local_128;
      uVar8 = uVar7;
      if (local_108 != local_e8) {
        uVar8 = uVar9;
      }
    }
    if (uVar9 == uVar8) {
      local_114 = local_f0 * local_108;
      local_110 = (uVar9 + 1) * uVar19;
      local_11c = uVar19 * uVar8;
      local_120 = 0;
      local_118 = 0;
      puVar20 = (uint *)((ulonglong)(uVar8 * param_6) + param_5);
      local_10c = 1;
      bVar3 = (byte)uVar13;
      if (*param_9 != 0) {
        bVar4 = FUN_18009c2bc(param_1,local_d0,*(longlong **)(param_2 + 0x14),local_104,
                              (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),(int *)&local_120
                              ,puVar20,param_6,in_stack_fffffffffffffeb8,0);
        bVar3 = bVar4 & bVar3;
        if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          bVar4 = FUN_18009c2bc(param_1,local_d0,*(longlong **)(param_2 + 0x14),local_fc,
                                (longlong *)(*(longlong *)(param_1 + 0x58) + 0x16d0),
                                (int *)&local_120,puVar20,param_6,in_stack_fffffffffffffeb8,1);
          bVar3 = bVar3 & bVar4;
        }
      }
      if (local_c0 != 0) {
        uVar13 = (ulonglong)local_124;
        uVar11 = (ulonglong)local_11c / (ulonglong)uVar19;
        uVar8 = local_110 / uVar19;
        iVar5 = (int)uVar11;
        puVar17 = (undefined8 *)
                  ((ulonglong)(iVar5 * local_124) +
                  local_c0 + (ulonglong)((local_120 / local_f0) * local_f4));
        uVar9 = (local_114 / local_f0 - local_120 / local_f0) * local_f4;
        if ((param_6 == local_124) && (uVar9 == param_6)) {
          FUN_1800fbec0(puVar17,(undefined8 *)puVar20,(ulonglong)((uVar8 - iVar5) * param_6));
        }
        else if (iVar5 < (int)uVar8) {
          do {
            FUN_1800fbec0(puVar17,(undefined8 *)puVar20,(ulonglong)uVar9);
            puVar20 = (uint *)((longlong)puVar20 + (ulonglong)param_6);
            puVar17 = (undefined8 *)((longlong)puVar17 + uVar13);
            uVar19 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar19;
          } while ((int)uVar19 < (int)uVar8);
          uVar13 = (ulonglong)bVar3;
          uVar19 = local_ec;
          goto LAB_18009d91a;
        }
      }
      uVar13 = (ulonglong)bVar3;
    }
  }
  else {
    uVar10 = FUN_18009a77c(param_2,local_104);
    if ((char)uVar10 == '\0') goto LAB_18009d92f;
    uVar22 = 0;
    local_d0 = 0;
    local_fc = 0;
    FUN_18009c104(param_1,param_3,param_4,&local_d0,&local_fc,(uint *)0x0);
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (local_100 != 0) {
      local_120 = local_f0 * local_100;
      local_118 = 0;
      local_10c = 1;
      local_11c = uVar19 * uVar8;
      local_e0 = (uint *)((ulonglong)(local_f4 * local_100) + param_5 + (ulonglong)(uVar8 * param_6)
                         );
      uVar7 = uVar8 + 1;
      uVar22 = uVar22 & 0xffffffff00000000;
      local_114 = local_108;
      if (uVar9 != uVar8) {
        local_114 = local_e8;
      }
      local_114 = local_114 * local_f0;
      local_110 = uVar19 * uVar7;
      local_100 = uVar7;
      (**(code **)(**(longlong **)(param_2 + 0x14) + 0x60))
                (*(longlong **)(param_2 + 0x14),local_104,&local_120,local_e0,param_6,uVar22);
      uVar13 = (ulonglong)(extraout_var >> 7) ^ 1;
      local_124 = (uint)uVar13;
      uVar8 = uVar7;
      if (local_d0 != 0) {
        uVar14 = (ulonglong)local_fc;
        uVar15 = (ulonglong)local_11c / (ulonglong)uVar19;
        uVar18 = local_110 / uVar19;
        iVar5 = (int)uVar15;
        puVar17 = (undefined8 *)
                  ((ulonglong)(local_fc * iVar5) +
                  (ulonglong)(local_f4 * (local_120 / local_f0)) + local_d0);
        uVar7 = (local_114 / local_f0 - local_120 / local_f0) * local_f4;
        if ((param_6 == local_fc) && (uVar7 == param_6)) {
          FUN_1800fbec0(puVar17,(undefined8 *)local_e0,(ulonglong)((uVar18 - iVar5) * param_6));
          uVar9 = local_d8;
        }
        else {
          uVar9 = local_d8;
          if (iVar5 < (int)uVar18) {
            puVar20 = local_e0;
            local_b8 = uVar11;
            do {
              FUN_1800fbec0(puVar17,(undefined8 *)puVar20,(ulonglong)uVar7);
              puVar20 = (uint *)((longlong)puVar20 + uVar11);
              puVar17 = (undefined8 *)((longlong)puVar17 + uVar14);
              uVar9 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar9;
            } while ((int)uVar9 < (int)uVar18);
            uVar13 = (ulonglong)local_124;
            uVar19 = local_ec;
            uVar9 = local_d8;
            uVar8 = local_100;
          }
        }
      }
    }
    if (uVar8 < uVar9) {
      local_120 = 0;
      local_11c = uVar19 * uVar8;
      local_118 = 0;
      local_10c = 1;
      uVar22 = uVar22 & 0xffffffff00000000;
      local_114 = local_f0 * local_e8;
      local_e0 = (uint *)((ulonglong)(uVar8 * param_6) + param_5);
      local_110 = uVar9;
      if (local_108 == local_e8) {
        local_110 = uVar9 + 1;
      }
      local_110 = local_110 * uVar19;
      (**(code **)(**(longlong **)(param_2 + 0x14) + 0x60))
                (*(longlong **)(param_2 + 0x14),local_104,&local_120,local_e0,param_6,uVar22);
      uVar13 = CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 & (extraout_var_00 >> 7 ^ 1));
      local_124 = (uint)uVar13;
      if (local_d0 != 0) {
        uVar15 = (ulonglong)local_fc;
        uVar11 = (ulonglong)local_11c / (ulonglong)uVar19;
        uVar7 = local_110 / uVar19;
        iVar5 = (int)uVar11;
        puVar17 = (undefined8 *)
                  ((ulonglong)(local_fc * iVar5) +
                  (ulonglong)(local_f4 * (local_120 / local_f0)) + local_d0);
        uVar8 = (local_114 / local_f0 - local_120 / local_f0) * local_f4;
        if ((param_6 == local_fc) && (uVar8 == param_6)) {
          FUN_1800fbec0(puVar17,(undefined8 *)local_e0,(ulonglong)((uVar7 - iVar5) * param_6));
        }
        else if (iVar5 < (int)uVar7) {
          puVar20 = local_e0;
          do {
            FUN_1800fbec0(puVar17,(undefined8 *)puVar20,(ulonglong)uVar8);
            puVar20 = (uint *)((longlong)puVar20 + (ulonglong)param_6);
            puVar17 = (undefined8 *)((longlong)puVar17 + uVar15);
            uVar9 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar9;
          } while ((int)uVar9 < (int)uVar7);
          uVar13 = (ulonglong)local_124;
          uVar19 = local_ec;
          uVar9 = local_d8;
        }
      }
      uVar8 = uVar9;
      if (local_108 == local_e8) {
        uVar8 = uVar9 + 1;
      }
    }
    if (uVar9 == uVar8) {
      local_120 = 0;
      local_11c = uVar19 * uVar8;
      local_118 = 0;
      local_10c = 1;
      puVar17 = (undefined8 *)((ulonglong)(uVar8 * param_6) + param_5);
      local_114 = local_f0 * local_108;
      local_110 = (uVar9 + 1) * uVar19;
      (**(code **)(**(longlong **)(param_2 + 0x14) + 0x60))
                (*(longlong **)(param_2 + 0x14),local_104,&local_120,puVar17,param_6,
                 uVar22 & 0xffffffff00000000);
      uVar13 = CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 & (extraout_var_01 >> 7 ^ 1));
      local_124 = (uint)uVar13;
      if (local_d0 != 0) {
        uVar22 = (ulonglong)local_fc;
        uVar11 = (ulonglong)local_11c / (ulonglong)uVar19;
        uVar8 = local_110 / uVar19;
        iVar5 = (int)uVar11;
        puVar21 = (undefined8 *)
                  ((ulonglong)(local_fc * iVar5) +
                  (ulonglong)(local_f4 * (local_120 / local_f0)) + local_d0);
        uVar9 = (local_114 / local_f0 - local_120 / local_f0) * local_f4;
        if ((param_6 == local_fc) && (uVar9 == param_6)) {
          FUN_1800fbec0(puVar21,puVar17,(ulonglong)((uVar8 - iVar5) * param_6));
        }
        else if (iVar5 < (int)uVar8) {
          do {
            FUN_1800fbec0(puVar21,puVar17,(ulonglong)uVar9);
            puVar17 = (undefined8 *)((longlong)puVar17 + (ulonglong)param_6);
            puVar21 = (undefined8 *)((longlong)puVar21 + uVar22);
            uVar19 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar19;
          } while ((int)uVar19 < (int)uVar8);
          uVar13 = (ulonglong)local_124;
          uVar19 = local_ec;
        }
      }
    }
  }
LAB_18009d91a:
  uVar2 = (undefined1)uVar13;
  FUN_18009c25c(param_1,param_3,param_4);
LAB_18009d92f:
  bVar3 = (byte)param_3 & 0x1f;
  uVar9 = *(uint *)(param_1 + 0x24) >> bVar3;
  if (*(uint *)(param_1 + 0x24) >> bVar3 == 0) {
    uVar9 = 1;
  }
  SetRect(param_8,0,uVar19 * param_7[1],uVar9,(param_7[3] + 1) * uVar19);
  return uVar2;
}

