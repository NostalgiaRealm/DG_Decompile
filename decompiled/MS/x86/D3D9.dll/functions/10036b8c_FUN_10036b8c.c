/*
 * FUN_10036b8c at 10036b8c
 * byte __thiscall FUN_10036b8c(void * this, int param_1)
 * Address ranges: 10036b8c-10036c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_10036b8c(void *this,int param_1)

{
  int *piVar1;
  byte extraout_var;
  undefined4 *puVar2;
  void *local_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(*(int *)((int)this + 4) + 0x510 + *(int *)((int)this + 8) * 0x1510);
  *(undefined4 **)((int)this + 0xc) = puVar2;
  if (param_1 == 8) {
    local_c = (void *)0x0;
  }
  else if (param_1 == 9) {
    local_c = (void *)0x1;
  }
  else if (param_1 == 10) {
    local_c = (void *)0x2;
  }
  else if ((param_1 == 0xb) || (local_c = this, param_1 == 0xc)) {
    local_c = (void *)0x3;
  }
  local_8 = 0;
  piVar1 = (int *)*puVar2;
  (**(code **)(*piVar1 + 0x60))(piVar1,&local_c,(int)this + 0x10);
  return extraout_var >> 7 ^ 1;
}

