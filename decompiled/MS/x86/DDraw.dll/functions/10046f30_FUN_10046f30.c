/*
 * FUN_10046f30 at 10046f30
 * undefined __thiscall FUN_10046f30(void * this, int param_1, int param_2)
 * Address ranges: 10046f30-10046f5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046f30(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_2 == *(int *)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x604)) {
      *(undefined4 *)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x604) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

