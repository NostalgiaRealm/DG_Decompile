/*
 * FUN_10055793 at 10055793
 * char __thiscall FUN_10055793(void * this, uint param_1, undefined * param_2, char param_3)
 * Address ranges: 10055793-10055835
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10055793(void *this,uint param_1,undefined *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  piVar3 = (int *)FUN_10055f2c((void *)((int)this + 0xc),&param_1);
  if (piVar3 != (int *)0x0) {
    if (param_3 != '\0') {
      cVar2 = FUN_10055631(piVar3);
      if (cVar2 == '\0') {
        iVar1 = piVar3[1];
        if (*(int *)(iVar1 + 0x8e0) != 0) {
          *(uint *)(iVar1 + 0x7e0 + *(int *)(iVar1 + 0x918) * 8) = param_1;
          *(undefined **)(iVar1 + 0x7e4 + *(int *)(iVar1 + 0x918) * 8) = param_2;
          *(int *)(iVar1 + 0x918) = *(int *)(iVar1 + 0x918) + 1;
        }
        goto LAB_10055824;
      }
    }
    FUN_10055f6b((void *)((int)this + 0xc),&param_1);
    if (param_2 != (undefined *)0x0) {
      (*(code *)param_2)(param_1);
    }
  }
LAB_10055824:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return cVar2;
}

