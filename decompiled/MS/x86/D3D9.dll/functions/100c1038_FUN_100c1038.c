/*
 * FUN_100c1038 at 100c1038
 * char __thiscall FUN_100c1038(void * this, uint param_1, undefined * param_2, char param_3)
 * Address ranges: 100c1038-100c10d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100c1038(void *this,uint param_1,undefined *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  piVar3 = (int *)FUN_100c19ce((void *)((int)this + 0xc),&param_1);
  if (piVar3 != (int *)0x0) {
    if (param_3 != '\0') {
      cVar2 = FUN_100c0dac(piVar3,'\x01');
      if (cVar2 == '\0') {
        iVar1 = piVar3[1];
        if (*(int *)(iVar1 + 0x8e0) != 0) {
          *(uint *)(iVar1 + 0x7e0 + *(int *)(iVar1 + 0x918) * 8) = param_1;
          *(undefined **)(iVar1 + 0x7e4 + *(int *)(iVar1 + 0x918) * 8) = param_2;
          *(int *)(iVar1 + 0x918) = *(int *)(iVar1 + 0x918) + 1;
        }
        goto LAB_100c10c6;
      }
    }
    FUN_100c1a0d((void *)((int)this + 0xc),&param_1);
    if (param_2 != (undefined *)0x0) {
      (*(code *)param_2)(param_1);
    }
  }
LAB_100c10c6:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return cVar2;
}

