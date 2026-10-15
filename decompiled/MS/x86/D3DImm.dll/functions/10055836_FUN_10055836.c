/*
 * FUN_10055836 at 10055836
 * char __thiscall FUN_10055836(void * this, uint param_1, char param_2)
 * Address ranges: 10055836-100558db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10055836(void *this,uint param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  uVar2 = FUN_10056090(this,&param_1);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_10056041(this,&param_1);
    if (iVar3 != 0) {
      if (param_2 != '\0') {
        cVar1 = FUN_100556fb(iVar3,0xffffffff);
        if (cVar1 == '\0') goto LAB_100558ca;
      }
      uVar2 = param_1;
      uVar5 = (int)param_1 >> 0x1f;
      uVar4 = FUN_100562e9(this,param_1,uVar5);
      if (((uVar4 != *(uint *)((int)this + 8)) && (*(uint *)(*(int *)this + uVar4 * 0x10) == uVar2))
         && (*(uint *)(*(int *)this + 4 + uVar4 * 0x10) == uVar5)) {
        FUN_10056298(this,uVar4);
      }
    }
  }
LAB_100558ca:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return cVar1;
}

