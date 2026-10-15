/*
 * FUN_10016cde at 10016cde
 * undefined __thiscall FUN_10016cde(void * this, char param_1)
 * Address ranges: 10016cde-10016d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016cde(void *this,char param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + 0x3188);
  piVar2 = (int *)((int)this + 0x322c);
  if (*(char *)((int)this + 0x3236) != '\0') {
    *(undefined4 *)((int)this + 0x31dc) = 0xffffffff;
    *(undefined4 *)((int)this + 0x31ec) = 2;
    iVar3 = FUN_10037e5d((void *)(*piVar1 + 0x1640),(uint *)((int)this + 0x31bc));
    *piVar2 = iVar3;
    if (*(char *)((int)this + 0x3236) != '\0') goto LAB_10016d34;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_10016d34:
  FUN_1003d632(*(int *)(*piVar1 + 0x1304),*piVar2);
  FUN_1003d104(*(void **)(*piVar1 + 0x1304),*piVar2);
  *(undefined1 *)((int)this + 0x3236) = 0;
  return;
}

