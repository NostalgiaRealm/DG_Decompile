/*
 * FUN_10014b9b at 10014b9b
 * undefined __thiscall FUN_10014b9b(void * this, int param_1, int param_2, int param_3, int param_4, int * param_5, uint param_6, uint param_7, int param_8, int param_9, uint param_10)
 * Address ranges: 10014b9b-10014c10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10014b9b(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5,uint param_6,
            uint param_7,int param_8,int param_9,uint param_10)

{
  char cVar1;
  undefined4 *puVar2;
  
  if ((*(char *)(*(int *)(*(int *)((int)this + 0x138) + 0x3684) * 0x18 + 0x530 +
                *(int *)(*(int *)((int)this + 0x138) + 0x3680)) == '\0') || (param_8 == 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  puVar2 = (undefined4 *)(param_1 * 0x120 + 0x140 + (int)this);
  FUN_100136b6(this,(int)puVar2,param_2,param_3,param_4,param_5,cVar1);
  FUN_100141ee(puVar2,param_6,param_7,param_8,param_9,param_10);
  return;
}

