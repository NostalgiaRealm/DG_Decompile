/*
 * FUN_100030d5 at 100030d5
 * undefined __thiscall FUN_100030d5(void * this, int param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 100030d5-1000313e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100030d5(void *this,int param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  iVar3 = param_1 * 0x228;
  puVar4 = param_2;
  puVar5 = (undefined4 *)(&DAT_100ba89c + iVar3);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar6 = (uint *)(&DAT_100ba8b8 + iVar3);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  (&DAT_100ba90a)[iVar3] = 1;
  FUN_10023916(param_1,*(uint *)(&DAT_100ba8b8 + iVar3),*(undefined4 *)(&DAT_100ba8bc + iVar3));
  uVar1 = FUN_10001fe6(this,param_2[5]);
  *(undefined4 *)(&DAT_100ba1a0 + param_1 * 8) = uVar1;
  (&DAT_100ba1a4)[param_1 * 8] = 1;
  return;
}

