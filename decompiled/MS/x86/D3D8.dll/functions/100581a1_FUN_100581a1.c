/*
 * FUN_100581a1 at 100581a1
 * undefined __thiscall FUN_100581a1(void * this, int * param_1, int param_2, int param_3, char param_4)
 * Address ranges: 100581a1-10058a0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100581a1(void *this,int *param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  sbyte sVar10;
  undefined *puVar11;
  uint local_10;
  byte local_5;
  
  iVar3 = param_2;
  bVar9 = (char)param_3 * '\x03';
  iVar2 = *(int *)(param_2 + 0x19c);
  uVar8 = *(uint *)(param_2 + 0x180);
  uVar5 = (*(uint *)(iVar2 + 0x1c) & *(uint *)(iVar2 + 8)) >> (bVar9 & 0x1f);
  uVar6 = uVar5 & 7;
  if ((uVar6 != 0) == (bool)*(char *)(param_2 + 0x185)) {
    local_10 = 4;
  }
  else {
    local_10 = (uint)*(byte *)(param_2 + 0x184);
  }
  uVar7 = (*(uint *)(iVar2 + 0x20) & *(uint *)(iVar2 + 0xc)) >> (bVar9 & 0x1f) & 7;
  if (uVar7 == 1) {
    if (uVar8 == 0) {
      uVar8 = *(uint *)(param_2 + 0x158);
      if (uVar8 == 0) {
        uVar8 = FUN_100580a2(param_1,param_2,0);
        *(uint *)(param_2 + 0x158) = uVar8;
      }
      local_10 = 3;
    }
  }
  else {
    if (uVar7 == 2) {
      if (uVar8 != 0) goto LAB_100583fd;
      uVar8 = *(uint *)(param_2 + 0x154);
    }
    else {
      if ((uVar7 != 3) || (uVar8 != 0)) goto LAB_100583fd;
      if (*(int *)(param_2 + 0x15c) == 0) {
        if (*(int *)(param_2 + 0x158) == 0) {
          uVar8 = FUN_100580a2(param_1,param_2,0);
          *(uint *)(param_2 + 0x158) = uVar8;
        }
        piVar1 = (int *)(param_2 + 0x18);
        uVar8 = FUN_100a05ed((int)piVar1,3,'\x01');
        *(uint *)(param_2 + 0x15c) = uVar8;
        uVar8 = FUN_100a05ed((int)piVar1,1,'\x01');
        if ((*(uint *)(*(int *)(param_2 + 0x19c) + 0x44) >> 0x1d & 1) == 0) {
          FUN_100a138c(piVar1,param_1,0);
          FUN_100a138c(piVar1,param_1,0x32);
        }
        else {
          uVar7 = FUN_100a05ed((int)piVar1,3,'\x01');
          FUN_10056c44(param_1,param_2);
          FUN_100a138c((int *)(param_2 + 0x18),param_1,0x10);
          FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
          FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
          FUN_100a068b(param_2 + 0x18,uVar7);
        }
        FUN_100a068b(param_2 + 0x18,uVar8);
      }
      uVar8 = *(uint *)(param_2 + 0x15c);
    }
    local_10 = 3;
  }
LAB_100583fd:
  local_5 = 0xf;
  iVar2 = *(int *)(param_2 + 0x19c);
  if (((*(uint *)(iVar2 + 0x44) >> 0x1e & 1) != 0) ||
     (param_2._3_1_ = 1,
     ((*(uint *)(iVar2 + 0x1c) & *(uint *)(iVar2 + 8)) >> ((char)param_3 + 0x18U & 0x1f) & 1) == 0))
  {
    param_2._3_1_ = 0;
  }
  if (uVar8 == 0) {
    uVar7 = (*(uint *)(iVar2 + 0x14) & (*(uint **)(iVar3 + 0x19c))[4] & **(uint **)(iVar3 + 0x19c))
            >> (bVar9 & 0x1f) & 7;
    sVar10 = (sbyte)uVar7;
    if ((*(uint *)(iVar3 + 0x198) & 8 << sVar10) != 0) {
      local_10 = (*(uint *)(*(int *)(iVar3 + 0x19c) + 0x18) & *(uint *)(*(int *)(iVar3 + 0x19c) + 4)
                 ) >> sVar10 * '\x03' & 7;
      uVar8 = (*(code *)**(undefined4 **)this)
                        (param_1,iVar3,uVar7 + 7,0xf >> (4U - (char)local_10 & 0x1f) & 0xff);
      *(uint *)(iVar3 + 0x188) = uVar8;
    }
  }
  uVar4 = (undefined1)local_10;
  if (uVar6 == 0) {
    if (uVar8 != 0) {
      puVar11 = &DAT_100b27bc;
      if (param_2._3_1_ == 0) {
        puVar11 = &DAT_100b27b8;
      }
      if (param_4 != '\0') {
        if (local_10 != 4) {
          FUN_1005816d(iVar3);
          uVar8 = FUN_100a05ed(iVar3 + 0x18,4,'\x01');
          if (*(int *)(iVar3 + 0x18) == 0x10040) {
            FUN_100a138c((int *)(iVar3 + 0x18),param_1,0x36);
            uVar5 = 0x36;
          }
          else {
            uVar5 = 0x37;
          }
          FUN_100a138c((int *)(iVar3 + 0x18),param_1,uVar5);
          local_10 = 4;
        }
        if (*(int *)(iVar3 + 0x180) == 0) {
          *(uint *)(iVar3 + 0x180) = uVar8;
          *(undefined1 *)(iVar3 + 0x184) = uVar4;
          *(undefined1 *)(iVar3 + 0x185) = 0;
        }
      }
      FUN_100567c1(this,iVar3,param_1,0x36,param_3 + 5,puVar11[local_10 - 1],uVar8);
      local_5 = puVar11[local_10 - 1] ^ 0xf;
    }
  }
  else {
    local_5 = (&DAT_100b27bf)[uVar6] & ((param_2._3_1_ ^ 1) << 3 | 7);
    if (uVar8 == 0) {
      FUN_100567c1(this,iVar3,param_1,0x36,param_3 + 5,1,*(uint *)(iVar3 + 0xc0));
      if ((uVar5 & 6) != 0) {
        FUN_100567c1(this,iVar3,param_1,0x36,param_3 + 5,2,*(uint *)(iVar3 + 0xc0));
      }
      if (2 < uVar6) {
        FUN_100567c1(this,iVar3,param_1,0x36,param_3 + 5,2,*(uint *)(iVar3 + 0xc0));
      }
      if (((uVar5 & 4) != 0) || (param_2._3_1_ != 0)) {
        FUN_100567c1(this,iVar3,param_1,0x36,param_3 + 5,4,*(uint *)(iVar3 + 0xc0));
      }
    }
    else {
      if (((((local_10 < 2) || (local_10 < 3)) || (local_10 < 4)) &&
          (((local_10 != 1 && (local_10 != 2)) && (local_10 == 3)))) || (local_10 != 4)) {
        FUN_1005816d(iVar3);
        uVar8 = FUN_100a05ed(iVar3 + 0x18,4,'\x01');
        FUN_100a138c((int *)(iVar3 + 0x18),param_1,0x32);
      }
      if (*(int *)(iVar3 + 0x180) == 0) {
        *(uint *)(iVar3 + 0x180) = uVar8;
        *(undefined1 *)(iVar3 + 0x184) = uVar4;
        *(undefined1 *)(iVar3 + 0x185) = 1;
      }
      FUN_100567c1(this,iVar3,param_1,0x11,param_3 + 5,1,uVar8);
      if ((uVar5 & 6) != 0) {
        FUN_100567c1(this,iVar3,param_1,0x11,param_3 + 5,2,uVar8);
      }
      if (2 < uVar6) {
        FUN_100567c1(this,iVar3,param_1,0x11,param_3 + 5,4,uVar8);
      }
      if (((uVar5 & 4) != 0) || (param_2._3_1_ != 0)) {
        FUN_100567c1(this,iVar3,param_1,0x11,param_3 + 5,8,uVar8);
      }
    }
  }
  if (local_5 != 0) {
    if ((((local_5 == 1) || (local_5 == 2)) || (local_5 == 4)) || (local_5 == 8)) {
      iVar2 = 0;
      if (local_5 != 0) {
        for (; (local_5 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      FUN_100567c1(this,iVar3,param_1,0x36,param_3 + 5U,local_5,*(uint *)(iVar3 + 0xa8));
    }
    else {
      FUN_100567c1(this,iVar3,param_1,0x36,param_3 + 5U,local_5,*(uint *)(iVar3 + 0xac));
    }
  }
  return;
}

