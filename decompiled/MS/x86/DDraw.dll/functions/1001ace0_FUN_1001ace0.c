/*
 * FUN_1001ace0 at 1001ace0
 * int __thiscall FUN_1001ace0(void * this, char param_1)
 * Address ranges: 1001ace0-1001ad40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1001ace0(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  void *this_00;
  
  cVar1 = FUN_100188b4((int)this);
  if (cVar1 == '\0') {
    FUN_100177a6(this_00,'\0',param_1);
    iVar2 = (int)this + 0x48;
  }
  else {
    if ((*(int *)((int)this + 0x148) == 0) || (*(int *)((int)this + 0x184) == 0)) {
      if (param_1 != '\0') {
        FUN_100600a0(*(int *)((int)this + 0x44) + 0x11c0);
      }
      FUN_100190c2(this);
    }
    iVar2 = 0;
    if (*(int *)((int)this + 0x148) != 0) {
      iVar2 = (int)this + 0x13c;
    }
  }
  return iVar2;
}

