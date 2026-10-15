/*
 * FUN_10013d98 at 10013d98
 * uint __thiscall FUN_10013d98(void * this, int * param_1)
 * Address ranges: 10013d98-10013e39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10013d98(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_100028ba();
  if ((((char)iVar2 == '\0') || (uVar5 = *(uint *)((int)this + 0x54), (uVar5 & 0x202) != 0)) ||
     (*(short *)((int)this + 0x30) != 1)) {
    uVar5 = *(uint *)((int)this + 0x54);
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar1 = *(int *)((int)this + 0x60);
  if (iVar1 == 0) {
    uVar4 = iVar2 << 2;
  }
  else {
    if (iVar1 != 1) {
      uVar4 = 0;
      if (iVar1 == 2) {
        uVar4 = 1;
      }
      goto LAB_10013e07;
    }
    uVar4 = iVar2 << 2 | 2;
  }
  if ((uVar4 & 4) != 0) {
    iVar2 = FUN_1002cae1(*(uint *)((int)this + 0x4c),*(uint *)((int)this + 0x50),1);
    *param_1 = iVar2;
  }
LAB_10013e07:
  uVar3 = uVar4 | 4;
  if ((uVar5 & 0x400) == 0) {
    uVar3 = uVar4;
  }
  if (((*(int *)((int)this + 0x58) == 0x36314644) || (*(int *)((int)this + 0x58) == 0x34324644)) ||
     (*(int *)((int)this + 0x58) == 0x5a544e49)) {
    uVar3 = uVar3 | 8;
  }
  return uVar3;
}

