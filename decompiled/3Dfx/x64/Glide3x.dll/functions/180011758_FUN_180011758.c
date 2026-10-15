/*
 * FUN_180011758 at 180011758
 * undefined __fastcall FUN_180011758(longlong param_1, char param_2)
 * Address ranges: 180011758-1800117f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011758(longlong param_1,char param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  LPCRITICAL_SECTION p_Var5;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x3300) + 0x10);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x3300) + 8) + 0x29f0);
  lpCriticalSection = (LPCRITICAL_SECTION)(plVar2 + 0xc4);
  p_Var5 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  uVar4 = FUN_180051720((ulonglong)p_Var5,(longlong)puVar1);
  cVar3 = (char)uVar4;
  if ((*(char *)((longlong)puVar1 + 0xd6e) != '\0') ||
     (cVar3 != *(char *)((longlong)puVar1 + 0xd6d))) {
    if (cVar3 == '\0') {
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    }
    FUN_1800518e4(plVar2,puVar1,(longlong *)0x0,param_2);
    *(char *)((longlong)puVar1 + 0xd6d) = cVar3;
    *(undefined1 *)((longlong)puVar1 + 0xd6e) = 0;
    (**(code **)(*plVar2 + 0x70))(plVar2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001800117ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

