/*
 * FUN_10032e6e at 10032e6e
 * undefined4 __thiscall FUN_10032e6e(void * this, int param_1)
 * Address ranges: 10032e6e-10032ed8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10032e6e(void *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x8876024a;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x94);
  if ((((iVar1 != 0) && (uVar3 = 0x887601c2, *(char *)((int)this + 8) == '\0')) &&
      (uVar3 = 0x80070057, param_1 != 0)) && (param_1 == iVar1)) {
    uVar3 = FUN_10032a47(this,*(int *)((int)this + 4) + 0x80);
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}

