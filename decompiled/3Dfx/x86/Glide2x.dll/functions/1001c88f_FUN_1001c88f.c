/*
 * FUN_1001c88f at 1001c88f
 * undefined4 __thiscall FUN_1001c88f(void * this, int param_1, int param_2, undefined1 param_3, LONG param_4, LONG param_5, LONG param_6, LONG param_7, undefined4 param_8)
 * Address ranges: 1001c88f-1001c8fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1001c88f(void *this,int param_1,int param_2,undefined1 param_3,LONG param_4,LONG param_5,
            LONG param_6,LONG param_7,undefined4 param_8)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  iVar3 = (**(code **)(**(int **)((int)this + 0x315c) + 0x2c))(param_2);
  iVar1 = *(int *)(iVar3 + 100 + param_1 * 4);
  if (iVar1 == 0) {
    uVar4 = param_1 & 0xffffff00;
  }
  else {
    *(int *)(iVar3 + 100 + param_1 * 4) = iVar1 + -1;
    if ((*(int *)(iVar3 + 100) == 0) && (*(int *)(iVar3 + 0x68) == 0)) {
      bVar2 = FUN_1001c2e9(*(void **)((int)this + 0x315c),param_2,param_3,param_4,param_5,param_6,
                           param_7,param_8);
      param_1 = CONCAT31(extraout_var,bVar2);
      *(byte *)(iVar3 + 0x82) = *(byte *)(iVar3 + 0x82) & 0xfc | bVar2;
    }
    uVar4 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return uVar4;
}

