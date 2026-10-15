/*
 * FUN_1002f772 at 1002f772
 * undefined4 * __thiscall FUN_1002f772(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 1002f772-1002f804
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002f772(void *this,int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)FUN_100ad475(0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *(undefined4 *)((int)this + 200);
    uVar1 = *(undefined4 *)((int)this + 0xc4);
    *puVar2 = &PTR_FUN_100b1fec;
    FUN_1002f926(puVar2 + 1,this,uVar1,uVar3,param_1,param_2,0);
    puVar4 = puVar2 + 1;
    *puVar2 = &PTR_FUN_100b23dc;
    puVar2[1] = &PTR_FUN_100b2250;
    uVar3 = FUN_1002fe59((int)puVar4);
    if ((char)uVar3 != '\0') {
      if (param_2 != (undefined4 *)0x1) {
        return puVar2;
      }
      if (puVar2 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      param_2 = puVar4;
      FUN_10003787((void *)((int)this + 0xd4),&param_2);
      return puVar2;
    }
    FUN_1003f762(puVar2);
    FUN_100ad48c(puVar2);
  }
  return (undefined4 *)0x0;
}

