/*
 * FUN_1002691b at 1002691b
 * undefined4 __thiscall FUN_1002691b(void * this, undefined4 param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1002691b-100269be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002691b(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar5 = 0x80070057;
  if ((param_2 != 0) && (param_3 != (undefined4 *)0x0)) {
    *param_3 = 0;
    uVar3 = 0;
    uVar5 = 0x887600ff;
    if (*(uint *)((int)this + 300) != 0) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x128) + uVar3 * 4);
        iVar4 = piVar1[1];
        if ((*(int *)(iVar4 + 0xb0) != 0) && (*(int *)(iVar4 + 0x94) == param_2)) {
          uVar5 = 0x80004005;
          iVar4 = (**(code **)(*piVar1 + 0x34))(param_1,param_3,0);
          if (-1 < iVar4) {
            uVar5 = 0;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 300));
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar5;
}

