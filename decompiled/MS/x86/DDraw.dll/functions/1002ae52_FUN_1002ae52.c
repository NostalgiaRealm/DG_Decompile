/*
 * FUN_1002ae52 at 1002ae52
 * undefined4 __thiscall FUN_1002ae52(void * this, uint param_1, int * param_2)
 * Address ranges: 1002ae52-1002af3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002ae52(void *this,uint param_1,int *param_2)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 uVar4;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar4 = 0x80070057;
  if (((param_1 & 0xffffffe0) == 0) &&
     ((((uVar3 = param_1 & 0x1e, uVar3 == 2 || (uVar3 == 4)) || (uVar3 == 8)) || (uVar3 == 0x10))))
  {
    uVar3 = param_1;
    if ((param_2 != (int *)0x0) && (uVar3 = param_1 & 0xfffffffe, *param_2 != param_2[1])) {
      uVar3 = param_1;
    }
    uVar4 = 0x80004001;
    if ((((uVar3 & 0x17) == 0) && ((*(uint *)((int)this + 0x1b8) & 0x20000) == 0)) &&
       (uVar4 = 0x887601c2, *(char *)((int)this + 8) == '\0')) {
      if (param_2 == (int *)0x0) {
        *(uint *)((int)this + 0x154) = *(uint *)((int)this + 0x154) & 0xfffeffff;
      }
      else {
        *(uint *)((int)this + 0x154) = *(uint *)((int)this + 0x154) | 0x10000;
        iVar1 = param_2[1];
        *(int *)((int)this + 400) = *param_2;
        *(int *)((int)this + 0x194) = iVar1;
      }
      if (DAT_1006c238 != (int *)0x0) {
        (**(code **)(*DAT_1006c238 + 0x28))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),this);
      }
      uVar4 = 0;
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

