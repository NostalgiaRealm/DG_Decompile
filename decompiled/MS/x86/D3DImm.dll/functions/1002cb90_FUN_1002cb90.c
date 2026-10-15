/*
 * FUN_1002cb90 at 1002cb90
 * undefined __thiscall FUN_1002cb90(void * this, int * param_1)
 * Address ranges: 1002cb90-1002cc0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cb90(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*(int *)this + 0x98))(0);
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0x11];
    iVar2 = param_1[0x12];
    iVar3 = param_1[0x13];
    *(int *)((int)this + 0xc30) = param_1[0x10];
    *(int *)((int)this + 0xc34) = iVar1;
    *(int *)((int)this + 0xc38) = iVar2;
    *(int *)((int)this + 0xc3c) = iVar3;
    iVar1 = param_1[0x15];
    iVar2 = param_1[0x16];
    iVar3 = param_1[0x17];
    *(int *)((int)this + 0xc40) = param_1[0x14];
    *(int *)((int)this + 0xc44) = iVar1;
    *(int *)((int)this + 0xc48) = iVar2;
    *(int *)((int)this + 0xc4c) = iVar3;
    iVar1 = param_1[0x19];
    iVar2 = param_1[0x1a];
    iVar3 = param_1[0x1b];
    *(int *)((int)this + 0xc50) = param_1[0x18];
    *(int *)((int)this + 0xc54) = iVar1;
    *(int *)((int)this + 0xc58) = iVar2;
    *(int *)((int)this + 0xc5c) = iVar3;
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar3 = param_1[3];
    *(int *)((int)this + 0xc60) = *param_1;
    *(int *)((int)this + 0xc64) = iVar1;
    *(int *)((int)this + 0xc68) = iVar2;
    *(int *)((int)this + 0xc6c) = iVar3;
    iVar1 = param_1[5];
    iVar2 = param_1[6];
    iVar3 = param_1[7];
    *(int *)((int)this + 0xc70) = param_1[4];
    *(int *)((int)this + 0xc74) = iVar1;
    *(int *)((int)this + 0xc78) = iVar2;
    *(int *)((int)this + 0xc7c) = iVar3;
    iVar1 = param_1[9];
    iVar2 = param_1[10];
    iVar3 = param_1[0xb];
    *(int *)((int)this + 0xc80) = param_1[8];
    *(int *)((int)this + 0xc84) = iVar1;
    *(int *)((int)this + 0xc88) = iVar2;
    *(int *)((int)this + 0xc8c) = iVar3;
  }
  *(uint *)((int)this + 0x470) =
       *(uint *)((int)this + 0x470) & 0x7fffffff | -(uint)(param_1 != (int *)0x0) & 0x80000000;
  return;
}

