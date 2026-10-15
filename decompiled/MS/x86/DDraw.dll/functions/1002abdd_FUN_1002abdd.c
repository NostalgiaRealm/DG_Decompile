/*
 * FUN_1002abdd at 1002abdd
 * undefined4 __thiscall FUN_1002abdd(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 1002abdd-1002ac7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002abdd(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 uVar4;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar4 = 0x80070057;
  if ((((param_1 & 0xffffffe1) == 0) &&
      ((((uVar3 = param_1 & 0x1e, uVar3 == 2 || (uVar3 == 4)) || (uVar3 == 8)) || (uVar3 == 0x10))))
     && ((((param_2 != (undefined4 *)0x0 && (uVar4 = 0x887600dc, uVar3 != 2)) &&
          (uVar4 = 0x80004001, uVar3 == 8)) &&
         ((uVar4 = 0x887601c2, *(char *)((int)this + 8) == '\0' &&
          (uVar4 = 0x887600d7, (*(uint *)((int)this + 0x154) & 0x10000) != 0)))))) {
    uVar4 = 0;
    uVar1 = *(undefined4 *)((int)this + 0x194);
    *param_2 = *(undefined4 *)((int)this + 400);
    param_2[1] = uVar1;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

