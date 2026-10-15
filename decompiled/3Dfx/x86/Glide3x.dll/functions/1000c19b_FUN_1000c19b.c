/*
 * FUN_1000c19b at 1000c19b
 * undefined __thiscall FUN_1000c19b(void * this, char param_1)
 * Address ranges: 1000c19b-1000c1fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000c19b(void *this,char param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x2c6b) != '\0') {
    piVar1 = *(int **)(*(int *)((int)this + 0x3308) + 4);
    (**(code **)(*piVar1 + 0x70))
              (piVar1,*(undefined4 *)((int)this + *(int *)((int)this + 0x2ad8) * 8 + 0x3338));
    piVar1 = *(int **)(*(int *)((int)this + 0x3308) + 4);
    (**(code **)(*piVar1 + 0x70))
              (piVar1,*(undefined4 *)((int)this + *(int *)((int)this + 0x2ad8) * 8 + 0x333c));
    *(int *)((int)this + 0x2ad8) = *(int *)((int)this + 0x2ad8) + 1;
    if (param_1 != '\0') {
      FUN_1000c013(this,'\x01');
    }
  }
  return;
}

