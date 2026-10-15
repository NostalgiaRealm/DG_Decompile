/*
 * FUN_10050fda at 10050fda
 * undefined __thiscall FUN_10050fda(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10050fda-10051086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10050fda(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar3 = param_4;
  iVar1 = *(int *)this;
  iVar5 = param_1 * 0x20;
  *(undefined4 *)(iVar5 + iVar1) = param_2;
  *(undefined4 *)(iVar5 + 4 + iVar1) = param_3;
  puVar6 = (undefined4 *)(*(int *)this + iVar5 + 8);
  *puVar6 = *param_4;
  puVar6[1] = param_4[1];
  puVar6[2] = param_4[2];
  puVar6[3] = param_4[3];
  local_24 = *param_4;
  piVar2 = (int *)param_4[1];
  local_8 = this;
  if (piVar2 == (int *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  piVar2 = (int *)puVar3[1];
  if (piVar2 == (int *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = (**(code **)(*piVar2 + 0x10))(piVar2);
  }
  piVar4 = local_8;
  local_18 = puVar3[2];
  local_14 = 0;
  local_10 = 0;
  param_4 = (undefined4 *)0x0;
  local_c = puVar3[3];
  piVar2 = *(int **)(local_8[5] * 0x18 + local_8[4]);
  (**(code **)(*piVar2 + 0x2c))(piVar2,&local_24,&DAT_1005a76c,&param_4);
  *(undefined4 **)(iVar5 + 0x18 + *piVar4) = param_4;
  return;
}

