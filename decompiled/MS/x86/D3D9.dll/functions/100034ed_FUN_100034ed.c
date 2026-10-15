/*
 * FUN_100034ed at 100034ed
 * undefined __thiscall FUN_100034ed(void * this, int param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 100034ed-10003557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100034ed(void *this,int param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  iVar3 = param_1 * 0x228;
  puVar4 = param_2;
  puVar5 = (undefined4 *)(&DAT_100df464 + iVar3);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar6 = (uint *)(&DAT_100df480 + iVar3);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  (&DAT_100df4d2)[iVar3] = 1;
  FUN_1002af4a(param_1,*(uint *)(&DAT_100df480 + iVar3),*(undefined4 *)(&DAT_100df484 + iVar3));
  uVar1 = FUN_10001ed6(this,param_2[5]);
  *(undefined4 *)(&DAT_100deed8 + param_1 * 0x20) = uVar1;
  (&DAT_100deedc)[param_1 * 0x20] = 1;
  return;
}

