/*
 * FUN_1002a319 at 1002a319
 * undefined __thiscall FUN_1002a319(void * this, int param_1, char param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 1002a319-1002a3f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002a319(void *this,int param_1,char param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + ((uint)(param_6 - param_4) >> 4);
  if ((((param_3 == 0) && (param_5 == *(int *)(param_1 + 0x20))) && (param_4 == 0)) &&
     ((param_6 == *(int *)(param_1 + 0x24) && (*(char *)(param_1 + 0x49) == '\0')))) {
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
    if (param_2 == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0xfc);
      uVar2 = *(undefined4 *)(param_1 + 0xc4);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x100);
      uVar2 = *(undefined4 *)(param_1 + 0xdc);
    }
    (**(code **)(*piVar1 + 0xbc))(piVar1,uVar2,uVar3);
  }
  else {
    local_10 = param_5;
    local_1c = param_3;
    local_18 = param_4;
    local_14 = 0;
    local_c = param_6;
    local_8 = 1;
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
    if (param_2 == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0xfc);
      uVar2 = *(undefined4 *)(param_1 + 0xc4);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x100);
      uVar2 = *(undefined4 *)(param_1 + 0xdc);
    }
    (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2,0,param_3,param_4,0,uVar3,0,&local_1c);
  }
  return;
}

