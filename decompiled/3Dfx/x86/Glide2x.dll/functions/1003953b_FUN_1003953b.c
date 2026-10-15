/*
 * FUN_1003953b at 1003953b
 * char __thiscall FUN_1003953b(void * this, uint param_1, char param_2)
 * Address ranges: 1003953b-100395e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1003953b(void *this,uint param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  uVar2 = FUN_10039b55(this,&param_1);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_10039b06(this,&param_1);
    if (iVar3 != 0) {
      if (param_2 != '\0') {
        cVar1 = FUN_100392dc(iVar3,0xffffffff);
        if (cVar1 == '\0') goto LAB_100395cf;
      }
      uVar2 = param_1;
      uVar5 = (int)param_1 >> 0x1f;
      uVar4 = FUN_10039dae(this,param_1,uVar5);
      if (((uVar4 != *(uint *)((int)this + 8)) && (*(uint *)(*(int *)this + uVar4 * 0x10) == uVar2))
         && (*(uint *)(*(int *)this + 4 + uVar4 * 0x10) == uVar5)) {
        FUN_10039d5d(this,uVar4);
      }
    }
  }
LAB_100395cf:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return cVar1;
}

