/*
 * FUN_1000446d at 1000446d
 * undefined __thiscall FUN_1000446d(void * this, uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1000446d-1000452f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000446d(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0x31) {
    if (param_1 == 0x30) {
      iVar2 = 5;
    }
    else if (param_1 == 1) {
      iVar2 = 0;
    }
    else if (param_1 == 2) {
      iVar2 = 1;
    }
    else if (param_1 == 3) {
      iVar2 = 2;
    }
    else if (param_1 == 4) {
      iVar2 = 6;
    }
    else if (param_1 == 5) {
      iVar2 = 7;
    }
    else if (param_1 == 0x10) {
      iVar2 = 4;
    }
    else {
      if (param_1 != 0x20) {
        return;
      }
      iVar2 = 3;
    }
  }
  else if (param_1 == 0x40) {
    iVar2 = 8;
  }
  else if (param_1 == 0x41) {
    iVar2 = 10;
  }
  else if (param_1 == 0x42) {
    iVar2 = 0xc;
  }
  else if (param_1 == 0x50) {
    iVar2 = 9;
  }
  else if (param_1 == 0x51) {
    iVar2 = 0xb;
  }
  else {
    if (param_1 != 0x52) {
      return;
    }
    iVar2 = 0xd;
  }
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)**(undefined4 **)((int)this + 0xc))(iVar2,param_2,param_3);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  (&DAT_1005fa10)[iVar2] = param_2;
  *(undefined4 *)(iVar2 * 4 + 0x1005fa48) = param_3;
  return;
}

