/*
 * FUN_18001aa8c at 18001aa8c
 * undefined __fastcall FUN_18001aa8c(int * param_1, undefined2 param_2, undefined8 param_3, undefined1 * param_4, undefined4 * param_5)
 * Address ranges: 18001aa8c-18001adb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001aa8c(int *param_1,undefined2 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined4 *param_5)

{
  undefined5 uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  bool bVar11;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  char local_98 [8];
  undefined4 *local_90;
  uint local_88;
  undefined1 *local_80;
  undefined4 local_78;
  uint *local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uVar4;
  
  FUN_1800fbea0(param_4,0,0x4a70);
  iVar6 = *param_1;
  local_70 = (uint *)(param_1 + 1);
  local_b8 = 0xc000c;
  local_b4 = 0x100010;
  local_90 = &local_b8;
  local_ac = 0x10000;
  bVar9 = iVar6 + 0x1ff00U < 2;
  local_a8 = 0x30003;
  uVar7 = 0;
  local_a4 = 0x20002;
  local_98[0] = iVar6 == -0x1ff00;
  local_a0 = 0x80008;
  param_4[0x4a6d] = (char)iVar6;
  local_88 = 0;
  local_78 = 0;
  local_58 = 0;
  param_4[0x4a6c] = 1;
  bVar11 = false;
  bVar3 = false;
  uVar10 = 0;
  local_b0 = param_2;
  local_ae = param_2;
  local_80 = param_4;
  if (bVar9) {
    do {
      uVar10 = local_88;
      if (bVar3) break;
      uVar10 = *local_70;
      *(int *)(local_80 + 0x4a68) = *(int *)(local_80 + 0x4a68) + 1;
      uVar5 = uVar10 & 0xffff;
      local_68 = CONCAT44(uVar10,uVar10) & 0xffff0000ffffffff;
      uStack_60 = 0x100000000;
      uVar1 = local_58._3_5_;
      local_58 = CONCAT53(local_58._3_5_,0x10f0f);
      bVar8 = bVar11;
      if (uVar5 < 0x20) {
        if (uVar5 == 0x1f) goto LAB_18001acf0;
        if (uVar5 < 0xd) {
          if (uVar5 != 0xc) {
            if (uVar5 < 7) {
              if (uVar5 == 6) {
LAB_18001acfb:
                local_58 = CONCAT53(uVar1,0x80f);
                goto LAB_18001ad01;
              }
              if (uVar5 == 0) goto LAB_18001acf0;
              if (uVar5 == 1) goto LAB_18001ad01;
              if (uVar5 != 2) {
                iVar6 = uVar5 - 4;
                if (iVar6 == 0) {
                  uStack_60 = 0x100000003;
                  bVar8 = bVar9;
                  goto LAB_18001ad05;
                }
LAB_18001abd9:
                if (iVar6 != 1) goto LAB_18001ad05;
              }
            }
            else {
              if (uVar5 == 7) goto LAB_18001acfb;
              if (uVar5 == 8) {
                local_58 = CONCAT53(local_58._3_5_,0x70f);
              }
              else if (uVar5 == 9) {
                local_58 = CONCAT53(local_58._3_5_,0xf0f);
              }
              else {
                iVar6 = uVar5 - 10;
                if (iVar6 != 0) goto LAB_18001abd9;
              }
            }
          }
LAB_18001abe2:
          uStack_60 = 0x100000002;
          bVar8 = bVar9;
        }
        else if (uVar5 < 0x14) {
          if (uVar5 != 0x13) {
            if (uVar5 != 0xd) {
              if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_18001acfb;
              if (uVar5 == 0x10) {
                local_58 = CONCAT53(uVar1,0xb0f);
                goto LAB_18001ad01;
              }
              if (uVar5 != 0x11) goto LAB_18001ad05;
              local_58 = CONCAT53(uVar1,0xe0f);
            }
            goto LAB_18001abe2;
          }
          local_58 = CONCAT62(local_58._2_6_,0x303);
LAB_18001ad01:
          uStack_60 = 0x100000001;
          bVar8 = bVar9;
        }
        else if (uVar5 == 0x14) {
          local_58._0_3_ = 0xf0f;
LAB_18001acad:
          local_58 = CONCAT53(uVar1,(uint3)local_58);
          uStack_60 = 0x400000002;
          bVar8 = bVar9;
        }
        else if (uVar5 == 0x15) {
          local_58 = CONCAT71(local_58._1_7_,7);
LAB_18001ac99:
          local_58._0_3_ = (uint3)(ushort)local_58;
          uStack_60 = 0x300000002;
          bVar8 = bVar9;
        }
        else {
          if (uVar5 == 0x16) {
            local_58._0_3_ = 0x70f;
            goto LAB_18001acad;
          }
          if (uVar5 == 0x17) {
            local_58 = CONCAT62(local_58._2_6_,0x707);
            goto LAB_18001ac99;
          }
          if (uVar5 == 0x18) {
            local_58 = CONCAT53(uVar1,0x703);
            uStack_60 = 0x200000002;
            bVar8 = bVar9;
          }
        }
LAB_18001ad05:
        uVar4 = FUN_18001a510(local_98);
        bVar2 = (byte)uVar4;
        bVar9 = bVar8;
      }
      else {
        if ((uVar5 == 0x4e) || (uVar5 == 0x4f)) goto LAB_18001acfb;
        if ((uVar5 != 0x51) && (uVar5 != 0xfffe)) {
          if (uVar5 != 0xffff) goto LAB_18001ad05;
          bVar9 = (uVar10 & 0xffff0000) == 0;
          bVar3 = true;
        }
LAB_18001acf0:
        uVar4 = FUN_18001a8b4(local_98);
        bVar2 = (byte)uVar4;
      }
      bVar9 = (bool)(bVar9 & bVar2);
      uVar10 = local_88;
    } while (bVar9 != false);
  }
  if (uVar10 == 0) {
    do {
      if (param_4[uVar7 + 0x10] != '\0') {
        param_4[uVar7] = (&DAT_180102ac8)[uVar7];
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x10);
  }
  else {
    while ((bVar9 != false && (uVar5 = (uint)uVar7, uVar5 < 0x10))) {
      if ((param_4[uVar7 + 0x10] == '\0') || (bVar3 = bVar11, (uVar10 >> (uVar5 & 0x1f) & 1) != 0))
      {
        bVar3 = true;
      }
      bVar9 = (bool)(bVar9 & bVar3);
      uVar7 = (ulonglong)(uVar5 + 1);
    }
  }
  if ((param_4[0x441] & 3) == 3) {
    bVar11 = bVar9;
  }
  if (bVar11 != false) {
    *param_5 = (int)((longlong)local_70 - (longlong)param_1 >> 2);
  }
  return;
}

