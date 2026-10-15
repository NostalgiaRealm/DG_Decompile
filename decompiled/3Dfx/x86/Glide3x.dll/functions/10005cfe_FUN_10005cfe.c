/*
 * FUN_10005cfe at 10005cfe
 * undefined __fastcall FUN_10005cfe(void * param_1)
 * Address ranges: 10005cfe-10005d79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005cfe(void *param_1)

{
  LPVOID pvVar1;
  char cVar2;
  
  cVar2 = FUN_1000403e();
  if (cVar2 == '\0') {
    *(undefined1 *)((int)param_1 + 0x3d) = 1;
    if (*(char *)((int)param_1 + 0x3c) != '\0') {
      FUN_10005bb0(param_1,0);
    }
    if (*(int **)((int)param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0xc) + 0x10))();
      pvVar1 = *(LPVOID *)(*(int *)((int)param_1 + 0xc) + 0x318);
      if (pvVar1 != (LPVOID)0x0) {
        FUN_10052276(pvVar1);
      }
      (**(code **)(**(int **)((int)param_1 + 0xc) + 4))();
      *(undefined4 *)((int)param_1 + 0xc) = 0;
    }
    if (*(int **)((int)param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x18) + 0x30))();
      if (*(undefined4 **)((int)param_1 + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)param_1 + 0x18))(1);
      }
      *(undefined4 *)((int)param_1 + 0x18) = 0;
    }
    FUN_10002c3a(*(undefined4 **)((int)param_1 + 0x1c));
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined2 *)((int)param_1 + 0x3d) = 0;
  }
  return;
}

