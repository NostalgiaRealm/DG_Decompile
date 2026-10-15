/*
 * FUN_10058b91 at 10058b91
 * undefined __thiscall FUN_10058b91(void * this, int param_1, int param_2, undefined4 param_3, uint param_4, uint param_5)
 * Address ranges: 10058b91-10058c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10058b91(void *this,int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)FUN_1005918d((void *)((int)this + 0x3c),&param_4);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *(uint *)((int)this + 0x28);
    uVar3 = param_1 + -1 + uVar1 & -uVar1;
    FUN_10058534(puVar2[4],puVar2[5],(param_2 - param_4) / uVar1,
                 ((param_2 - param_4) + uVar3) / uVar1);
    puVar2[8] = puVar2[8] - uVar3 / *(uint *)((int)this + 0x28);
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) - uVar3;
    if ((puVar2[8] == 0) &&
       (((puVar2[3] != 0 || (*(uint *)((int)this + 0x2c) < puVar2[2])) &&
        (*(int *)((int)this + 0x30) == 0)))) {
      FUN_10058b0f(this,puVar2);
      uVar1 = param_5;
      uVar3 = FUN_10056ae4((void *)((int)this + 0x3c),param_4,param_5);
      if (uVar3 != *(uint *)((int)this + 0x44)) {
        if ((*(uint *)(uVar3 * 0x38 + *(int *)((int)this + 0x40)) == param_4) &&
           (*(uint *)(uVar3 * 0x38 + 4 + *(int *)((int)this + 0x40)) == uVar1)) {
          FUN_100569d7((void *)((int)this + 0x3c),uVar3);
        }
      }
    }
  }
  return;
}

