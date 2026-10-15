/*
 * FUN_10004df8 at 10004df8
 * bool __thiscall FUN_10004df8(void * this, int param_1)
 * Address ranges: 10004df8-10004e89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10004df8(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  cVar1 = FUN_1000522d((int)this);
  if (cVar1 == '\0') {
    return false;
  }
  if (param_1 == 0) {
LAB_10004e30:
    bVar3 = true;
  }
  else {
    if (param_1 == 1) {
      uVar2 = FUN_10005e0b((int)this);
      return (bool)(&DAT_1005b1bb)[uVar2 * 0x18];
    }
    if (param_1 == 2) {
      uVar2 = FUN_10005e0b((int)this);
      return (bool)(&DAT_1005b1bc)[uVar2 * 0x18];
    }
    if (param_1 == 3) {
      uVar2 = FUN_10005e0b((int)this);
      return (bool)(&DAT_1005b1b9)[uVar2 * 0x18];
    }
    if (param_1 == 4) {
      bVar3 = FUN_100050f9((int)this);
      if (!bVar3) {
        return false;
      }
    }
    else if (param_1 != 5) {
      if (param_1 != 6) {
        return false;
      }
      goto LAB_10004e30;
    }
    uVar2 = FUN_10005e0b((int)this);
    bVar3 = uVar2 == 4;
  }
  return bVar3;
}

