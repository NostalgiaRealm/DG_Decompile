/*
 * FUN_10040121 at 10040121
 * undefined4 __thiscall FUN_10040121(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3)
 * Address ranges: 10040121-100401c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10040121(void *this,undefined4 param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(uint *)((int)this + 8) = param_2;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100ad475(0xc0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar3 = param_3;
      puVar4 = puVar1 + 4;
      for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    *(undefined4 **)((int)this + 0xc) = puVar1;
    param_2 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_1003fe01(this,param_3);
      *(int *)((int)this + 0x2c) = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_1003fe01(this,param_3 + 0x2c);
        *(int *)((int)this + 0x30) = iVar2;
        if (iVar2 != 0) {
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
      }
      puVar1 = *(undefined4 **)((int)this + 0xc);
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      FUN_10007c30(puVar1);
      param_2 = FUN_100ad48c(puVar1);
    }
  }
  return param_2 & 0xffffff00;
}

