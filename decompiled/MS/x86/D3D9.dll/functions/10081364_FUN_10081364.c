/*
 * FUN_10081364 at 10081364
 * uint * __thiscall FUN_10081364(void * this, int * param_1, undefined4 param_2, uint * param_3, int param_4)
 * Address ranges: 10081364-100813e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_10081364(void *this,int *param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = FUN_100c817e((void *)(*(int *)((int)this + 8) + 0x1580),param_1,0,param_3);
  if (puVar1 != (uint *)0x0) goto LAB_100813d6;
  piVar2 = (int *)0x0;
  if (param_4 != 0) {
    local_18 = param_4;
    if ((param_3[0xc] & 1) == 0) {
      if ((param_3[0xc] & 2) == 0) goto LAB_100813bd;
      local_14 = 0x3f800000;
      local_10 = local_10 & 0xffffff00;
    }
    else {
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
    }
    piVar2 = &local_18;
  }
LAB_100813bd:
  puVar1 = (uint *)FUN_100c830b(*(void **)this,*(int *)((int)this + 4),param_1,0,param_3,param_4,
                                piVar2);
  if (puVar1 == (uint *)0x0) {
    return (uint *)0x0;
  }
LAB_100813d6:
  (**(code **)(*puVar1 + 4))(puVar1);
  return puVar1;
}

