/*
 * FUN_10008d0e at 10008d0e
 * undefined4 __fastcall FUN_10008d0e(int param_1)
 * Address ranges: 10008d0e-10008d83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10008d0e(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1 + 0xdd0) >> 2) & 1);
  uVar2 = 0x8876086c;
  if (*(char *)(param_1 + 0xcc5) == '\0') {
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
      uVar2 = 0x88760868;
      if (cVar1 == '\0') goto LAB_10008d76;
    }
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
      uVar2 = 0x88760868;
      if (cVar1 == '\0') goto LAB_10008d76;
    }
    *(undefined1 *)(param_1 + 0xcc5) = 1;
    uVar2 = 0;
  }
LAB_10008d76:
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return uVar2;
}

