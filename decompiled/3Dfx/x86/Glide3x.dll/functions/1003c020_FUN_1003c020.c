/*
 * FUN_1003c020 at 1003c020
 * char __thiscall FUN_1003c020(void * this, uint param_1, char param_2)
 * Address ranges: 1003c020-1003c0c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1003c020(void *this,uint param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  uVar2 = FUN_1003c63a(this,&param_1);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_1003c5eb(this,&param_1);
    if (iVar3 != 0) {
      if (param_2 != '\0') {
        cVar1 = FUN_1003bdc1(iVar3,0xffffffff);
        if (cVar1 == '\0') goto LAB_1003c0b4;
      }
      uVar2 = param_1;
      uVar5 = (int)param_1 >> 0x1f;
      uVar4 = FUN_1003c893(this,param_1,uVar5);
      if (((uVar4 != *(uint *)((int)this + 8)) && (*(uint *)(*(int *)this + uVar4 * 0x10) == uVar2))
         && (*(uint *)(*(int *)this + 4 + uVar4 * 0x10) == uVar5)) {
        FUN_1003c842(this,uVar4);
      }
    }
  }
LAB_1003c0b4:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return cVar1;
}

