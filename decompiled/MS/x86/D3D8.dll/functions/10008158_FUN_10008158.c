/*
 * FUN_10008158 at 10008158
 * undefined4 __fastcall FUN_10008158(int param_1)
 * Address ranges: 10008158-100081cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10008158(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1 + 0xb0c) >> 2) & 1);
  uVar2 = 0x8876086c;
  if (*(char *)(param_1 + 0xa01) == '\0') {
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
      uVar2 = 0x88760868;
      if (cVar1 == '\0') goto LAB_100081c0;
    }
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
      uVar2 = 0x88760868;
      if (cVar1 == '\0') goto LAB_100081c0;
    }
    *(undefined1 *)(param_1 + 0xa01) = 1;
    uVar2 = 0;
  }
LAB_100081c0:
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return uVar2;
}

