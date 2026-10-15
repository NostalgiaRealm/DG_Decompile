/*
 * FUN_100133fe at 100133fe
 * undefined __fastcall FUN_100133fe(void * param_1)
 * Address ranges: 100133fe-10013480
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100133fe(void *param_1)

{
  LPVOID pvVar1;
  
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  if (*(char *)((int)param_1 + 0x3c) != '\0') {
    FUN_100132dd(param_1);
  }
  if (*(int **)((int)param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xc) + 0xc))();
    pvVar1 = *(LPVOID *)(*(int *)((int)param_1 + 0xc) + 0x29c);
    if (pvVar1 != (LPVOID)0x0) {
      FUN_1004f626(pvVar1);
    }
    (**(code **)**(undefined4 **)((int)param_1 + 0xc))();
    *(undefined4 *)((int)param_1 + 0xc) = 0;
  }
  if (*(int **)((int)param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x18) + 0x30))();
    if (*(undefined4 **)((int)param_1 + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x18))(1);
    }
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  }
  FUN_1004f626(*(LPVOID *)((int)param_1 + 0x5c));
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  FUN_10002ea6(*(undefined4 **)((int)param_1 + 0x1c));
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined2 *)((int)param_1 + 0x3d) = 0;
  return;
}

