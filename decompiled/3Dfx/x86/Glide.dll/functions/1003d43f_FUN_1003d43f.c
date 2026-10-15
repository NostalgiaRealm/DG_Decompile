/*
 * FUN_1003d43f at 1003d43f
 * uint __thiscall FUN_1003d43f(void * this, char param_1)
 * Address ranges: 1003d43f-1003d475
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003d43f(void *this,char param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x630) - 1;
  *(uint *)((int)this + 0x630) = uVar1;
  if ((uVar1 == 0) &&
     ((uVar1 = *(uint *)((int)this + 0x620), *(int *)((int)this + 0x62c) <= (int)uVar1 ||
      (param_1 != '\0')))) {
    uVar1 = FUN_1003d280(this,'\0');
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

