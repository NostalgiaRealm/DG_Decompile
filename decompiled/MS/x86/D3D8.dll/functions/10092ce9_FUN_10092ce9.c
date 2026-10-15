/*
 * FUN_10092ce9 at 10092ce9
 * undefined __thiscall FUN_10092ce9(void * this, int param_1, float * param_2)
 * Address ranges: 10092ce9-10092d88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10092ce9(void *this,int param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = param_1 * 0x1510;
  pfVar3 = (float *)((int)this + iVar2 + 2000);
  if ((((*param_2 == *pfVar3) && (param_2[1] == *(float *)(iVar2 + 0x7d4 + (int)this))) &&
      (param_2[2] == *(float *)(iVar2 + 0x7d8 + (int)this))) &&
     (((param_2[3] == *(float *)(iVar2 + 0x7dc + (int)this) &&
       (param_2[4] == *(float *)(iVar2 + 0x7e0 + (int)this))) &&
      (param_2[5] == *(float *)(iVar2 + 0x7e4 + (int)this))))) {
    return;
  }
  piVar1 = *(int **)(iVar2 + 0x514 + (int)this);
  (**(code **)(*piVar1 + 0xb0))(piVar1,1,param_2);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *param_2;
    param_2 = param_2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return;
}

