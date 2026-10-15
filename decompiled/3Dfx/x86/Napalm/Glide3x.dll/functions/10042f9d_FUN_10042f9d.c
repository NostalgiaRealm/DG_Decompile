/*
 * FUN_10042f9d at 10042f9d
 * uint __thiscall FUN_10042f9d(void * this, char param_1)
 * Address ranges: 10042f9d-10042fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10042f9d(void *this,char param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x630) - 1;
  *(uint *)((int)this + 0x630) = uVar1;
  if ((uVar1 == 0) &&
     ((uVar1 = *(uint *)((int)this + 0x620), *(int *)((int)this + 0x62c) <= (int)uVar1 ||
      (param_1 != '\0')))) {
    uVar1 = FUN_10042dde(this,'\0');
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

