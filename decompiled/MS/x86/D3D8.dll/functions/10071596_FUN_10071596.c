/*
 * FUN_10071596 at 10071596
 * int __thiscall FUN_10071596(void * this, char param_1)
 * Address ranges: 10071596-100715f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10071596(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  void *this_00;
  
  cVar1 = FUN_1006f16a((int)this);
  if (cVar1 == '\0') {
    FUN_1006e05c(this_00,'\0',param_1);
    iVar2 = (int)this + 0x48;
  }
  else {
    if ((*(int *)((int)this + 0x148) == 0) || (*(int *)((int)this + 0x184) == 0)) {
      if (param_1 != '\0') {
        FUN_100ac680(*(int *)((int)this + 0x44) + 0x11c0);
      }
      FUN_1006f978(this);
    }
    iVar2 = 0;
    if (*(int *)((int)this + 0x148) != 0) {
      iVar2 = (int)this + 0x13c;
    }
  }
  return iVar2;
}

