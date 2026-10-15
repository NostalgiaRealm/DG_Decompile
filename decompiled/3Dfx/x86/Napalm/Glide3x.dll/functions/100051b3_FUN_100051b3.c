/*
 * FUN_100051b3 at 100051b3
 * bool __thiscall FUN_100051b3(void * this, int param_1)
 * Address ranges: 100051b3-10005246
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100051b3(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  cVar1 = FUN_1000560f((int)this);
  if (cVar1 == '\0') {
    return false;
  }
  if (param_1 == 0) {
LAB_100051ec:
    bVar3 = true;
  }
  else {
    if (param_1 == 1) {
      uVar2 = FUN_100061fc((int)this);
      return (bool)(&DAT_1005f38b)[uVar2 * 0x18];
    }
    if (param_1 == 2) {
      uVar2 = FUN_100061fc((int)this);
      return (bool)(&DAT_1005f38c)[uVar2 * 0x18];
    }
    if (param_1 == 3) {
      uVar2 = FUN_100061fc((int)this);
      return (bool)(&DAT_1005f389)[uVar2 * 0x18];
    }
    if (param_1 == 4) {
      bVar3 = FUN_100054db((int)this);
      if (!bVar3) {
        return false;
      }
    }
    else if (param_1 != 5) {
      if (param_1 != 6) {
        return false;
      }
      goto LAB_100051ec;
    }
    uVar2 = FUN_100061fc((int)this);
    bVar3 = uVar2 == 4;
  }
  return bVar3;
}

