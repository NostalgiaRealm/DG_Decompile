/*
 * FUN_10057e1e at 10057e1e
 * undefined __thiscall FUN_10057e1e(void * this, int * param_1)
 * Address ranges: 10057e1e-10057e65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057e1e(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_38 [13];
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x1c))(param_1,local_38);
    iVar1 = FUN_10057f20(this,local_38);
    if (iVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(int **)(iVar1 + 0x1c + uVar2 * 0x24) == param_1) {
          *(undefined1 *)(iVar1 + 0x20 + uVar2 * 0x24) = 0;
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x14);
    }
  }
  return;
}

