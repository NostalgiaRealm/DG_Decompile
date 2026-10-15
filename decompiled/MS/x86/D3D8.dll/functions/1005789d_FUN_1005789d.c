/*
 * FUN_1005789d at 1005789d
 * undefined __thiscall FUN_1005789d(void * this, int * param_1, int param_2, uint param_3)
 * Address ranges: 1005789d-10057be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005789d(void *this,int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int *piVar5;
  undefined4 local_c;
  
  piVar5 = (int *)(param_2 + 0x18);
  uVar2 = FUN_100a05ed((int)piVar5,4,'\x01');
  *(uint *)(param_2 + 0x154) = uVar2;
  FUN_100577db(param_1,param_2);
  if (*(char *)(param_2 + 0x1a5) == '\0') {
    FUN_100a068b((int)piVar5,*(uint *)(param_2 + 0x14c));
    *(undefined4 *)(param_2 + 0x14c) = 0;
  }
  uVar3 = FUN_1005591c(param_2);
  local_c = 0;
  if ((char)uVar3 == '\0') {
    FUN_100567c1(this,param_2,param_1,0x11,0,1,*(uint *)(param_2 + 0x154));
    FUN_100567c1(this,param_2,param_1,0x11,0,2,*(uint *)(param_2 + 0x154));
    if (param_3 == 0) {
      FUN_100567c1(this,param_2,param_1,0x11,0,8,*(uint *)(param_2 + 0x154));
    }
    else {
      FUN_100a138c(piVar5,param_1,0x11);
      FUN_100567c1(this,param_2,param_1,0x36,0,8,param_3);
    }
  }
  else {
    local_c = FUN_100a05ed((int)piVar5,4,'\x01');
    FUN_100a138c(piVar5,param_1,0x11);
    FUN_100a138c(piVar5,param_1,0x11);
    FUN_100a138c(piVar5,param_1,0x11);
    if (param_3 != 0) {
      FUN_100a138c(piVar5,param_1,0x36);
    }
  }
  FUN_100567c1(this,param_2,param_1,0x11,0,4,*(uint *)(param_2 + 0x154));
  uVar2 = *(uint *)(param_2 + 0x154);
  if (*(char *)(param_2 + 0x1a7) == '\0') {
    FUN_100a068b((int)piVar5,uVar2);
    *(undefined4 *)(param_2 + 0x154) = 0;
  }
  else if (uVar2 != 0) {
    bVar4 = (byte)(uVar2 >> 0x12) & 3;
    pbVar1 = (byte *)((uVar2 & 0xff) + *(int *)(param_2 + 0x48));
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar2 >> 0x14) & 7)) + -1 << bVar4);
    pbVar1 = (byte *)((uVar2 & 0xff) + *(int *)(param_2 + 0x48));
    *pbVar1 = *pbVar1 | '\a' << bVar4;
  }
  piVar5 = (int *)(param_2 + 0x18);
  if ((char)uVar3 != '\0') {
    uVar2 = FUN_100a05ed((int)piVar5,2,'\0');
    FUN_100a138c(piVar5,param_1,0xe);
    FUN_100567c1(this,param_2,param_1,0x32,0,3,uVar2);
    FUN_100567c1(this,param_2,param_1,0x36,0,8,local_c);
    FUN_100a068b((int)piVar5,uVar2);
  }
  FUN_100a068b((int)piVar5,local_c);
  return;
}

