/*
 * FUN_1002bbd9 at 1002bbd9
 * int __thiscall FUN_1002bbd9(void * this, int * param_1, int * param_2, char param_3)
 * Address ranges: 1002bbd9-1002bd90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002bbd9(void *this,int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  int extraout_ECX;
  int iVar6;
  
  BVar4 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar4 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar6 = -0x7ff8ffa9;
  if ((((param_2 == (int *)0x0) ||
       (iVar6 = -0x7789fd45,
       *(int *)(param_2[0x3f] + 0x118) != *(int *)(*(int *)((int)this + 0xfc) + 0x118))) ||
      (iVar6 = -0x7789fe3e, *(char *)((int)this + 8) != '\0')) || ((char)param_2[2] != '\0'))
  goto LAB_1002bd7c;
  FUN_1002b7cf((int)param_2);
  iVar6 = -0x7789fff6;
  iVar5 = FUN_1002b7cf((int)this);
  if (iVar5 == extraout_ECX) goto LAB_1002bd7c;
  bVar2 = FUN_1002b7ea(this,(int)param_2);
  if ((bVar2) || (bVar2 = FUN_1002b7ea(param_2,(int)this), bVar2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((param_2[0x6e] & 0x20000U) == 0) || (*(int *)((int)this + 0x118) != 0)) {
    if (param_2[0x43] != 0) goto LAB_1002bd7c;
    uVar1 = *(uint *)((int)this + 0x1b8);
    if ((uVar1 & 0x234) == 0) {
      if (*(int *)((int)this + 0x110) != 0) goto LAB_1002bd7c;
      if ((((uVar1 & param_2[0x6e] & 0x401000) == 0x401000) &&
          ((*(uint *)((int)this + 0x1bc) & 0x200) == 0)) && ((param_2[0x6f] & 0x200U) == 0)) {
        if (!bVar2) {
          iVar6 = FUN_1002ba89(this,param_1,(int)param_2);
          goto LAB_1002bd5d;
        }
        goto LAB_1002bc99;
      }
      if (((param_3 == '\0') || (((uVar1 | param_2[0x6e]) & 0x80c2100a) != 0)) ||
         ((bVar3 = FUN_1002bb6e((int)this), bVar3 || (DAT_1006c217 != '\0')))) goto LAB_1002bd7c;
    }
    else if ((uVar1 & 8) != 0) goto LAB_1002bd7c;
    if (!bVar2) {
      iVar6 = FUN_1002b89c(this,param_1,(int)param_2);
      goto LAB_1002bd5d;
    }
  }
  else if (!bVar2) {
    iVar6 = FUN_1002b80d(this,param_1,param_2);
LAB_1002bd5d:
    if ((-1 < iVar6) && (DAT_1006c238 != (int *)0x0)) {
      (**(code **)(*DAT_1006c238 + 0x30))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),this);
    }
    goto LAB_1002bd7c;
  }
LAB_1002bc99:
  iVar6 = -0x7789fe66;
LAB_1002bd7c:
  LeaveCriticalSection(DAT_1006c254);
  return iVar6;
}

