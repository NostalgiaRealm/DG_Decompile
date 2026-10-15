/*
 * FUN_1008b6e2 at 1008b6e2
 * uint __fastcall FUN_1008b6e2(int * param_1, uint * param_2, uint param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 1008b6e2-1008bd3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_1008b6e2(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cStack00000017;
  uint local_28;
  uint local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  char local_5;
  
  param_2[*(byte *)((int)param_2 + 0x61) + 0x1f] = 5;
  if ((*param_2 & 0x400) != 0) {
    param_2[*(byte *)((int)param_2 + 0x62) + 0x1f] = 5;
  }
  local_28 = 0;
  local_18 = 0;
  if ((*(char *)((int)param_2 + 6) == '\0') && ((char)param_2[2] == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  bVar1 = false;
  if ((*(char *)((int)param_2 + 5) == '\0') && (*(char *)((int)param_2 + 7) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  uVar4 = uVar4 | uVar2;
  if ((param_6 == 0) || ((*param_2 & 0x400) != 0)) {
    cStack00000017 = '\0';
  }
  else {
    bVar1 = true;
    cStack00000017 = '\x01';
  }
  if ((uVar4 == 0) && ((*param_2 & 0x400) == 0)) {
    local_5 = FUN_10089625((int)param_2,param_3,param_4);
LAB_1008b79c:
    if ((bVar1) && (uVar2 = param_6, param_5 == 1)) goto LAB_1008b7bb;
  }
  else {
    local_5 = '\0';
    if (uVar4 == 0) goto LAB_1008b79c;
  }
  uVar2 = FUN_100c2e34((int)(param_2 + 3),4,'\x01');
LAB_1008b7bb:
  uVar3 = 0;
  if (uVar2 != param_6) {
    uVar3 = uVar2;
  }
  FUN_100c3be1((int *)(param_2 + 3),param_1,0x2d);
  local_14 = 0;
  if (local_5 == '\0') {
    local_14 = param_3;
  }
  local_10 = 0;
  if (local_5 == '\0') {
    local_10 = param_4;
  }
  if ((*param_2 & 0x400) != 0) {
    if (uVar4 == 0) {
      FUN_10089625((int)param_2,local_14,local_10);
      local_14 = 0;
      local_10 = 0;
    }
    local_28 = FUN_100c2e34((int)(param_2 + 3),4,'\x01');
    FUN_100c2e34((int)(param_2 + 3),4,'\0');
    FUN_100c3be1((int *)(param_2 + 3),param_1,0x2d);
    FUN_1008b65b(param_1,param_2);
  }
  if ((*(char *)((int)param_2 + 5) != '\0') || (*(char *)((int)param_2 + 7) != '\0')) {
    local_20 = local_14;
    if ((uVar4 == 1) && ((*param_2 & 0x400) == 0)) {
      FUN_10089625((int)param_2,local_14,0);
      local_20 = 0;
    }
    local_18 = FUN_100c2e34((int)(param_2 + 3),4,'\x01');
    FUN_100c3be1((int *)(param_2 + 3),param_1,0x8000002d);
    local_14 = local_20;
    if ((*param_2 & 0x400) != 0) {
      if (uVar4 == 1) {
        FUN_10089625((int)param_2,local_20,local_10);
        local_10 = 0;
        local_14 = 0;
      }
      FUN_100c2e34((int)(param_2 + 3),4,'\0');
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x8000002d);
      FUN_1008b65b(param_1,param_2);
    }
    if (*(char *)((int)param_2 + 5) != '\0') {
      uVar2 = uVar3;
      if (((uVar4 == 1) && (cStack00000017 != '\0')) && (param_5 == 1)) {
        uVar2 = param_6;
      }
      FUN_100895c8(param_1,(int)param_2);
    }
    if ((uVar4 == 1) && ((*param_2 & 0x400) == 0)) {
      FUN_10089625((int)param_2,0,local_10);
      local_10 = 0;
    }
  }
  if ((*(char *)((int)param_2 + 6) != '\0') || (local_20 = local_14, (char)param_2[2] != '\0')) {
    local_20 = local_14;
    if ((uVar4 == 2) && ((*param_2 & 0x400) == 0)) {
      FUN_10089625((int)param_2,local_14,0);
      local_20 = 0;
    }
    if (local_18 == 0) {
      local_18 = FUN_100c2e34((int)(param_2 + 3),4,'\x01');
    }
    FUN_100c3be1((int *)(param_2 + 3),param_1,0x8000002d);
    if ((*param_2 & 0x400) != 0) {
      if (uVar4 == 2) {
        FUN_10089625((int)param_2,local_20,local_10);
      }
      FUN_100c2e34((int)(param_2 + 3),4,'\0');
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x8000002d);
      FUN_1008b65b(param_1,param_2);
    }
    if ((*(char *)((int)param_2 + 5) == '\0') && (*(char *)((int)param_2 + 6) != '\0')) {
      uVar2 = uVar3;
      if ((cStack00000017 != '\0') && (param_5 == 1)) {
        uVar2 = param_6;
      }
      FUN_100895c8(param_1,(int)param_2);
    }
    if ((uVar4 == 2) && ((*param_2 & 0x400) == 0)) {
      FUN_10089625((int)param_2,0,local_10);
      local_10 = 0;
    }
  }
  if (((*(char *)((int)param_2 + 5) != '\0') && (*(char *)((int)param_2 + 6) != '\0')) ||
     ((*(char *)((int)param_2 + 7) != '\0' && ((char)param_2[2] != '\0')))) {
    if ((*param_2 & 0x400) == 0) {
      FUN_10089625((int)param_2,local_20,0);
      local_20 = 0;
    }
    uVar4 = FUN_100c2e34((int)(param_2 + 3),4,'\x01');
    FUN_100c3be1((int *)(param_2 + 3),param_1,0x8000002d);
    if ((*param_2 & 0x400) != 0) {
      FUN_10089625((int)param_2,local_20,0);
      FUN_100c2e34((int)(param_2 + 3),4,'\0');
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x8000002d);
      FUN_1008b65b(param_1,param_2);
    }
    FUN_100c2ed2((int)(param_2 + 3),uVar4);
    if ((*(char *)((int)param_2 + 5) != '\0') && (*(char *)((int)param_2 + 6) != '\0')) {
      FUN_100895c8(param_1,(int)param_2);
      uVar2 = uVar3;
      if ((cStack00000017 != '\0') && (param_5 == 1)) {
        uVar2 = param_6;
      }
      FUN_100895c8(param_1,(int)param_2);
    }
    if ((*param_2 & 0x400) == 0) {
      FUN_10089625((int)param_2,0,local_10);
      local_10 = 0;
    }
  }
  if ((*param_2 & 0x400) != 0) {
    FUN_1008979f(param_1,param_2,local_10);
    FUN_10089625((int)param_2,0,local_10);
  }
  if (uVar2 != param_6) {
    if (param_5 == 1) {
      if (param_6 != 0) {
        FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
      }
    }
    else {
      uVar2 = uVar3;
      if (param_6 != 0) {
        uVar2 = param_6;
      }
      FUN_10089407(param_1,(int)param_2);
    }
  }
  if (uVar3 != uVar2) {
    FUN_100c2ed2((int)(param_2 + 3),uVar3);
  }
  FUN_100c2ed2((int)(param_2 + 3),local_18);
  FUN_100c2ed2((int)(param_2 + 3),local_28);
  return uVar2;
}

