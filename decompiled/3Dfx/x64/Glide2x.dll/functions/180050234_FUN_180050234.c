/*
 * FUN_180050234 at 180050234
 * ulonglong __fastcall FUN_180050234(longlong param_1, longlong param_2)
 * Address ranges: 180050234-180050291
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180050234(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 extraout_RAX;
  LPCRITICAL_SECTION p_Var4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x620);
  p_Var4 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  uVar3 = FUN_18004f114((ulonglong)p_Var4,param_2);
  cVar1 = *(char *)(param_2 + 0xd6d);
  cVar2 = (char)uVar3;
  *(char *)(param_2 + 0xd6d) = cVar2;
  *(byte *)(param_2 + 0xd6e) = *(byte *)(param_2 + 0xd6e) | cVar2 != cVar1;
  LeaveCriticalSection(lpCriticalSection);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),cVar2);
}

