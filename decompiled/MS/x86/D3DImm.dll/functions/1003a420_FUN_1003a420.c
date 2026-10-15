/*
 * FUN_1003a420 at 1003a420
 * undefined __thiscall FUN_1003a420(void * this, int * param_1, uint param_2, char param_3)
 * Address ranges: 1003a420-1003b8cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003a420(void *this,int *param_1,uint param_2,char param_3)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint local_54;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  
  uVar5 = param_2;
  pcVar1 = (char *)(param_2 + 0x192);
  if (((*(uint *)(*(int *)(param_2 + 0x180) + 0x44) >> 0x14 & 1) == 0) || (*pcVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  piVar13 = (int *)(param_2 + 0x10);
  local_2c = FUN_10056ee5((int)piVar13,3,'\x01');
  local_1c = 0;
  FUN_1003a14d(this,param_1,param_2);
  FUN_100380e6(this,param_2,param_1,0x36,2,8,*(uint *)(param_2 + 0x154));
  param_2 = 0;
  if (*pcVar1 == '\0') {
    if (*(char *)(uVar5 + 0x5c) == '\0') {
      FUN_100380e6(this,uVar5,param_1,0x2032,2,7,*(uint *)(uVar5 + 0xb0));
    }
    else {
      uVar8 = FUN_10056ee5((int)piVar13,3,'\x01');
      FUN_10057c8a(piVar13,param_1,0x2032);
      FUN_100380e6(this,uVar5,param_1,0x36,2,7,uVar8);
      FUN_10056fd9((int)piVar13,uVar8);
    }
  }
  else {
    FUN_10057c8a(piVar13,param_1,0x32);
    local_54 = 7;
    uVar8 = *(uint *)(*(int *)(uVar5 + 0x180) + 0x28);
    if ((uVar8 & 0xe00000) == 0) {
      local_54 = 7;
      do {
        local_54 = local_54 - 1;
      } while ((uVar8 >> ((char)local_54 * '\x03' & 0x1fU) & 7) == 0);
    }
    if ((*(byte *)(uVar5 + 0x17c) & 4) != 0) {
      FUN_1003bc04(this,param_1,uVar5);
    }
    local_38 = 0;
    do {
      piVar13 = (int *)(uVar5 + 0x10);
      cVar3 = (char)local_38;
      if ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x28) >> (cVar3 * '\x03' & 0x1fU) & 7) != 0) {
        local_c = FUN_10056ee5((int)piVar13,1,'\x01');
        FUN_10057c8a(piVar13,param_1,0x36);
        local_c = local_c | 0x10000000;
        uVar8 = *(uint *)(*(int *)(uVar5 + 0x180) + 0x24) >> (cVar3 * '\x03' & 0x1fU) & 7;
        if (uVar8 == 3) {
          local_14 = FUN_10056ee5((int)piVar13,3,'\x01');
          FUN_10057c8a(piVar13,param_1,0x36);
          local_20 = 0;
          local_10 = 0;
          local_34 = 0;
        }
        else if (uVar8 == 4) {
          local_14 = FUN_10056ee5((int)piVar13,3,'\x01');
          FUN_10057c8a(piVar13,param_1,0x36);
          local_20 = 0;
          local_10 = 0;
          local_34 = 0;
        }
        else {
          local_14 = FUN_10056ee5((int)piVar13,3,'\x01');
          FUN_10057c8a(piVar13,param_1,0);
          local_20 = 0;
          local_10 = 0;
          local_34 = 0;
          if (uVar8 != 3) {
            local_20 = 0;
            local_10 = 0;
            local_34 = 0;
            if (uVar8 != 4) {
              local_20 = FUN_10056ee5((int)piVar13,1,'\x01');
              FUN_10057c8a(piVar13,param_1,0x10);
              FUN_10057c8a(piVar13,param_1,0x4b);
              local_34 = 0;
              if (param_3 != '\0') {
                if ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x24) >> (cVar3 + 0x18U & 0x1f) & 1) == 0)
                {
                  uVar9 = FUN_10056ee5((int)piVar13,1,'\x01');
                  uVar10 = FUN_10056ee5((int)piVar13,1,'\x01');
                  uVar11 = FUN_10056ee5(uVar5 + 0x10,1,'\x01');
                  FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0);
                  FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0xe);
                  FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x27);
                  FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x1d);
                  FUN_10057c8a((int *)(uVar5 + 0x10),param_1,1);
                  FUN_10057c8a((int *)(uVar5 + 0x10),param_1,1);
                  iVar12 = uVar5 + 0x10;
                  FUN_10056fd9(iVar12,uVar10);
                  FUN_10056fd9(iVar12,uVar11);
                  FUN_10056fd9(iVar12,uVar9);
                  local_34 = 0;
                }
                else {
                  local_34 = local_20;
                  if ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x14 & 1) == 0) {
                    FUN_10056fd9((int)piVar13,local_20);
                    local_34 = 0;
                  }
                  local_20 = 0;
                }
              }
              piVar13 = (int *)(uVar5 + 0x10);
              FUN_10056ee5((int)piVar13,3,'\0');
              FUN_10057c8a(piVar13,param_1,0x32);
              FUN_10057c8a(piVar13,param_1,0x38);
              local_10 = FUN_10056ee5((int)piVar13,1,'\x01');
              FUN_10057c8a(piVar13,param_1,0x10);
              if ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x24) >> (cVar3 + 0x18U & 0x1f) & 1) == 0) {
                if (param_3 == '\0') {
                  if (*piVar13 == 0x10040) {
                    FUN_10057c8a(piVar13,param_1,0xe);
                  }
                  else {
                    FUN_10057c8a(piVar13,param_1,0x81);
                  }
                  FUN_10057c8a(piVar13,param_1,0x33);
                  FUN_10057c8a(piVar13,param_1,0x34);
                }
              }
              else {
                FUN_10057c8a(piVar13,param_1,0x34);
                if (*piVar13 == 0x10040) {
                  FUN_10057c8a(piVar13,param_1,0xe);
                }
                else {
                  FUN_10057c8a(piVar13,param_1,0x81);
                }
              }
              if (local_20 != 0) {
                if ((local_1c == 0) &&
                   ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x14 & 1) != 0)) {
                  local_1c = FUN_10056ee5((int)piVar13,3,'\x01');
                  FUN_10057c8a(piVar13,param_1,0x57);
                }
                FUN_10056ee5((int)piVar13,1,'\0');
                FUN_10057c8a(piVar13,param_1,0x1d);
                FUN_10057c8a(piVar13,param_1,0x4001f);
              }
            }
          }
        }
        piVar13 = (int *)(uVar5 + 0x10);
        bVar6 = *(byte *)(uVar5 + 0x188) >> 2 & 1;
        bVar4 = true;
        local_3c = 0;
        if (bVar6 == 0) {
LAB_1003ac50:
          FUN_1003830f(param_1,uVar5);
        }
        else {
          local_3c = FUN_10056ee5((int)piVar13,3,'\x01');
          FUN_1003b8cc(uVar5,param_1);
          if ((uVar8 != 2) && ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x14 & 1) == 0)) {
            FUN_10056fd9((int)piVar13,local_14);
            local_14 = 0;
            bVar4 = false;
          }
          FUN_1003830f(param_1,uVar5);
          if (bVar4) goto LAB_1003ac50;
        }
        FUN_10056fd9((int)piVar13,local_20);
        local_28 = 0;
        if (uVar8 == 2) {
          local_28 = FUN_10056ee5((int)piVar13,1,'\x01');
          uVar8 = FUN_10056ee5((int)piVar13,1,'\x01');
          FUN_10057c8a(piVar13,param_1,0x10);
          FUN_10057c8a(piVar13,param_1,0x1d);
          FUN_10057c8a(piVar13,param_1,0);
          FUN_10057c8a(piVar13,param_1,0x200e);
          FUN_1003a366(param_1,uVar5);
          FUN_10057c8a(piVar13,param_1,0x37);
          FUN_10056fd9((int)piVar13,uVar8);
        }
        uVar8 = *(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x17 & 1;
        uVar9 = FUN_10056ee5((int)piVar13,1,'\x01');
        FUN_10057c8a(piVar13,param_1,uVar8 << 0xd | 0x10);
        if (uVar8 == 0) {
          FUN_10057c8a(piVar13,param_1,0x34);
        }
        if ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x14 & 1) == 0) {
          FUN_10056fd9((int)piVar13,local_14);
          local_14 = 0;
        }
        FUN_10056fd9((int)piVar13,local_3c);
        uVar8 = FUN_10056ee5((int)piVar13,3,'\x01');
        FUN_10057c8a(piVar13,param_1,0x38);
        FUN_10056fd9((int)piVar13,uVar9);
        FUN_10057c8a(piVar13,param_1,0x38);
        if (local_28 != 0) {
          FUN_10057c8a(piVar13,param_1,0x38);
        }
        FUN_10057c8a(piVar13,param_1,0x32);
        if ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x14 & 1) == 0) {
          FUN_10056fd9((int)piVar13,local_c);
          local_c = 0;
        }
        if ((local_38 == local_54) && (local_20 == 0)) {
          iVar12 = 1;
        }
        else {
          iVar12 = 0;
        }
        uVar9 = iVar12 << 0xd;
        bVar7 = (byte)iVar12;
        if (local_10 == 0) {
          if ((bVar7 != 0) && (*(char *)(uVar5 + 0x5c) == '\0')) {
            FUN_100380e6(this,uVar5,param_1,0x2000,2,7,uVar8);
            goto LAB_1003b060;
          }
          param_2 = (uint)(param_2._3_1_ | bVar7) << 0x18;
          FUN_10057c8a(piVar13,param_1,uVar9);
        }
        else if ((bVar7 == 0) || (*(char *)(uVar5 + 0x5c) != '\0')) {
          param_2 = (uint)(param_2._3_1_ | bVar7) << 0x18;
          FUN_10057c8a(piVar13,param_1,uVar9 | 0x32);
        }
        else {
          FUN_100380e6(this,uVar5,param_1,0x2032,2,7,local_10);
LAB_1003b060:
          FUN_10056fd9((int)piVar13,local_2c);
          local_2c = 0;
        }
        FUN_10056fd9((int)piVar13,uVar8);
        uVar8 = local_1c;
        if ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x14 & 1) != 0) {
          uVar8 = FUN_10056ee5((int)piVar13,3,'\x01');
          FUN_10057c8a(piVar13,param_1,0x36);
          FUN_10057c8a(piVar13,param_1,0x36);
          FUN_10057c8a(piVar13,param_1,0x36);
          local_3c = *(uint *)(uVar5 + 0x130);
          if ((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x1d & 1) == 0) {
            local_3c = FUN_10056ee5((int)piVar13,3,'\x01');
            FUN_10057c8a(piVar13,param_1,0x36);
            FUN_10057c8a(piVar13,param_1,0x36);
            FUN_10057c8a(piVar13,param_1,0x36);
            FUN_10057c8a(piVar13,param_1,0);
          }
          FUN_10057c8a(piVar13,param_1,0);
          FUN_1003830f(param_1,uVar5);
          if (local_3c != *(uint *)(uVar5 + 0x130)) {
            FUN_10056fd9((int)piVar13,local_3c);
          }
          FUN_10057c8a(piVar13,param_1,0);
          FUN_10056fd9((int)piVar13,local_14);
          local_14 = 0;
          if (bVar6 == 0) {
            FUN_1003830f(param_1,uVar5);
          }
          else {
            uVar10 = FUN_10056ee5((int)piVar13,3,'\x01');
            FUN_1003b8cc(uVar5,param_1);
            FUN_1003830f(param_1,uVar5);
            FUN_10056fd9((int)piVar13,uVar10);
          }
          FUN_10056fd9((int)piVar13,uVar8);
          if (((*(uint *)(*(int *)(uVar5 + 0x180) + 0x44) >> 0x17 & 1) != 0) ||
             (local_40 = 0,
             ((byte)((uint)*(undefined4 *)(*(int *)(uVar5 + 0x180) + 0x28) >> 0x1e) & 1) != 0)) {
            local_40 = 0x2000;
          }
          uVar8 = FUN_10056ee5((int)piVar13,1,'\x01');
          FUN_10057c8a(piVar13,param_1,local_40 | 0x10);
          FUN_10056ee5((int)piVar13,1,'\0');
          FUN_10057c8a(piVar13,param_1,0x31);
          FUN_10057c8a(piVar13,param_1,1);
          if (local_40 == 0) {
            FUN_10057c8a(piVar13,param_1,0x34);
          }
          FUN_1003a366(param_1,uVar5);
          if (local_34 != 0) {
            FUN_10057c8a(piVar13,param_1,0xe);
            FUN_10056fd9((int)piVar13,local_34);
          }
          FUN_10056fd9((int)piVar13,uVar8);
          uVar10 = FUN_10056ee5((int)piVar13,3,'\x01');
          FUN_10057c8a(piVar13,param_1,0x38);
          FUN_10057c8a(piVar13,param_1,0x38);
          FUN_10056fd9((int)piVar13,local_c);
          local_c = 0;
          if (local_28 != 0) {
            FUN_10057c8a(piVar13,param_1,0x38);
            FUN_10056fd9((int)piVar13,local_28);
            local_28 = 0;
          }
          FUN_10056ee5((int)piVar13,1,'\0');
          FUN_10057c8a(piVar13,param_1,0x27);
          FUN_10057c8a(piVar13,param_1,1);
          uVar8 = uVar10;
          if (local_10 == 0) {
            if (local_1c == 0) goto LAB_1003b641;
            if ((bVar7 != 0) && (*(char *)(uVar5 + 0x5c) == '\0')) {
              FUN_100380e6(this,uVar5,param_1,0x2000,3,7,uVar10);
              goto LAB_1003b528;
            }
            param_2 = (uint)(byte)(param_2._3_1_ | bVar7 * '\x02') << 0x18;
            FUN_10057c8a(piVar13,param_1,uVar9);
          }
          else if ((bVar7 == 0) || (*(char *)(uVar5 + 0x5c) != '\0')) {
            param_2 = (uint)(byte)(param_2._3_1_ | bVar7 * '\x02') << 0x18;
            if (local_1c == 0) {
              FUN_10057c8a(piVar13,param_1,uVar9 | 0x38);
              goto LAB_1003b641;
            }
            FUN_10057c8a(piVar13,param_1,uVar9 | 0x32);
          }
          else if (local_1c == 0) {
            FUN_100380e6(this,uVar5,param_1,0x2038,3,7,local_10);
          }
          else {
            FUN_100380e6(this,uVar5,param_1,0x2032,3,7,local_10);
LAB_1003b528:
            FUN_10056fd9((int)piVar13,local_1c);
            local_1c = 0;
          }
          uVar8 = local_1c;
          if (local_1c != uVar10) {
            FUN_10056fd9((int)piVar13,uVar10);
          }
        }
LAB_1003b641:
        local_1c = uVar8;
        FUN_10056fd9((int)piVar13,local_10);
        FUN_10056fd9((int)piVar13,local_14);
        FUN_10056fd9((int)piVar13,local_28);
        FUN_10056fd9((int)piVar13,local_c);
        if (local_20 != 0) {
          FUN_10057c8a(piVar13,param_1,0x15);
        }
      }
      local_38 = local_38 + 1;
    } while (local_38 < 8);
    FUN_1003bc88(this,uVar5,4);
    if (local_2c != 0) {
      uVar8 = ~((param_2 >> 0x18) << 0xd) & 0x2000;
      if ((uVar8 == 0) || (*(char *)(uVar5 + 0x5c) == '\0')) {
        FUN_100380e6(this,uVar5,param_1,uVar8 | 0x36,2,7,local_2c);
      }
      else {
        FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x2036);
        FUN_100380e6(this,uVar5,param_1,0x36,2,7,local_2c);
      }
    }
  }
  if (bVar2) {
    if (local_1c != 0) {
      uVar8 = ~((param_2 >> 0x18) << 0xc) & 0x2000;
      if ((uVar8 == 0) || (*(char *)(uVar5 + 0x5c) == '\0')) {
        FUN_100380e6(this,uVar5,param_1,uVar8 | 0x36,3,7,local_1c);
      }
      else {
        FUN_10057c8a((int *)(uVar5 + 0x10),param_1,0x2036);
        FUN_100380e6(this,uVar5,param_1,0x36,3,7,local_1c);
      }
    }
  }
  else {
    FUN_100380e6(this,uVar5,param_1,0x36,3,(*(char *)(uVar5 + 400) != '\0') * '\b' + 7,
                 *(uint *)(uVar5 + 0xa4));
  }
  FUN_10056fd9(uVar5 + 0x10,local_1c);
  FUN_10056fd9(uVar5 + 0x10,local_2c);
  return;
}

