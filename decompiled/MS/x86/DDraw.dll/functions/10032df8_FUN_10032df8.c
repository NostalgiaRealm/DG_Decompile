/*
 * FUN_10032df8 at 10032df8
 * undefined4 __thiscall FUN_10032df8(void * this, undefined4 * param_1)
 * Address ranges: 10032df8-10032e6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10032df8(void *this,undefined4 *param_1)

{
  char cVar1;
  BOOL BVar2;
  void *this_00;
  int extraout_EDX;
  undefined4 uVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x80070057;
  if (((param_1 != (undefined4 *)0x0) &&
      (uVar3 = 0x8876026c, *(int *)(*(int *)((int)this + 4) + 0x94) == 0)) &&
     (uVar3 = 0x887601c2, *(char *)((int)this + 8) == '\0')) {
    uVar3 = 0x88760249;
    cVar1 = FUN_10031fa9((int)this);
    if (cVar1 != '\0') {
      uVar3 = FUN_100328ad(this_00,param_1,extraout_EDX);
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}

