/*
 * FUN_1000c9fc at 1000c9fc
 * undefined __thiscall FUN_1000c9fc(void * this, char param_1)
 * Address ranges: 1000c9fc-1000ca5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000c9fc(void *this,char param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x2db3) != '\0') {
    piVar1 = *(int **)(*(int *)((int)this + 0x3688) + 4);
    (**(code **)(*piVar1 + 0x70))
              (piVar1,*(undefined4 *)((int)this + *(int *)((int)this + 0x2c18) * 8 + 0x36b8));
    piVar1 = *(int **)(*(int *)((int)this + 0x3688) + 4);
    (**(code **)(*piVar1 + 0x70))
              (piVar1,*(undefined4 *)((int)this + *(int *)((int)this + 0x2c18) * 8 + 0x36bc));
    *(int *)((int)this + 0x2c18) = *(int *)((int)this + 0x2c18) + 1;
    if (param_1 != '\0') {
      FUN_1000c874(this,'\x01');
    }
  }
  return;
}

