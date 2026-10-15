/*
 * FUN_10058e31 at 10058e31
 * undefined __thiscall FUN_10058e31(void * this, int * param_1, uint param_2)
 * Address ranges: 10058e31-10059f25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10058e31(void *this,int *param_1,uint param_2)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  int *piVar11;
  uint local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_c;
  
  uVar4 = param_2;
  pcVar1 = (char *)(param_2 + 0x1ae);
  if (((*(uint *)(*(int *)(param_2 + 0x19c) + 0x44) >> 0x14 & 1) == 0) || (*pcVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  piVar11 = (int *)(param_2 + 0x18);
  local_2c = FUN_100a05ed((int)piVar11,3,'\x01');
  local_c = 0;
  FUN_10058b56(this,param_1,param_2);
  FUN_100567c1(this,param_2,param_1,0x36,2,8,*(uint *)(param_2 + 0x170));
  param_2 = 0;
  if (*pcVar1 == '\0') {
    if (*(char *)(uVar4 + 100) == '\0') {
      FUN_100567c1(this,uVar4,param_1,0x2032,2,7,*(uint *)(uVar4 + 0xc0));
    }
    else {
      uVar6 = FUN_100a05ed((int)piVar11,3,'\x01');
      FUN_100a138c(piVar11,param_1,0x2032);
      FUN_100567c1(this,uVar4,param_1,0x36,2,7,uVar6);
      FUN_100a068b((int)piVar11,uVar6);
    }
  }
  else {
    FUN_100a138c(piVar11,param_1,0x32);
    local_48 = 7;
    uVar6 = *(uint *)(*(int *)(uVar4 + 0x19c) + 0x28);
    if ((uVar6 & 0xe00000) == 0) {
      local_48 = 7;
      do {
        local_48 = local_48 - 1;
      } while ((uVar6 >> ((char)local_48 * '\x03' & 0x1fU) & 7) == 0);
    }
    piVar11 = (int *)(uVar4 + 0x18);
    if ((*(byte *)(uVar4 + 0x198) & 4) != 0) {
      FUN_1005a211(this,param_1,uVar4);
    }
    local_38 = 0;
    do {
      bVar10 = (char)local_38 * '\x03';
      if ((*(uint *)(*(int *)(uVar4 + 0x19c) + 0x28) >> (bVar10 & 0x1f) & 7) != 0) {
        local_10 = FUN_100a05ed((int)piVar11,1,'\x01');
        FUN_100a138c(piVar11,param_1,0x36);
        local_10 = local_10 | 0x10000000;
        uVar6 = *(uint *)(*(int *)(uVar4 + 0x19c) + 0x24) >> (bVar10 & 0x1f) & 7;
        if (uVar6 == 3) {
          local_18 = FUN_100a05ed((int)piVar11,3,'\x01');
          FUN_100a138c(piVar11,param_1,0x36);
          local_20 = 0;
          local_1c = 0;
        }
        else {
          local_18 = FUN_100a05ed((int)piVar11,3,'\x01');
          FUN_100a138c(piVar11,param_1,0);
          local_20 = 0;
          local_1c = 0;
          if (uVar6 != 4) {
            local_20 = FUN_100a05ed((int)piVar11,1,'\x01');
            FUN_100a138c(piVar11,param_1,0x10);
            FUN_100a138c(piVar11,param_1,0x4b);
            FUN_100a05ed((int)piVar11,3,'\0');
            FUN_100a138c(piVar11,param_1,0x32);
            FUN_100a138c(piVar11,param_1,0x38);
            local_1c = FUN_100a05ed((int)piVar11,1,'\x01');
            FUN_100a138c(piVar11,param_1,0x10);
            if (*piVar11 == 0x10040) {
              FUN_100a138c(piVar11,param_1,0xe);
            }
            else {
              FUN_100a138c(piVar11,param_1,0x81);
            }
            FUN_100a138c(piVar11,param_1,0x33);
            FUN_100a138c(piVar11,param_1,0x34);
            if (local_20 != 0) {
              if ((local_c == 0) && ((*(uint *)(*(int *)(uVar4 + 0x19c) + 0x44) >> 0x14 & 1) != 0))
              {
                local_c = FUN_100a05ed((int)piVar11,3,'\x01');
                FUN_100a138c(piVar11,param_1,0x57);
              }
              FUN_100a05ed((int)piVar11,1,'\0');
              FUN_100a138c(piVar11,param_1,0x1d);
              FUN_100a138c(piVar11,param_1,0x4001f);
            }
          }
        }
        bVar10 = *(byte *)(uVar4 + 0x1a4) >> 2 & 1;
        bVar3 = true;
        local_34 = 0;
        if (bVar10 == 0) {
LAB_10059396:
          FUN_10056c44(param_1,uVar4);
        }
        else {
          local_34 = FUN_100a05ed((int)piVar11,3,'\x01');
          FUN_10059f26(uVar4,param_1);
          if ((uVar6 != 2) && ((*(uint *)(*(int *)(uVar4 + 0x19c) + 0x44) >> 0x14 & 1) == 0)) {
            FUN_100a068b((int)piVar11,local_18);
            local_18 = 0;
            bVar3 = false;
          }
          FUN_10056c44(param_1,uVar4);
          if (bVar3) goto LAB_10059396;
        }
        FUN_100a068b((int)piVar11,local_20);
        local_28 = 0;
        if (uVar6 == 2) {
          local_28 = FUN_100a05ed((int)piVar11,1,'\x01');
          uVar6 = FUN_100a05ed((int)piVar11,1,'\x01');
          FUN_100a138c(piVar11,param_1,0x10);
          FUN_100a138c(piVar11,param_1,0x1d);
          FUN_100a138c(piVar11,param_1,0);
          FUN_100a138c(piVar11,param_1,0x200e);
          FUN_10058d6f(param_1,uVar4);
          FUN_100a138c(piVar11,param_1,0x37);
          FUN_100a068b((int)piVar11,uVar6);
        }
        uVar6 = *(uint *)(*(int *)(uVar4 + 0x19c) + 0x44) >> 0x17 & 1;
        uVar7 = FUN_100a05ed((int)piVar11,1,'\x01');
        FUN_100a138c(piVar11,param_1,uVar6 << 0xd | 0x10);
        if (uVar6 == 0) {
          FUN_100a138c(piVar11,param_1,0x34);
        }
        if ((*(uint *)(*(int *)(uVar4 + 0x19c) + 0x44) >> 0x14 & 1) == 0) {
          FUN_100a068b((int)piVar11,local_18);
          local_18 = 0;
        }
        FUN_100a068b((int)piVar11,local_34);
        uVar6 = FUN_100a05ed((int)piVar11,3,'\x01');
        FUN_100a138c(piVar11,param_1,0x38);
        FUN_100a068b((int)piVar11,uVar7);
        FUN_100a138c(piVar11,param_1,0x38);
        if (local_28 != 0) {
          FUN_100a138c(piVar11,param_1,0x38);
        }
        FUN_100a138c(piVar11,param_1,0x32);
        if ((*(uint *)(*(int *)(uVar4 + 0x19c) + 0x44) >> 0x14 & 1) == 0) {
          FUN_100a068b((int)piVar11,local_10);
          local_10 = 0;
        }
        if ((local_38 == local_48) && (local_20 == 0)) {
          iVar8 = 1;
        }
        else {
          iVar8 = 0;
        }
        uVar7 = iVar8 << 0xd;
        bVar5 = (byte)iVar8;
        if (local_1c == 0) {
          if ((bVar5 != 0) && (*(char *)(uVar4 + 100) == '\0')) {
            FUN_100567c1(this,uVar4,param_1,0x2000,2,7,uVar6);
            goto LAB_10059784;
          }
          param_2 = (uint)(param_2._3_1_ | bVar5) << 0x18;
          FUN_100a138c(piVar11,param_1,uVar7);
        }
        else if ((bVar5 == 0) || (*(char *)(uVar4 + 100) != '\0')) {
          param_2 = (uint)(param_2._3_1_ | bVar5) << 0x18;
          FUN_100a138c(piVar11,param_1,uVar7 | 0x32);
        }
        else {
          FUN_100567c1(this,uVar4,param_1,0x2032,2,7,local_1c);
LAB_10059784:
          FUN_100a068b((int)piVar11,local_2c);
          local_2c = 0;
        }
        FUN_100a068b((int)piVar11,uVar6);
        uVar6 = local_c;
        if ((*(uint *)(*(int *)(uVar4 + 0x19c) + 0x44) >> 0x14 & 1) != 0) {
          uVar6 = FUN_100a05ed((int)piVar11,3,'\x01');
          FUN_100a138c(piVar11,param_1,0x36);
          FUN_100a138c(piVar11,param_1,0x36);
          FUN_100a138c(piVar11,param_1,0x36);
          local_34 = *(uint *)(uVar4 + 0x14c);
          if ((*(uint *)(*(int *)(uVar4 + 0x19c) + 0x44) >> 0x1d & 1) == 0) {
            local_34 = FUN_100a05ed((int)piVar11,3,'\x01');
            FUN_100a138c(piVar11,param_1,0x36);
            FUN_100a138c(piVar11,param_1,0x36);
            FUN_100a138c(piVar11,param_1,0x36);
            FUN_100a138c(piVar11,param_1,0);
          }
          FUN_100a138c(piVar11,param_1,0);
          FUN_10056c44(param_1,uVar4);
          if (local_34 != *(uint *)(uVar4 + 0x14c)) {
            FUN_100a068b((int)piVar11,local_34);
          }
          FUN_100a138c(piVar11,param_1,0);
          FUN_100a068b((int)piVar11,local_18);
          local_18 = 0;
          if (bVar10 == 0) {
            FUN_10056c44(param_1,uVar4);
          }
          else {
            uVar9 = FUN_100a05ed((int)piVar11,3,'\x01');
            FUN_10059f26(uVar4,param_1);
            FUN_10056c44(param_1,uVar4);
            FUN_100a068b((int)piVar11,uVar9);
          }
          FUN_100a068b((int)piVar11,uVar6);
          if (((*(uint *)(*(int *)(uVar4 + 0x19c) + 0x44) >> 0x17 & 1) != 0) ||
             (local_3c = 0,
             ((byte)((uint)*(undefined4 *)(*(int *)(uVar4 + 0x19c) + 0x28) >> 0x1e) & 1) != 0)) {
            local_3c = 0x2000;
          }
          uVar6 = FUN_100a05ed((int)piVar11,1,'\x01');
          FUN_100a138c(piVar11,param_1,local_3c | 0x10);
          if (local_3c == 0) {
            FUN_100a138c(piVar11,param_1,0x34);
          }
          FUN_10058d6f(param_1,uVar4);
          FUN_100a068b((int)piVar11,uVar6);
          uVar9 = FUN_100a05ed((int)piVar11,3,'\x01');
          FUN_100a138c(piVar11,param_1,0x38);
          FUN_100a138c(piVar11,param_1,0x38);
          FUN_100a068b((int)piVar11,local_10);
          local_10 = 0;
          if (local_28 != 0) {
            FUN_100a138c(piVar11,param_1,0x38);
            FUN_100a068b((int)piVar11,local_28);
            local_28 = 0;
          }
          uVar6 = uVar9;
          if (local_1c == 0) {
            if (local_c == 0) goto LAB_10059c17;
            if ((bVar5 == 0) || (*(char *)(uVar4 + 100) != '\0')) {
              param_2 = (uint)(byte)(param_2._3_1_ | bVar5 * '\x02') << 0x18;
              FUN_100a138c(piVar11,param_1,uVar7);
            }
            else {
              FUN_100567c1(this,uVar4,param_1,0x2000,3,7,uVar9);
LAB_10059b80:
              FUN_100a068b((int)piVar11,local_c);
              local_c = 0;
            }
          }
          else if ((bVar5 == 0) || (*(char *)(uVar4 + 100) != '\0')) {
            param_2 = (uint)(byte)(param_2._3_1_ | bVar5 * '\x02') << 0x18;
            if (local_c == 0) {
              FUN_100a138c(piVar11,param_1,uVar7 | 0x38);
              goto LAB_10059c17;
            }
            FUN_100a138c(piVar11,param_1,uVar7 | 0x32);
          }
          else {
            if (local_c != 0) {
              FUN_100567c1(this,uVar4,param_1,0x2032,3,7,local_1c);
              goto LAB_10059b80;
            }
            FUN_100567c1(this,uVar4,param_1,0x2038,3,7,local_1c);
          }
          uVar6 = local_c;
          if (local_c != uVar9) {
            FUN_100a068b((int)piVar11,uVar9);
          }
        }
LAB_10059c17:
        local_c = uVar6;
        FUN_100a068b((int)piVar11,local_1c);
        FUN_100a068b((int)piVar11,local_18);
        FUN_100a068b((int)piVar11,local_28);
        FUN_100a068b((int)piVar11,local_10);
        if (local_20 != 0) {
          FUN_100a138c(piVar11,param_1,0x15);
        }
      }
      local_38 = local_38 + 1;
    } while (local_38 < 8);
    FUN_1005a295(this,uVar4,4);
    if (local_2c != 0) {
      uVar6 = ~((param_2 >> 0x18) << 0xd) & 0x2000;
      if ((uVar6 == 0) || (*(char *)(uVar4 + 100) == '\0')) {
        FUN_100567c1(this,uVar4,param_1,uVar6 | 0x36,2,7,local_2c);
      }
      else {
        FUN_100a138c(piVar11,param_1,0x2036);
        FUN_100567c1(this,uVar4,param_1,0x36,2,7,local_2c);
      }
    }
  }
  piVar11 = (int *)(uVar4 + 0x18);
  if (bVar2) {
    if (local_c != 0) {
      uVar6 = ~((param_2 >> 0x18) << 0xc) & 0x2000;
      if ((uVar6 == 0) || (*(char *)(uVar4 + 100) == '\0')) {
        FUN_100567c1(this,uVar4,param_1,uVar6 | 0x36,3,7,local_c);
      }
      else {
        FUN_100a138c(piVar11,param_1,0x2036);
        FUN_100567c1(this,uVar4,param_1,0x36,3,7,local_c);
      }
    }
  }
  else {
    FUN_100567c1(this,uVar4,param_1,0x36,3,(*(char *)(uVar4 + 0x1ac) != '\0') * '\b' + 7,
                 *(uint *)(uVar4 + 0xac));
  }
  FUN_100a068b((int)piVar11,local_c);
  FUN_100a068b((int)piVar11,local_2c);
  return;
}

