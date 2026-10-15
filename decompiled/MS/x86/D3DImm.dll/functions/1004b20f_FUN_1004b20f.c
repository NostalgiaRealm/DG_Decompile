/*
 * FUN_1004b20f at 1004b20f
 * undefined4 __thiscall FUN_1004b20f(void * this, int * param_1)
 * Address ranges: 1004b20f-1004b265
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004b20f(void *this,int *param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x80070057;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x50)) {
    piVar4 = (int *)((int)this + 0x80);
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *param_1;
      param_1 = param_1 + 1;
      piVar4 = piVar4 + 1;
    }
    *(undefined1 *)((int)this + 0xd4) = 1;
    uVar3 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

