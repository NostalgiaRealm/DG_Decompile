/*
 * FUN_100394e3 at 100394e3
 * undefined4 * __thiscall FUN_100394e3(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 100394e3-10039575
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100394e3(void *this,int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)FUN_100cfd55(0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *(undefined4 *)((int)this + 200);
    uVar1 = *(undefined4 *)((int)this + 0xc4);
    *puVar2 = &PTR_FUN_100d54f8;
    FUN_10039737(puVar2 + 1,this,uVar1,uVar3,param_1,param_2,0);
    puVar4 = puVar2 + 1;
    *puVar2 = &PTR_FUN_100d59b4;
    puVar2[1] = &PTR_FUN_100d57ec;
    uVar3 = FUN_10039c6a((int)puVar4);
    if ((char)uVar3 != '\0') {
      if (param_2 != (undefined4 *)0x1) {
        return puVar2;
      }
      if (puVar2 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      param_2 = puVar4;
      FUN_10003d8f((void *)((int)this + 0xd4),&param_2);
      return puVar2;
    }
    FUN_1004c1e6(puVar2);
    FUN_100cfd6c(puVar2);
  }
  return (undefined4 *)0x0;
}

