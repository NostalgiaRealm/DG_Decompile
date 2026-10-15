/*
 * FUN_18001da18 at 18001da18
 * undefined __cdecl FUN_18001da18(longlong param_1)
 * Address ranges: 18001da18-18001da1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001da18(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 extraout_x0;
  longlong *plVar3;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x3180) + 0x10);
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3180) + 8) + 0x2978);
  EnterCriticalSection((LPCRITICAL_SECTION)(plVar3 + 0xc4));
  bVar2 = FUN_180051f70(extraout_x0,(longlong)puVar1);
  if ((*(char *)((longlong)puVar1 + 0xd6e) != '\0') ||
     (bVar2 != (bool)*(char *)((longlong)puVar1 + 0xd6d))) {
    if (!bVar2) {
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    }
    FUN_180051fe0(plVar3,puVar1,(longlong *)0x0,'\0');
    *(bool *)((longlong)puVar1 + 0xd6d) = bVar2;
    *(undefined1 *)((longlong)puVar1 + 0xd6e) = 0;
    (**(code **)(*plVar3 + 0x70))(plVar3,puVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar3 + 0xc4));
  return;
}

