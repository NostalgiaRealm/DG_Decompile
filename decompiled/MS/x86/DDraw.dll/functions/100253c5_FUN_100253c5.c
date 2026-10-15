/*
 * FUN_100253c5 at 100253c5
 * undefined4 * __thiscall FUN_100253c5(void * this, undefined4 * param_1)
 * Address ranges: 100253c5-10025447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100253c5(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_10025390((int)this);
  cVar1 = (char)uVar2;
  uVar2 = 1;
  uVar3 = uVar2;
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)(&DAT_1006c448 + *(int *)((int)this + 0x11c) * 0x228);
  }
  *param_1 = uVar3;
  uVar3 = uVar2;
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)(&DAT_1006c42c + *(int *)((int)this + 0x11c) * 0x228);
  }
  param_1[1] = uVar3;
  uVar3 = uVar2;
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)(&DAT_1006c44c + *(int *)((int)this + 0x11c) * 0x228);
  }
  param_1[2] = uVar3;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(&DAT_1006c430 + *(int *)((int)this + 0x11c) * 0x228);
  }
  param_1[3] = uVar2;
  return param_1;
}

