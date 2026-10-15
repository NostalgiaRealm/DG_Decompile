/*
 * FUN_1001706c at 1001706c
 * undefined __thiscall FUN_1001706c(void * this, char param_1)
 * Address ranges: 1001706c-100170ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001706c(void *this,char param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + 0x3188);
  piVar2 = (int *)((int)this + 0x322c);
  if (*(char *)((int)this + 0x3236) != '\0') {
    *(undefined4 *)((int)this + 0x31dc) = 0xffffffff;
    *(undefined4 *)((int)this + 0x31ec) = 2;
    iVar3 = FUN_100381ed((void *)(*piVar1 + 0x1640),(uint *)((int)this + 0x31bc));
    *piVar2 = iVar3;
    if (*(char *)((int)this + 0x3236) != '\0') goto LAB_100170c2;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_100170c2:
  FUN_1003d9c2(*(int *)(*piVar1 + 0x1304),*piVar2);
  FUN_1003d494(*(void **)(*piVar1 + 0x1304),*piVar2);
  *(undefined1 *)((int)this + 0x3236) = 0;
  return;
}

