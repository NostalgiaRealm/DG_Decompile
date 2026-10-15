/*
 * FUN_10087639 at 10087639
 * int __thiscall FUN_10087639(void * this, char param_1)
 * Address ranges: 10087639-10087699
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10087639(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  void *this_00;
  
  cVar1 = FUN_10085350((int)this);
  if (cVar1 == '\0') {
    FUN_100841a9(this_00,'\0',param_1);
    iVar2 = (int)this + 0x48;
  }
  else {
    if ((*(int *)((int)this + 0x148) == 0) || (*(int *)((int)this + 0x184) == 0)) {
      if (param_1 != '\0') {
        FUN_100cef50(*(int *)((int)this + 0x44) + 0x11c0);
      }
      FUN_10085b72(this);
    }
    iVar2 = 0;
    if (*(int *)((int)this + 0x148) != 0) {
      iVar2 = (int)this + 0x13c;
    }
  }
  return iVar2;
}

