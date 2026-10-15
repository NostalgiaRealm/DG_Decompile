/*
 * FUN_1003680c at 1003680c
 * uint __stdcall FUN_1003680c(uint * param_1, undefined4 param_2, uint param_3, undefined4 param_4, byte param_5, int * param_6, uint param_7, uint param_8)
 * Address ranges: 1003680c-100372b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003680c(uint *param_1,undefined4 param_2,uint param_3,uint param_4,byte param_5,
                 int *param_6,uint param_7,uint param_8)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_20;
  uint local_1c;
  uint local_14;
  uint local_c;
  
  if (((param_8 >> 0xe & 1) == 0) && ((param_8 >> 0xd & 1) == 0)) {
    bVar1 = true;
    bVar2 = true;
  }
  else {
    bVar1 = false;
    bVar2 = false;
  }
  iVar5 = 4;
  if (bVar1) {
    iVar5 = 1;
  }
  local_c = FUN_10056ee5((int)param_1,iVar5,'\x01');
  if (!bVar2) {
    FUN_10057c8a((int *)param_1,param_6,0x36);
  }
  FUN_10058073(param_5,0);
  FUN_10057c8a((int *)param_1,param_6,0x36);
  param_4 = 0;
  local_14 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar6 = param_7 >> 0x1a & 3;
  if (uVar6 == 3) {
    if (param_5 == 0) {
      param_4 = param_1[0x8e];
    }
    else {
      param_4 = FUN_10056ee5((int)param_1,4,'\x01');
    }
    uVar3 = FUN_10056ee5((int)param_1,4,'\x01');
    FUN_1003627d(param_1);
    if (!bVar2) {
      local_14 = FUN_10056ee5((int)param_1,4,'\x01');
      FUN_1003627d(param_1);
      FUN_10057c8a((int *)param_1,param_6,0x36);
      local_20 = FUN_10056ee5((int)param_1,4,'\x01');
      FUN_1003627d(param_1);
      local_1c = param_3;
      FUN_1003627d(param_1);
      param_3 = 0;
    }
    FUN_10056fd9((int)param_1,uVar3);
  }
  else {
    FUN_10057c8a((int *)param_1,param_6,0x2d);
    if (!bVar2) {
      FUN_10057c8a((int *)param_1,param_6,0x2d);
      FUN_10057c8a((int *)param_1,param_6,0x36);
      FUN_10057c8a((int *)param_1,param_6,0x2d);
      FUN_10057c8a((int *)param_1,param_6,0x2d);
    }
  }
  FUN_10056fd9((int)param_1,param_3);
  param_3 = local_c;
  if (uVar6 != 3) {
    param_3 = FUN_10056ee5((int)param_1,iVar5,'\x01');
  }
  FUN_10057c8a((int *)param_1,param_6,1);
  uVar6 = param_8 >> 0x10 & 1;
  if (((param_8 >> 0x11 & 1) == 0) && (uVar6 == 0)) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = 0x27;
  }
  FUN_10057c8a((int *)param_1,param_6,uVar3);
  if (param_1[0x90] != 0) {
    FUN_10057c8a((int *)param_1,param_6,1);
  }
  if (uVar6 == 0) {
    if (!bVar2) {
      FUN_10056ee5((int)param_1,2,'\0');
      FUN_10057c8a((int *)param_1,param_6,0x1d);
      FUN_10057c8a((int *)param_1,param_6,0x3c);
      FUN_10057c8a((int *)param_1,param_6,0x3c);
      FUN_10057c8a((int *)param_1,param_6,1);
      FUN_10057c8a((int *)param_1,param_6,1);
    }
    if ((param_8 >> 0x11 & 1) == 0) {
      uVar6 = 0x4000d;
    }
    else {
      uVar6 = 0xd;
    }
    FUN_10057c8a((int *)param_1,param_6,uVar6);
    if (param_3 != local_c) {
      FUN_10056fd9((int)param_1,param_3);
    }
    param_3 = 0;
  }
  uVar6 = param_7 >> 0x1a & 3;
  if (uVar6 == 0) {
    if (param_5 == 0) {
      param_4 = param_1[0x8e];
    }
    else {
      param_4 = FUN_10056ee5((int)param_1,4,'\x01');
    }
    FUN_10036413((int *)param_1,param_2,param_4,local_c,0,0x41071a,param_3,param_6);
    if (bVar2) goto LAB_10037276;
    uVar3 = FUN_10056ee5((int)param_1,4,'\x01');
    FUN_10036413((int *)param_1,param_2,uVar3,local_c,1,0x41071a,param_3,param_6);
    FUN_1003591b((int *)param_1,param_6);
    FUN_10036413((int *)param_1,param_2,uVar3,local_c,2,0x41071a,param_3,param_6);
    uVar6 = local_c;
    if (local_c == 0) {
      uVar6 = FUN_10056ee5((int)param_1,4,'\x01');
    }
    FUN_10036413((int *)param_1,param_2,uVar6,local_c,3,0x41071a,param_3,param_6);
    local_c = 0;
    FUN_10056fd9((int)param_1,param_3);
    FUN_1003591b((int *)param_1,param_6);
    FUN_1003591b((int *)param_1,param_6);
    FUN_10056fd9((int)param_1,uVar6);
  }
  else {
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        if (param_5 == 0) {
          param_4 = param_1[0x8e];
        }
        else {
          param_4 = FUN_10056ee5((int)param_1,4,'\x01');
        }
        FUN_10036534(param_1,param_2,param_4,local_c,0,param_3,param_6,param_7,param_8);
        if (!bVar2) {
          uVar3 = FUN_10056ee5((int)param_1,4,'\x01');
          FUN_10036534(param_1,param_2,uVar3,local_c,1,param_3,param_6,param_7,param_8);
          FUN_1003591b((int *)param_1,param_6);
          FUN_10036534(param_1,param_2,uVar3,local_c,2,param_3,param_6,param_7,param_8);
          uVar6 = local_c;
          if (local_c == 0) {
            uVar6 = FUN_10056ee5((int)param_1,4,'\x01');
          }
          FUN_10036534(param_1,param_2,uVar6,local_c,3,param_3,param_6,param_7,param_8);
          local_c = 0;
          FUN_10056fd9((int)param_1,param_3);
          FUN_1003591b((int *)param_1,param_6);
          FUN_1003591b((int *)param_1,param_6);
          FUN_10056fd9((int)param_1,uVar6);
          FUN_10056fd9((int)param_1,uVar3);
        }
        if ((param_8 >> 0x10 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x93) = 0xf;
        }
      }
      else if (uVar6 == 3) {
        FUN_10036779((int *)param_1,param_2,param_4,param_3,0,param_6,param_7,param_8);
        if (!bVar2) {
          FUN_10036779((int *)param_1,param_2,local_14,param_3,1,param_6,param_7,param_8);
          FUN_1003591b((int *)param_1,param_6);
          FUN_10036779((int *)param_1,param_2,local_20,param_3,2,param_6,param_7,param_8);
          FUN_10036779((int *)param_1,param_2,local_1c,param_3,3,param_6,param_7,param_8);
          FUN_10056fd9((int)param_1,param_3);
          FUN_1003591b((int *)param_1,param_6);
          FUN_1003591b((int *)param_1,param_6);
          FUN_10056fd9((int)param_1,local_1c);
          FUN_10056fd9((int)param_1,local_20);
          FUN_10056fd9((int)param_1,local_14);
        }
        if ((param_8 >> 0x10 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x93) = 0xf;
        }
      }
      goto LAB_10037276;
    }
    if (param_5 == 0) {
      param_4 = param_1[0x8e];
    }
    else {
      param_4 = FUN_10056ee5((int)param_1,4,'\x01');
    }
    uVar3 = FUN_10056ee5((int)param_1,4,'\x01');
    FUN_10057c8a((int *)param_1,param_6,0x55);
    FUN_10057c8a((int *)param_1,param_6,1);
    uVar6 = 0;
    if (bVar2) {
      uVar6 = uVar3;
    }
    FUN_1003646e((int *)param_1,param_2,param_4,local_c,uVar3,0,0x41071a,0x41071b,param_3,uVar6,
                 param_6);
    if (!bVar2) {
      uVar4 = FUN_10056ee5((int)param_1,4,'\x01');
      FUN_1003646e((int *)param_1,param_2,uVar4,local_c,uVar3,1,0x41071a,0x41071b,param_3,0,param_6)
      ;
      FUN_1003591b((int *)param_1,param_6);
      FUN_1003646e((int *)param_1,param_2,uVar4,local_c,uVar3,2,0x41071a,0x41071b,param_3,0,param_6)
      ;
      uVar6 = local_c;
      if (local_c == 0) {
        uVar6 = FUN_10056ee5((int)param_1,4,'\x01');
      }
      FUN_1003646e((int *)param_1,param_2,uVar6,local_c,uVar3,3,0x41071a,0x41071b,param_3,uVar3,
                   param_6);
      local_c = 0;
      FUN_10056fd9((int)param_1,param_3);
      FUN_1003591b((int *)param_1,param_6);
      FUN_1003591b((int *)param_1,param_6);
      FUN_10056fd9((int)param_1,uVar6);
      FUN_10056fd9((int)param_1,uVar4);
    }
  }
  FUN_10056fd9((int)param_1,uVar3);
LAB_10037276:
  FUN_10056fd9((int)param_1,local_c);
  FUN_10056fd9((int)param_1,param_1[0x91]);
  FUN_10056fd9((int)param_1,param_1[0x92]);
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  return param_4;
}

