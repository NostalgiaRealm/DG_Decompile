/*
 * FUN_100b5466 at 100b5466
 * undefined __thiscall FUN_100b5466(void * this, int param_1, int param_2)
 * Address ranges: 100b5466-100b5494
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b5466(void *this,int param_1,int param_2)

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

