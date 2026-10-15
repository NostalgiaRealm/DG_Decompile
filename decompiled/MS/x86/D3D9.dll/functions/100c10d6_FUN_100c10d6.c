/*
 * FUN_100c10d6 at 100c10d6
 * char __thiscall FUN_100c10d6(void * this, uint param_1, char param_2)
 * Address ranges: 100c10d6-100c117b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100c10d6(void *this,uint param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  uVar2 = FUN_100c1b32(this,&param_1);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_100c1ae3(this,&param_1);
    if (iVar3 != 0) {
      if (param_2 != '\0') {
        cVar1 = FUN_100c0e7c(iVar3,0xffffffff);
        if (cVar1 == '\0') goto LAB_100c116a;
      }
      uVar2 = param_1;
      uVar5 = (int)param_1 >> 0x1f;
      uVar4 = FUN_100c1d38(this,param_1,uVar5);
      if (((uVar4 != *(uint *)((int)this + 8)) && (*(uint *)(*(int *)this + uVar4 * 0x10) == uVar2))
         && (*(uint *)(*(int *)this + 4 + uVar4 * 0x10) == uVar5)) {
        FUN_100c1ce7(this,uVar4);
      }
    }
  }
LAB_100c116a:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return cVar1;
}

