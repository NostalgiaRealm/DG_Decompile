/*
 * FUN_18001e150 at 18001e150
 * undefined __cdecl FUN_18001e150(longlong param_1)
 * Address ranges: 18001e150-18001e357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e150(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x31b0);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  *(longlong *)(lVar3 + 0x618) = param_1;
  FUN_18001d3c8(param_1,1);
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0xcf90 + (longlong)iVar2 * 8);
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + 0x30a8 + lVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_180050888(*(longlong *)(*(longlong *)(lVar4 + 0x3028) + 0x31b0),
                        *(uint *)(*(longlong *)(lVar4 + 0x3028) + 0x31b8),plVar1);
          *(undefined8 *)(lVar4 + 0x30a8 + lVar3 * 8) = 0;
        }
        plVar1 = *(longlong **)(lVar4 + 0x3030 + lVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          *(undefined8 *)(lVar4 + 0x3030 + lVar3 * 8) = 0;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0xf);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  FUN_180038bc0(param_1 + 0x3ae0);
  FUN_180022a70((longlong *)(param_1 + 0x3420));
  if (*(char *)(param_1 + 0x2beb) != '\0') {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x3220 + lVar3 * 0x10) + 0x10))();
      (**(code **)(**(longlong **)(param_1 + 0x3228 + lVar3 * 0x10) + 0x10))();
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x3218) + 0x10))();
  }
  FUN_180050888(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),
                *(longlong **)(param_1 + 0x31f8));
  FUN_180050888(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),
                *(longlong **)(param_1 + 0x31f0));
  (**(code **)(**(longlong **)(param_1 + 0x31e0) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x31d8) + 0x10))();
  FUN_180050888(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),
                *(longlong **)(param_1 + 0x3200));
  (**(code **)(**(longlong **)(param_1 + 0x31e8) + 0x10))();
  FUN_180050888(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),
                *(longlong **)(param_1 + 0x3210));
  (**(code **)(**(longlong **)(param_1 + 0x3208) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x31d0) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x31c8) + 0x10))();
  FUN_18004efe8(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8));
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

