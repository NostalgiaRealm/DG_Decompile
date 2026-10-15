/*
 * FUN_100269bf at 100269bf
 * undefined4 __thiscall FUN_100269bf(void * this, uint * param_1)
 * Address ranges: 100269bf-10026a31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100269bf(void *this,uint *param_1)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar4 = 0x80070057;
  if (param_1 != (uint *)0x0) {
    iVar3 = *(int *)((int)this + 0x11c) * 0xa4;
    uVar4 = 0;
    cVar1 = (**(code **)(**(int **)((int)this + 0x118) + 0x54))
                      (*(undefined4 *)((int)this + 0x120),*(undefined4 *)(&DAT_100698dc + iVar3),
                       *(undefined4 *)(&DAT_100698d8 + iVar3),0);
    *param_1 = (uint)(cVar1 != '\0');
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

