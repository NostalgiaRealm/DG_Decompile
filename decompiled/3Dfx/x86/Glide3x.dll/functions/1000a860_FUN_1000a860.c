/*
 * FUN_1000a860 at 1000a860
 * undefined __thiscall FUN_1000a860(void * this, char param_1)
 * Address ranges: 1000a860-1000a8e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000a860(void *this,char param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + 0x3308);
  piVar2 = (int *)((int)this + 0x33ac);
  if (*(char *)((int)this + 0x33b6) != '\0') {
    *(undefined4 *)((int)this + 0x335c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x336c) = 2;
    iVar3 = FUN_1003a942((void *)(*piVar1 + 0x1640),(uint *)((int)this + 0x333c));
    *piVar2 = iVar3;
    if (*(char *)((int)this + 0x33b6) != '\0') goto LAB_1000a8b6;
  }
  if (param_1 == '\0') {
    return;
  }
LAB_1000a8b6:
  FUN_10040117(*(int *)(*piVar1 + 0x1304),*piVar2);
  FUN_1003fbe9(*(void **)(*piVar1 + 0x1304),*piVar2);
  *(undefined1 *)((int)this + 0x33b6) = 0;
  return;
}

