/*
 * FUN_1003b969 at 1003b969
 * undefined __thiscall FUN_1003b969(void * this, int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1003b969-1003b9ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003b969(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 * 0x18 + 0x10 + (int)this);
  uVar2 = 1;
  if (cVar1 != '\0') {
    uVar2 = 4;
  }
  *param_2 = uVar2;
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = 2;
  }
  param_2[1] = uVar2;
  param_2[2] = (uint)(cVar1 != '\0');
  param_2[3] = 0;
  param_2[4] = 0;
  *param_3 = 0;
  return;
}

