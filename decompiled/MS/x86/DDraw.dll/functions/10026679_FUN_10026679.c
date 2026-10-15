/*
 * FUN_10026679 at 10026679
 * undefined4 __thiscall FUN_10026679(void * this, int * param_1)
 * Address ranges: 10026679-1002675e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10026679(void *this,int *param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_9c;
  int iStack_98;
  int iStack_88;
  int aiStack_84 [32];
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x80070057;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x7c)) goto LAB_10026748;
  if (*(char *)((int)this + 0x109) == '\0') {
    if ((&DAT_1006c49a)[*(int *)((int)this + 0x11c) * 0x228] == '\0') {
      FUN_10024b65(this,*(undefined4 *)((int)this + 0x120));
    }
    piVar4 = (int *)(&DAT_100698d0 + *(int *)((int)this + 0x11c) * 0xa4);
LAB_10026741:
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *piVar4;
      piVar4 = piVar4 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    (**(code **)(**(int **)((int)this + 0x118) + 0x48))
              (&local_9c,*(undefined4 *)((int)this + 0x120));
    if (((local_9c != 0) && (iStack_98 != 0)) &&
       ((iStack_88 == 8 || ((iStack_88 == 0x10 || (iStack_88 == 0x20)))))) {
      piVar4 = (int *)FUN_10024ae1(this,aiStack_84,&local_9c);
      goto LAB_10026741;
    }
  }
  uVar3 = 0;
LAB_10026748:
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}

