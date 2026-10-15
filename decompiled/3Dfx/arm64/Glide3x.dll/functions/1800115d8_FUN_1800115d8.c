/*
 * FUN_1800115d8 at 1800115d8
 * undefined __cdecl FUN_1800115d8(longlong param_1)
 * Address ranges: 1800115d8-1800117df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800115d8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x3330);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  *(longlong *)(lVar3 + 0x618) = param_1;
  FUN_180010b18(param_1,1);
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0xd940 + (longlong)iVar2 * 8);
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + 0x30a8 + lVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_1800535c8(*(longlong *)(*(longlong *)(lVar4 + 0x3028) + 0x3330),
                        *(uint *)(*(longlong *)(lVar4 + 0x3028) + 0x3338),plVar1);
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
  FUN_18002ce08(param_1 + 0x4260);
  FUN_180015f00((longlong *)(param_1 + 0x35a0));
  if (*(char *)(param_1 + 0x2c83) != '\0') {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x33a0 + lVar3 * 0x10) + 0x10))();
      (**(code **)(**(longlong **)(param_1 + 0x33a8 + lVar3 * 0x10) + 0x10))();
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x10))();
  }
  FUN_1800535c8(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3378));
  FUN_1800535c8(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3370));
  (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3358) + 0x10))();
  FUN_1800535c8(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3380));
  (**(code **)(**(longlong **)(param_1 + 0x3368) + 0x10))();
  FUN_1800535c8(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),
                *(longlong **)(param_1 + 0x3390));
  (**(code **)(**(longlong **)(param_1 + 0x3388) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3350) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x3348) + 0x10))();
  FUN_180051d28(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338));
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

