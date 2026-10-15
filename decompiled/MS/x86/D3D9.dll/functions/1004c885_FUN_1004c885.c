/*
 * FUN_1004c885 at 1004c885
 * undefined __fastcall FUN_1004c885(int param_1)
 * Address ranges: 1004c885-1004c95e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c885(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar5 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1304);
  uVar3 = *(uint *)(iVar2 + 0x958);
  if (uVar3 != 0) {
    do {
      if (*(int *)(*(int *)(iVar2 + 0x954) + uVar5 * 4) == param_1) {
        if (uVar5 != 0xffffffff) {
          uVar5 = uVar5 + 1;
          if (uVar5 < uVar3) {
            do {
              *(undefined4 *)(*(int *)(iVar2 + 0x954) + -4 + uVar5 * 4) =
                   *(undefined4 *)(*(int *)(iVar2 + 0x954) + uVar5 * 4);
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)(iVar2 + 0x958));
          }
          *(int *)(iVar2 + 0x958) = *(int *)(iVar2 + 0x958) + -1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  SignalObjectAndWait(*(HANDLE *)(param_1 + 0x7c),*(HANDLE *)(param_1 + 0x78),0xffffffff,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  CloseHandle(*(HANDLE *)(param_1 + 0x78));
  CloseHandle(*(HANDLE *)(param_1 + 0x7c));
  pvVar4 = *(void **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_100c26b6(pvVar4);
    FUN_100cfd6c(pvVar4);
  }
  pvVar4 = *(void **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_100c26b6(pvVar4);
    FUN_100cfd6c(pvVar4);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

