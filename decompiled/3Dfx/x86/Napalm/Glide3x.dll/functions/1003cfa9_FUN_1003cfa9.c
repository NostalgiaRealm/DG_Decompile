/*
 * FUN_1003cfa9 at 1003cfa9
 * undefined4 __fastcall FUN_1003cfa9(int * param_1)
 * Address ranges: 1003cfa9-1003d057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1003cfa9(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  HANDLE pvVar5;
  int local_14 [4];
  
  local_14[0] = param_1[8];
  piVar1 = param_1 + 2;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  piVar2 = *(int **)(param_1[1] * 0x18 + *param_1);
  uVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,local_14,&DAT_1005a748,piVar1);
  if (-1 < (int)uVar3) {
    (**(code **)(*(int *)*piVar1 + 4))((int *)*piVar1);
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,param_1[9]);
    piVar2 = *(int **)(param_1[1] * 0x18 + *param_1);
    iVar4 = (**(code **)(*piVar2 + 0x90))(piVar2,0,0,0,&DAT_1005a738,param_1 + 3);
    if (-1 < iVar4) {
      pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      param_1[4] = (int)pvVar5;
      if (pvVar5 != (HANDLE)0x0) {
        return CONCAT31((int3)((uint)pvVar5 >> 8),1);
      }
      piVar2 = (int *)param_1[3];
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    uVar3 = (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    *piVar1 = 0;
  }
  return uVar3 & 0xffffff00;
}

