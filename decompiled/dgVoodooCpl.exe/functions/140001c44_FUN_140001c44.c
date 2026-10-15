/*
 * FUN_140001c44 at 140001c44
 * undefined8 __fastcall FUN_140001c44(longlong param_1, uint * param_2)
 * Address ranges: 140001c44-140001cba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140001c44(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  undefined8 local_28 [4];
  ulonglong uVar5;
  
  uVar3 = FUN_14000e460(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  if (uVar3 == 0xffffffff) {
    bVar2 = FUN_140001538(param_1,param_2);
    uVar5 = CONCAT71(extraout_var,bVar2);
  }
  else {
    bVar2 = true;
    uVar3 = FUN_14000e270(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(ulonglong)uVar3);
    puVar4 = FUN_140001b14(param_1,local_28,uVar3);
    uVar1 = puVar4[1];
    *(undefined8 *)param_2 = *puVar4;
    *(undefined8 *)(param_2 + 2) = uVar1;
    uVar5 = (ulonglong)*(uint *)(puVar4 + 2);
    param_2[4] = *(uint *)(puVar4 + 2);
  }
  return CONCAT71((int7)(uVar5 >> 8),bVar2);
}

