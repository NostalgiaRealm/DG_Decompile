/*
 * FUN_100060ef at 100060ef
 * undefined __fastcall FUN_100060ef(void * param_1)
 * Address ranges: 100060ef-1000616a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100060ef(void *param_1)

{
  LPVOID pvVar1;
  char cVar2;
  
  cVar2 = FUN_10004240();
  if (cVar2 == '\0') {
    *(undefined1 *)((int)param_1 + 0x3d) = 1;
    if (*(char *)((int)param_1 + 0x3c) != '\0') {
      FUN_10005fa1(param_1,0);
    }
    if (*(int **)((int)param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0xc) + 0xc))();
      pvVar1 = *(LPVOID *)(*(int *)((int)param_1 + 0xc) + 0x454);
      if (pvVar1 != (LPVOID)0x0) {
        FUN_10055686(pvVar1);
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
    FUN_10002e3c(*(undefined4 **)((int)param_1 + 0x1c));
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined2 *)((int)param_1 + 0x3d) = 0;
  }
  return;
}

