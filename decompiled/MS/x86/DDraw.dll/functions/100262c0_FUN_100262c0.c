/*
 * FUN_100262c0 at 100262c0
 * undefined4 __thiscall FUN_100262c0(void * this, undefined4 param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 100262c0-10026364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100262c0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar2 = 0xffffffff;
  uVar4 = 0x80070057;
  if (param_2 == (undefined4 *)0x0) {
    if (param_3 == (undefined4 *)0x0) goto LAB_10026351;
LAB_1002632e:
    iVar3 = *(int *)((int)this + 0x11c) * 0x228;
    if (*(int *)(&DAT_1006c4ac + iVar3) == 0) {
      uVar2 = *(undefined4 *)(&DAT_1006c4a8 + iVar3);
    }
    *param_3 = uVar2;
  }
  else {
    iVar3 = *(int *)((int)this + 0x11c) * 0x228;
    if (*(int *)(&DAT_1006c4a4 + iVar3) == 0) {
      uVar4 = *(undefined4 *)(&DAT_1006c4a0 + iVar3);
    }
    else {
      uVar4 = 0xffffffff;
    }
    *param_2 = uVar4;
    if (param_3 != (undefined4 *)0x0) goto LAB_1002632e;
  }
  uVar4 = 0;
LAB_10026351:
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

