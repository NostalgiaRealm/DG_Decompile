/*
 * FUN_10022e2d at 10022e2d
 * bool __thiscall FUN_10022e2d(void * this, undefined4 * param_1)
 * Address ranges: 10022e2d-10022ecb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10022e2d(void *this,undefined4 *param_1)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  cVar1 = (&DAT_1006c49a)[*(int *)((int)this + 0x10c) * 0x228];
  if (cVar1 != '\0') {
    (**(code **)(**(int **)((int)this + 0x108) + 0x34))(&local_24,*(undefined4 *)((int)this + 0xec))
    ;
    *param_1 = local_24;
    param_1[1] = uStack_20;
    param_1[2] = uStack_1c;
    param_1[3] = uStack_18;
    param_1[4] = local_14;
    param_1[5] = uStack_10;
    param_1[6] = uStack_c;
    param_1[7] = uStack_8;
    iVar3 = *(int *)((int)this + 0x10c) * 0x228;
    SetRect((LPRECT)(param_1 + 8),0,0,*(int *)(&DAT_1006c42c + iVar3),
            *(int *)(&DAT_1006c430 + iVar3));
  }
  LeaveCriticalSection(DAT_1006c254);
  return cVar1 != '\0';
}

