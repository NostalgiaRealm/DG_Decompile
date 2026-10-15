/*
 * FUN_10008c25 at 10008c25
 * undefined __thiscall FUN_10008c25(void * this, int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 10008c25-10008c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008c25(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  *param_2 = 0;
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    *param_2 = *(undefined4 *)((int)this + 0x98);
    uVar1 = *(undefined4 *)((int)this + 0x9c);
  }
  else if (param_1 == 6) {
    *param_2 = *(undefined4 *)((int)this + 0x156);
    uVar1 = *(undefined4 *)((int)this + 0x15a);
  }
  else {
    if (param_1 != 7) {
      return;
    }
    *param_2 = *(undefined4 *)((int)this + 0x16a);
    uVar1 = *(undefined4 *)((int)this + 0x16e);
  }
  *param_3 = uVar1;
  return;
}

