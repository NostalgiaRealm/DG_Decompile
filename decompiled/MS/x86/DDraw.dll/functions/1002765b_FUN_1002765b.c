/*
 * FUN_1002765b at 1002765b
 * undefined4 __thiscall FUN_1002765b(void * this, uint param_1)
 * Address ranges: 1002765b-100276d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002765b(void *this,uint param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x80070057;
  if (((param_1 & 0xfffffff8) == 0) && (param_1 != 0)) {
    uVar3 = 0x80004001;
    if ((param_1 & 2) == 0) {
      iVar2 = *(int *)((int)this + 0x11c) * 0x228;
      uVar3 = 0;
      (**(code **)(**(int **)((int)this + 0x118) + 0x58))
                (*(undefined4 *)((int)this + 0x120),*(undefined4 *)(&DAT_1006c42c + iVar2),
                 *(undefined4 *)(&DAT_1006c430 + iVar2),(byte)param_1 & 1);
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}

