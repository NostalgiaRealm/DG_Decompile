/*
 * FUN_10049b7b at 10049b7b
 * undefined __thiscall FUN_10049b7b(void * this, int param_1, int param_2, undefined4 param_3, uint param_4, uint param_5)
 * Address ranges: 10049b7b-10049c39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10049b7b(void *this,int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)FUN_1004a23b((void *)((int)this + 0x3c),&param_4);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *(uint *)((int)this + 0x28);
    uVar3 = param_1 + -1 + uVar1 & -uVar1;
    FUN_1004d264(puVar2[4],puVar2[5],(param_2 - param_4) / uVar1,
                 ((param_2 - param_4) + uVar3) / uVar1);
    puVar2[8] = puVar2[8] - uVar3 / *(uint *)((int)this + 0x28);
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) - uVar3;
    if ((puVar2[8] == 0) &&
       (((puVar2[3] != 0 || (*(uint *)((int)this + 0x2c) < puVar2[2])) &&
        (*(int *)((int)this + 0x30) == 0)))) {
      FUN_10049af9(this,puVar2);
      uVar1 = param_5;
      uVar3 = FUN_10046d00((void *)((int)this + 0x3c),param_4,param_5);
      if (uVar3 != *(uint *)((int)this + 0x44)) {
        if ((*(uint *)(uVar3 * 0x38 + *(int *)((int)this + 0x40)) == param_4) &&
           (*(uint *)(uVar3 * 0x38 + 4 + *(int *)((int)this + 0x40)) == uVar1)) {
          FUN_10046bf3((void *)((int)this + 0x3c),uVar3);
        }
      }
    }
  }
  return;
}

