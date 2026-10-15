/*
 * FUN_1004be3e at 1004be3e
 * DWORD * __thiscall FUN_1004be3e(void * this, DWORD * param_1, int param_2, undefined4 param_3)
 * Address ranges: 1004be3e-1004bec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD * __thiscall FUN_1004be3e(void *this,DWORD *param_1,int param_2,undefined4 param_3)

{
  void *this_00;
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD local_14;
  DWORD local_10;
  uint local_c;
  uint local_8;
  
  pDVar2 = param_1;
  this_00 = *(void **)((int)this + 8);
  param_1 = (DWORD *)0x0;
  piVar1 = *(int **)(param_2 * 0x28 + 0x18 + (int)this_00);
  *pDVar2 = 0;
  pDVar2[1] = 0;
  iVar3 = *piVar1;
  pDVar2[2] = 0;
  pDVar2[3] = 0;
  pDVar2[4] = 0;
  pDVar2[5] = 0;
  iVar3 = (**(code **)(iVar3 + 0x1c))(piVar1,param_3,&param_1);
  if (iVar3 < 0) {
    param_1 = (DWORD *)0x0;
  }
  uVar4 = FUN_10045916(this_00,(int *)param_1,&local_14);
  if ((char)uVar4 != '\0') {
    *pDVar2 = local_14;
    pDVar2[1] = local_10;
    pDVar2[2] = local_c;
    pDVar2[3] = local_8;
    pDVar2[4] = local_c / local_8;
    pDVar2[5] = 0x20;
  }
  return pDVar2;
}

