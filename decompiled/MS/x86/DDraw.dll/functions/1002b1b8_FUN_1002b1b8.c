/*
 * FUN_1002b1b8 at 1002b1b8
 * undefined4 __thiscall FUN_1002b1b8(void * this, int param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 1002b1b8-1002b217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002b1b8(void *this,int param_1,undefined4 *param_2,uint *param_3)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 uVar4;
  
  BVar3 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar3 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar1 = *(int *)((int)this + 4);
  cVar2 = (**(code **)(**(int **)(iVar1 + 0x50) + 0x14))
                    (*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70));
  if (cVar2 != '\0') {
    FUN_1002b35b((int *)((int)this + 0x20));
  }
  uVar4 = FUN_1002b41e((void *)((int)this + 0x20),param_1,param_2,param_3);
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

