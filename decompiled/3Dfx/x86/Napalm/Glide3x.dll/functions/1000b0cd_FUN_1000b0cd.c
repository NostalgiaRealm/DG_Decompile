/*
 * FUN_1000b0cd at 1000b0cd
 * undefined __thiscall FUN_1000b0cd(void * this, char param_1)
 * Address ranges: 1000b0cd-1000b14e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000b0cd(void *this,char param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + 0x3688);
  piVar2 = (int *)((int)this + 0x372c);
  if (*(char *)((int)this + 0x3736) != '\0') {
    *(undefined4 *)((int)this + 0x36dc) = 0xffffffff;
    *(undefined4 *)((int)this + 0x36ec) = 2;
    iVar3 = FUN_1003dd50((void *)(*piVar1 + 0x1640),(uint *)((int)this + 0x36bc));
    *piVar2 = iVar3;
    if (*(char *)((int)this + 0x3736) != '\0') goto LAB_1000b123;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_1000b123:
  FUN_10043520(*(int *)(*piVar1 + 0x1304),*piVar2);
  FUN_10042ff2(*(void **)(*piVar1 + 0x1304),*piVar2);
  *(undefined1 *)((int)this + 0x3736) = 0;
  return;
}

