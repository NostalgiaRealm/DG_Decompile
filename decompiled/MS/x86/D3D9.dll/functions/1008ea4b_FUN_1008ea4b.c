/*
 * FUN_1008ea4b at 1008ea4b
 * undefined __thiscall FUN_1008ea4b(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, char param_4)
 * Address ranges: 1008ea4b-1008eac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1008ea4b(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x54))(param_1,param_2,param_3,0);
  if (param_4 == '\0') {
    while (iVar2 = *(int *)this, cVar1 == '\0') {
      cVar1 = (**(code **)(iVar2 + 0x54))(param_1,param_2,param_3,0);
    }
    while (cVar1 = (**(code **)(iVar2 + 0x54))(param_1,param_2,param_3,0), cVar1 != '\0') {
      iVar2 = *(int *)this;
    }
  }
  else {
    while (iVar2 = *(int *)this, cVar1 != '\0') {
      cVar1 = (**(code **)(iVar2 + 0x54))(param_1,param_2,param_3,0);
    }
    while (cVar1 = (**(code **)(iVar2 + 0x54))(param_1,param_2,param_3,0), cVar1 == '\0') {
      iVar2 = *(int *)this;
    }
  }
  return;
}

