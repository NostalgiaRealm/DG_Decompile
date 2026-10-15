/*
 * FUN_1002c01f at 1002c01f
 * undefined4 __thiscall FUN_1002c01f(void * this, int param_1, undefined4 param_2, undefined * param_3)
 * Address ranges: 1002c01f-1002c0f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002c01f(void *this,int param_1,undefined4 param_2,undefined *param_3)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar4 = 0x80070057;
  if ((param_3 != (undefined *)0x0) && (uVar4 = 0x887601c2, *(char *)((int)this + 8) == '\0')) {
    iVar3 = 1;
    if ((*(int **)((int)this + 0x110) != (int *)0x0) &&
       ((*(uint *)((int)this + 0x1bc) & 0xfe00) != 0x200)) {
      iVar3 = FUN_10035756(param_1,*(int **)((int)this + 0x110),param_3,param_2);
    }
    uVar5 = 0;
    do {
      if (iVar3 == 0) break;
      piVar1 = *(int **)((int)this + uVar5 * 4 + 0x120);
      if ((piVar1 != (int *)0x0) && ((piVar1[0x6f] & 0xfe00U) != 0x200)) {
        iVar3 = FUN_10035756(param_1,piVar1,param_3,param_2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    if ((*(int **)((int)this + 0x118) != (int *)0x0) && (iVar3 != 0)) {
      FUN_10035756(param_1,*(int **)((int)this + 0x118),param_3,param_2);
    }
    uVar4 = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

