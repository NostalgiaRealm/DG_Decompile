/*
 * FUN_1003c714 at 1003c714
 * undefined4 * __thiscall FUN_1003c714(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, char * param_8, undefined4 param_9)
 * Address ranges: 1003c714-1003c88e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1003c714(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,char *param_8,
            undefined4 param_9)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  *(undefined4 *)((int)this + 0x8e0) = param_3;
  *(undefined4 *)((int)this + 0x8e4) = param_5;
  *(undefined4 *)((int)this + 0x900) = param_9;
  *(undefined4 *)((int)this + 0x91c) = param_4;
  pcVar2 = "[noname]";
  if (param_8 != (char *)0x0) {
    pcVar2 = param_8;
  }
  *(char **)((int)this + 0x94c) = pcVar2;
  *(undefined ***)this = &PTR_FUN_10054460;
  *(undefined ***)((int)this + 4) = &PTR_LAB_10054434;
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x630) = 0x800;
  *(undefined4 *)((int)this + 0x634) = 0;
  *(undefined4 *)((int)this + 0x638) = 0;
  *(undefined4 *)((int)this + 0x8e8) = 0;
  *(undefined4 *)((int)this + 0x8ec) = 0;
  *(undefined4 *)((int)this + 0x8f0) = 0;
  *(undefined4 *)((int)this + 0x8f4) = 0;
  *(undefined4 *)((int)this + 0x8f8) = 0;
  *(undefined4 *)((int)this + 0x8fc) = 0;
  *(undefined4 *)((int)this + 0x908) = 0;
  *(undefined4 *)((int)this + 0x90c) = 0;
  *(undefined4 *)((int)this + 0x910) = 0xffffffff;
  *(undefined4 *)((int)this + 0x914) = 0;
  *(undefined4 *)((int)this + 0x918) = 0;
  *(undefined4 *)((int)this + 0x924) = 0x18;
  *(undefined4 *)((int)this + 0x928) = 0;
  *(undefined4 *)((int)this + 0x92c) = 0;
  *(undefined4 *)((int)this + 0x930) = 0;
  *(undefined4 *)((int)this + 0x938) = 0;
  *(undefined4 *)((int)this + 0x93c) = 0;
  *(undefined4 *)((int)this + 0x940) = 0;
  *(undefined4 *)((int)this + 0x944) = 0;
  *(undefined4 *)((int)this + 0x948) = 0;
  piVar1 = *(int **)(param_2 * 0x18 + param_1);
  uVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,2);
  *(undefined4 *)((int)this + 0x950) = uVar3;
  *(undefined4 *)((int)this + 0x954) = 0;
  *(undefined4 *)((int)this + 0x958) = 0;
  *(undefined4 *)((int)this + 0x95c) = 0;
  *(undefined4 *)((int)this + 0x960) = 0;
  FUN_100501d1((int *)((int)this + 0x63c),0,0x60);
  FUN_100501d1((int *)((int)this + 0x6a0),0,0xc0);
  FUN_100501d1((int *)((int)this + 0x760),0,0x80);
  FUN_100501d1((int *)((int)this + 0x7e0),0,0x100);
  FUN_100501d1((int *)((int)this + 0x10),0,0x620);
  return this;
}

