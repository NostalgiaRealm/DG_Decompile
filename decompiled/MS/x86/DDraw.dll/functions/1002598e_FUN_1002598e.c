/*
 * FUN_1002598e at 1002598e
 * undefined __thiscall FUN_1002598e(void * this, int param_1)
 * Address ranges: 1002598e-100259ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002598e(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 300) != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x128) + uVar2 * 4);
      if ((piVar1[0x42] == param_1) &&
         ((**(code **)(*piVar1 + 0x58))(0,0x100), DAT_1006c238 != (int *)0x0)) {
        (**(code **)(*DAT_1006c238 + 0x24))
                  (*(undefined4 *)((int)this + 0xc),
                   *(undefined4 *)(*(int *)((int)this + 0x128) + uVar2 * 4));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 300));
  }
  return;
}

