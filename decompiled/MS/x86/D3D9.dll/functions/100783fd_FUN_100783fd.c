/*
 * FUN_100783fd at 100783fd
 * int __thiscall FUN_100783fd(void * this, undefined4 param_1, char param_2)
 * Address ranges: 100783fd-100784ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100783fd(void *this,undefined4 param_1,char param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_10;
  
  uVar5 = 0;
  uVar6 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    do {
      iVar4 = *(int *)((int)this + 0xc4);
      if (((iVar4 != 0) || (iVar4 = *(int *)((int)this + 0x60), iVar4 != 0)) &&
         (BVar2 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x2c) * uVar6 * 0x1c + iVar4 + 0xc)),
         BVar2 == 0)) {
        uVar5 = uVar5 | 1 << (uVar6 & 0x1f);
      }
      local_10 = 0;
      if (*(int *)((int)this + 0x20) != 0) {
        do {
          cVar1 = (**(code **)(*(int *)this + 4))(local_10,uVar6,1);
          if (cVar1 != '\0') {
            uVar5 = uVar5 | 1 << (uVar6 & 0x1f);
          }
          local_10 = local_10 + 1;
        } while (local_10 < *(uint *)((int)this + 0x20));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)((int)this + 0x24));
  }
  iVar4 = *(int *)((int)this + 0xc0);
  if (param_2 == '\0') {
    if (iVar4 == 0) {
      iVar4 = *(int *)((int)this + 0x5c);
    }
  }
  else {
    if (iVar4 == 0) {
      iVar7 = 100;
      iVar3 = 0;
      iVar4 = 0x48;
    }
    else {
      iVar3 = *(int *)((int)this + 0x54);
      iVar7 = 200;
      iVar4 = 0xac;
    }
    FUN_10077aad((void *)(iVar4 + (int)this),iVar3);
    iVar4 = *(int *)(iVar7 + (int)this);
  }
  if (uVar5 != 0) {
    FUN_10078ac8(this,(int)this + 0x48,0,uVar5,*(int *)((int)this + 0x2c));
  }
  return iVar4;
}

