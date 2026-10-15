/*
 * FUN_100083eb at 100083eb
 * undefined __fastcall FUN_100083eb(int * param_1)
 * Address ranges: 100083eb-10008436
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100083eb(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_144 [236];
  undefined4 local_58 [20];
  int *local_8;
  
  iVar4 = param_1[0x6c];
  local_8 = param_1;
  puVar1 = FUN_1000793b(local_58);
  puVar5 = (undefined4 *)(iVar4 + 0x35d0);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  piVar2 = FUN_10007985(local_144,iVar4 + 0x35d0);
  for (iVar4 = 0x3b; local_8 = local_8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *local_8 = *piVar2;
    piVar2 = piVar2 + 1;
  }
  return;
}

