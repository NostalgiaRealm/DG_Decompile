/*
 * FUN_180095608 at 180095608
 * undefined FUN_180095608(void)
 * Address ranges: 180095608-180095677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180095608(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  cVar2 = *(char *)((longlong)param_1 + 0x1c);
  (**(code **)(*plVar4 + 0x18))(plVar4,(ulonglong)uVar1,(longlong)param_1 + 0xc);
  if (cVar2 == '\0') {
    uVar3 = (ulonglong)uVar1 << 5 | 0x10;
    (*__imp_USER32_dll_UnionRect)
              (uVar3 + *(longlong *)((longlong)plVar4 + 0xd4),
               uVar3 + *(longlong *)((longlong)plVar4 + 0xd4),(longlong)param_1 + 0xc);
  }
  return;
}

