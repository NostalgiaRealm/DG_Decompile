/*
 * FUN_10018753 at 10018753
 * undefined __thiscall FUN_10018753(void * this, char param_1)
 * Address ranges: 10018753-100187b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018753(void *this,char param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x2bcb) != '\0') {
    piVar1 = *(int **)(*(int *)((int)this + 0x3188) + 4);
    (**(code **)(*piVar1 + 0x70))
              (piVar1,*(undefined4 *)((int)this + *(int *)((int)this + 0x2a38) * 8 + 0x31b8));
    piVar1 = *(int **)(*(int *)((int)this + 0x3188) + 4);
    (**(code **)(*piVar1 + 0x70))
              (piVar1,*(undefined4 *)((int)this + *(int *)((int)this + 0x2a38) * 8 + 0x31bc));
    *(int *)((int)this + 0x2a38) = *(int *)((int)this + 0x2a38) + 1;
    if (param_1 != '\0') {
      FUN_100185cb(this,'\x01');
    }
  }
  return;
}

