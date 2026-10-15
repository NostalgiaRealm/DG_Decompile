/*
 * FUN_1004da3a at 1004da3a
 * undefined4 * __thiscall FUN_1004da3a(void * this, undefined4 * param_1, uint param_2, uint param_3)
 * Address ranges: 1004da3a-1004da7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004da3a(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_1004e247(this,param_2,param_3);
  puVar3 = puVar1;
  puVar4 = param_1;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = puVar1 + 0xb;
  puVar4 = param_1 + 0xb;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x16] = *(undefined4 *)((int)this + 0x80);
  param_1[0x17] = *(undefined4 *)((int)this + 0x84);
  return param_1;
}

