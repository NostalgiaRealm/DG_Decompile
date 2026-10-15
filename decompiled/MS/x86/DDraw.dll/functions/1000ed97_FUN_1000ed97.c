/*
 * FUN_1000ed97 at 1000ed97
 * bool __thiscall FUN_1000ed97(void * this, int * param_1)
 * Address ranges: 1000ed97-1000ee3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1000ed97(void *this,int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
LAB_1000ee32:
    bVar2 = false;
  }
  else {
    iVar3 = *param_1 + -0x88;
    if (*param_1 == 0) {
      iVar3 = 0;
    }
    *(int *)((int)this + 0xb0) = iVar3;
    if ((((((char)param_1[3] == '\0') && (iVar3 != 0)) &&
         (iVar3 = (**(code **)(*(int *)(iVar3 + 0x88) + 0x24))(), iVar3 == 1)) &&
        (iVar3 = *(int *)((int)this + 0xb0), *(int *)(iVar3 + 0x24) == 1)) &&
       ((piVar1 = (int *)param_1[1], piVar1 == (int *)0x0 ||
        (((*piVar1 == 0 && (piVar1[1] == 0)) &&
         ((*(int *)(iVar3 + 0x14) == piVar1[2] && (*(int *)(iVar3 + 0x18) == piVar1[3])))))))) {
      piVar1 = (int *)param_1[2];
      if (piVar1 == (int *)0x0) goto LAB_1000ee32;
      if (((*piVar1 == 0) && (piVar1[1] == 0)) &&
         (*(int *)(*(int *)((int)this + 0xac) + 0x10) == piVar1[2])) {
        return *(int *)(*(int *)((int)this + 0xac) + 0x14) != piVar1[3];
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

