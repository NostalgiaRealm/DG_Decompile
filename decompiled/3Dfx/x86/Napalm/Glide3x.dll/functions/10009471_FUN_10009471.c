/*
 * FUN_10009471 at 10009471
 * undefined __thiscall FUN_10009471(void * this, int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 10009471-100094d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10009471(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  *param_2 = 0;
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    *param_2 = *(undefined4 *)((int)this + 0x98);
    uVar1 = *(undefined4 *)((int)this + 0x9c);
  }
  else if (param_1 == 6) {
    *param_2 = *(undefined4 *)((int)this + 0x1b9);
    uVar1 = *(undefined4 *)((int)this + 0x1bd);
  }
  else {
    if (param_1 != 7) {
      return;
    }
    *param_2 = *(undefined4 *)((int)this + 0x1cd);
    uVar1 = *(undefined4 *)((int)this + 0x1d1);
  }
  *param_3 = uVar1;
  return;
}

