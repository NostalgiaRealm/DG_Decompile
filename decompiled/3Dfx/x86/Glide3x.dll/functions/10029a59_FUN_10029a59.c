/*
 * FUN_10029a59 at 10029a59
 * undefined4 __thiscall FUN_10029a59(void * this, uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10029a59-1002a077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10029a59(void *this,uint param_1,int param_2,int *param_3,int *param_4)

{
  int *this_00;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  FUN_10052de1((int *)local_214,0,0x1bc);
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
  FUN_100220e2((int)this,param_1,(int)local_214);
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
  uVar1 = -(uint)(*(int *)((int)this + 0x74) != 0) & 0x10;
  if (((*(int *)(&DAT_1005ad08 + uVar1) != 0xff) || (*(int *)(&DAT_1005ad0c + uVar1) != 0xff)) ||
     (*(int *)(&DAT_1005ad10 + uVar1) != 0xff)) {
    local_5d = uVar4;
  }
  uVar1 = *(uint *)((int)this + 0x28) & *(uint *)((int)this + 0x24);
  if (uVar1 == 1) {
LAB_10029bd6:
    bStack_1d7 = bStack_1d7 | 4;
    local_5c = uVar4;
  }
  else {
    if (uVar1 != 2) {
      if (uVar1 == 3) goto LAB_10029bd6;
      if (uVar1 != 4) goto LAB_10029be0;
    }
    bStack_1d8 = bStack_1d8 | 1;
    local_5c = uVar4;
  }
LAB_10029be0:
  if ((*(int *)((int)this + 0x1c) == 0x400) || (*(int *)((int)this + 0x1c) == 0x404)) {
    local_5b = uVar4;
  }
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_50 = 0x43425844;
  local_3c = 1;
  local_34 = 3;
  FUN_1004b236(param_4,&local_50,0x2c);
  *(int *)(*this_00 + 0x20) = this_00[1] - *this_00;
  uVar2 = FUN_1002137f(this_00,(int)local_214);
  if ((char)uVar2 != '\0') {
    *(int *)(*this_00 + 0x24) = this_00[1] - *this_00;
    uVar2 = FUN_1002152e(this_00);
    if ((char)uVar2 != '\0') {
      *(int *)(*this_00 + 0x28) = this_00[1] - *this_00;
      FUN_1001b723(&local_14,0x200);
      param_3 = (int *)FUN_1004b3f9((int *)&local_14,local_214[0]);
      FUN_1001b723(&local_24,0x80);
      FUN_1002930f((int)this,(int *)local_214,(int *)&local_24);
      FUN_1004b270((int *)&local_24,1);
      FUN_1004b5f7(local_214[0],(int *)&local_14);
      if ((local_20c & 1) != 0) {
        FUN_1004b673(local_214[0],(int *)&local_14);
      }
      if ((local_20c & 2) != 0) {
        FUN_1004b673(local_214[0],(int *)&local_14);
      }
      uVar1 = 0;
      do {
        if ((local_204 & 1 << ((byte)uVar1 & 0x1f)) != 0) {
          iVar3 = FUN_1004b3b4(local_214[0]);
          if (((iVar3 == 0x40) || (iVar3 == 0x41)) || (iVar3 == 0x50)) {
            FUN_1004b270((int *)&local_14,3);
          }
          else if (iVar3 == 0x51) {
            FUN_1004b5ac((int *)&local_14);
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      uVar1 = 0;
      do {
        if ((local_208 & 1 << ((char)uVar1 + 0x10U & 0x1f)) != 0) {
          iVar3 = FUN_1004b3b4(local_214[0]);
          if (((iVar3 == 0x40) || (iVar3 == 0x41)) || (iVar3 == 0x50)) {
            FUN_1004b590((int *)&local_14);
          }
          else if (iVar3 == 0x51) {
            FUN_1004b5cf((int *)&local_14);
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      if ((local_208 & 0x100) != 0) {
        FUN_1004ad4b(local_214,(int *)&local_14);
      }
      if ((local_208 & 0x200) != 0) {
        FUN_1004ad4b(local_214,(int *)&local_14);
      }
      if ((local_208 & 0x400) != 0) {
        FUN_1004ad4b(local_214,(int *)&local_14);
      }
      if ((local_208 & 0x1000) != 0) {
        FUN_1004ad4b(local_214,(int *)&local_14);
      }
      uVar1 = 0;
      do {
        if ((local_208 & 1 << ((char)uVar1 + 0x14U & 0x1f)) != 0) {
          FUN_1004ad4b(local_214,(int *)&local_14);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      uVar1 = 0;
      do {
        if ((local_208 & 1 << ((char)uVar1 + 0x18U & 0x1f)) != 0) {
          FUN_1004ad4b(local_214,(int *)&local_14);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      if (bStack_1d7 != 0) {
        FUN_1004b270((int *)&local_14,4);
      }
      if (bStack_1d8 != 0) {
        FUN_1004b72f((int *)&local_14);
      }
      uVar1 = 0;
      do {
        if (acStack_1dc[uVar1] != '\0') {
          FUN_1004b72f((int *)&local_14);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 3);
      if (acStack_1dc[3] != '\0') {
        FUN_1004b72f((int *)&local_14);
      }
      FUN_1004b270((int *)&local_14,3);
      FUN_1004b270((int *)&local_14,3);
      if (local_1df != '\0') {
        FUN_1004b270((int *)&local_14,2);
      }
      FUN_1004b236(&local_14,local_24,local_20 - (int)local_24);
      local_14[1] = (local_10 - (int)local_14) + -8;
      local_14[3] = ((uint)((local_10 - (int)local_14) - (int)param_3) >> 2) + 2;
      FUN_1004b236(this_00,local_14,local_10 - (int)local_14);
      *(int *)(*this_00 + 0x18) = this_00[1] - *this_00;
      iVar3 = *this_00;
      FUN_100516ec(iVar3,this_00[1] - iVar3,(undefined4 *)(iVar3 + 4));
      if (*(code **)(param_2 + 0x2b4) != (code *)0x0) {
        param_3 = (int *)0x0;
        iVar3 = (**(code **)(param_2 + 0x2b4))(*this_00,this_00[1] - *this_00,2,0,&param_3);
        if (-1 < iVar3) {
          lpOutputString = (LPCSTR)(**(code **)(*param_3 + 0xc))(param_3);
          OutputDebugStringA(lpOutputString);
          (**(code **)(*param_3 + 8))(param_3);
        }
      }
      thunk_FUN_10052276(local_24);
      uVar2 = thunk_FUN_10052276(local_14);
    }
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

