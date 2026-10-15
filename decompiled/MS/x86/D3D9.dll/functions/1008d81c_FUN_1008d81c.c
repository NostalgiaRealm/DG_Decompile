/*
 * FUN_1008d81c at 1008d81c
 * undefined __thiscall FUN_1008d81c(void * this, int param_1, uint param_2, uint param_3, byte param_4, byte param_5, char param_6, char param_7, byte param_8)
 * Address ranges: 1008d81c-1008d8ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1008d81c(void *this,int param_1,uint param_2,uint param_3,byte param_4,byte param_5,char param_6
            ,char param_7,byte param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = 0;
  uVar5 = 0x3f800000;
  if (param_6 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  *(undefined4 *)((int)this + 0x1ce38) = uVar6;
  if (param_7 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  *(uint *)((int)this + 0x1ce74) = (uint)param_4;
  *(uint *)((int)this + 0x1ceb8) = (uint)param_5;
  *(undefined4 *)((int)this + 0x1ce3c) = uVar6;
  *(uint *)((int)this + 0x1ceb0) = param_3;
  *(uint *)((int)this + 0x1cea8) = param_2 & param_3;
  uVar2 = FUN_1008ce6d(param_1,param_3);
  *(uint *)((int)this + 0x1ceb4) = uVar2;
  uVar3 = FUN_1008cc6c(param_1,0,param_2);
  *(undefined4 *)((int)this + 0x1ce88) = 0;
  cVar1 = (&DAT_100d2700)[param_1];
  *(uint *)((int)this + 0x1ceac) = uVar3 & uVar2;
  *(uint *)((int)this + 0x1ce78) = (uint)param_8;
  *(undefined4 *)((int)this + 0x1ce84) = 0;
  *(undefined4 *)((int)this + 0x1ce80) = 0;
  if (cVar1 == '\0') {
    uVar4 = uVar5;
  }
  *(undefined4 *)((int)this + 0x1ce8c) = uVar4;
  return;
}

