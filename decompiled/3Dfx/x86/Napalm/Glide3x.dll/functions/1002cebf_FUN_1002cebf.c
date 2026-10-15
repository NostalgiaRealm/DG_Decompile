/*
 * FUN_1002cebf at 1002cebf
 * undefined4 __thiscall FUN_1002cebf(void * this, uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 1002cebf-1002d4e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002cebf(void *this,uint param_1,int param_2,int *param_3,int *param_4)

{
  int *this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  LPCSTR lpOutputString;
  undefined1 uVar4;
  uint local_214 [2];
  byte local_20c;
  uint local_208;
  uint local_204;
  undefined1 *local_1e4;
  undefined1 local_1e0;
  char local_1df;
  char acStack_1dc [4];
  byte bStack_1d8;
  byte bStack_1d7;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_f2 [146];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_14;
  int local_10;
  
  FUN_100561f1((int *)local_214,0,0x1bc);
  local_1e4 = local_f2;
  local_214[0] = 0x40;
  local_1e0 = 0x10;
  if (param_3 != (int *)0xa000) {
    if ((param_3 == (int *)0xa100) || (param_3 == (int *)0xb000)) {
      local_214[0] = 0x41;
    }
    else if (param_3 == (int *)0xc000) {
      local_214[0] = 0x51;
    }
  }
  local_1c4 = 0x110400;
  local_1c0 = 0x410400;
  local_1bc = 0x20000d00;
  local_1d4 = 0x110800;
  local_1d0 = 0x210800;
  local_1cc = 0x410800;
  local_1c8 = 0x410801;
  FUN_10024cd9((int)this,param_1,(int)local_214);
  this_00 = param_4;
  uVar1 = *(uint *)((int)this + 0x8c) & 0xff;
  uVar4 = 1;
  if (uVar1 == 1) {
    bStack_1d8 = bStack_1d8 | 2;
    local_60 = uVar4;
  }
  else if (uVar1 == 2) {
    bStack_1d8 = bStack_1d8 | 1;
    local_60 = uVar4;
  }
  else if (uVar1 == 3) {
    bStack_1d8 = bStack_1d8 | 4;
  }
  if ((*(uint *)((int)this + 0x8c) & 0x300) == 0x100) {
    local_5f = uVar4;
  }
  if ((*(int *)((int)this + 0x78) == 0) || (local_5e = uVar4, *(int *)((int)this + 0x78) == 7)) {
    local_5e = 0;
  }
  iVar2 = ((uint)(*(int *)((int)this + 0x74) != 0) + *(int *)((int)this + 0xac) * 2) * 0x10;
  if (((*(int *)(&DAT_1005eed8 + iVar2) != 0xff) || (*(int *)(&DAT_1005eedc + iVar2) != 0xff)) ||
     (*(int *)(&DAT_1005eee0 + iVar2) != 0xff)) {
    local_5d = uVar4;
  }
  uVar1 = *(uint *)((int)this + 0x28) & *(uint *)((int)this + 0x24);
  if (uVar1 == 1) {
LAB_1002d03d:
    bStack_1d7 = bStack_1d7 | 4;
    local_5c = uVar4;
  }
  else {
    if (uVar1 != 2) {
      if (uVar1 == 3) goto LAB_1002d03d;
      if (uVar1 != 4) goto LAB_1002d047;
    }
    bStack_1d8 = bStack_1d8 | 1;
    local_5c = uVar4;
  }
LAB_1002d047:
  if ((*(int *)((int)this + 0x1c) == 0x400) || (*(int *)((int)this + 0x1c) == 0x404)) {
    local_5b = uVar4;
  }
  local_3c = 1;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_50 = 0x43425844;
  local_34 = 3;
  FUN_1004e63f(param_4,&local_50,0x2c);
  *(int *)(*this_00 + 0x20) = this_00[1] - *this_00;
  uVar3 = FUN_10023e79(this_00,(int)local_214);
  if ((char)uVar3 != '\0') {
    *(int *)(*this_00 + 0x24) = this_00[1] - *this_00;
    uVar3 = FUN_10024028(this_00);
    if ((char)uVar3 != '\0') {
      *(int *)(*this_00 + 0x28) = this_00[1] - *this_00;
      FUN_1001d8cf(&local_14,0x200);
      param_3 = (int *)FUN_1004e802((int *)&local_14,local_214[0]);
      FUN_1001d8cf(&local_24,0x80);
      FUN_1002c6e3((int)this,(int *)local_214,(int *)&local_24);
      FUN_1004e679((int *)&local_24,1);
      FUN_1004ea00(local_214[0],(int *)&local_14);
      if ((local_20c & 1) != 0) {
        FUN_1004ea7c(local_214[0],(int *)&local_14);
      }
      if ((local_20c & 2) != 0) {
        FUN_1004ea7c(local_214[0],(int *)&local_14);
      }
      uVar1 = 0;
      do {
        if ((local_204 & 1 << ((byte)uVar1 & 0x1f)) != 0) {
          iVar2 = FUN_1004e7bd(local_214[0]);
          if (((iVar2 == 0x40) || (iVar2 == 0x41)) || (iVar2 == 0x50)) {
            FUN_1004e679((int *)&local_14,3);
          }
          else if (iVar2 == 0x51) {
            FUN_1004e9b5((int *)&local_14);
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      uVar1 = 0;
      do {
        if ((local_208 & 1 << ((char)uVar1 + 0x10U & 0x1f)) != 0) {
          iVar2 = FUN_1004e7bd(local_214[0]);
          if (((iVar2 == 0x40) || (iVar2 == 0x41)) || (iVar2 == 0x50)) {
            FUN_1004e999((int *)&local_14);
          }
          else if (iVar2 == 0x51) {
            FUN_1004e9d8((int *)&local_14);
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      if ((local_208 & 0x100) != 0) {
        FUN_1004e154(local_214,(int *)&local_14);
      }
      if ((local_208 & 0x200) != 0) {
        FUN_1004e154(local_214,(int *)&local_14);
      }
      if ((local_208 & 0x400) != 0) {
        FUN_1004e154(local_214,(int *)&local_14);
      }
      if ((local_208 & 0x1000) != 0) {
        FUN_1004e154(local_214,(int *)&local_14);
      }
      uVar1 = 0;
      do {
        if ((local_208 & 1 << ((char)uVar1 + 0x14U & 0x1f)) != 0) {
          FUN_1004e154(local_214,(int *)&local_14);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      uVar1 = 0;
      do {
        if ((local_208 & 1 << ((char)uVar1 + 0x18U & 0x1f)) != 0) {
          FUN_1004e154(local_214,(int *)&local_14);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      if (bStack_1d7 != 0) {
        FUN_1004e679((int *)&local_14,4);
      }
      if (bStack_1d8 != 0) {
        FUN_1004eb38((int *)&local_14);
      }
      uVar1 = 0;
      do {
        if (acStack_1dc[uVar1] != '\0') {
          FUN_1004eb38((int *)&local_14);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      if (acStack_1dc[3] != '\0') {
        FUN_1004eb38((int *)&local_14);
      }
      FUN_1004e679((int *)&local_14,3);
      FUN_1004e679((int *)&local_14,3);
      if (local_1df != '\0') {
        FUN_1004e679((int *)&local_14,2);
      }
      FUN_1004e63f(&local_14,local_24,local_20 - (int)local_24);
      local_14[1] = (local_10 - (int)local_14) + -8;
      local_14[3] = ((uint)((local_10 - (int)local_14) - (int)param_3) >> 2) + 2;
      FUN_1004e63f(this_00,local_14,local_10 - (int)local_14);
      *(int *)(*this_00 + 0x18) = this_00[1] - *this_00;
      iVar2 = *this_00;
      FUN_10054af5(iVar2,this_00[1] - iVar2,(undefined4 *)(iVar2 + 4));
      if (*(code **)(param_2 + 0x2b4) != (code *)0x0) {
        param_3 = (int *)0x0;
        iVar2 = (**(code **)(param_2 + 0x2b4))(*this_00,this_00[1] - *this_00,2,0,&param_3);
        if (-1 < iVar2) {
          lpOutputString = (LPCSTR)(**(code **)(*param_3 + 0xc))(param_3);
          OutputDebugStringA(lpOutputString);
          (**(code **)(*param_3 + 8))(param_3);
        }
      }
      thunk_FUN_10055686(local_24);
      uVar3 = thunk_FUN_10055686(local_14);
    }
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

