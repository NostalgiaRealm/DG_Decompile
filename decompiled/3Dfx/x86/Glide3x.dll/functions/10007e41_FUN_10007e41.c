/*
 * FUN_10007e41 at 10007e41
 * undefined __fastcall FUN_10007e41(int * param_1)
 * Address ranges: 10007e41-10007e8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10007e41(int *param_1)

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
  puVar1 = FUN_10007391(local_58);
  puVar5 = (undefined4 *)(iVar4 + 0x3250);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  piVar2 = FUN_100073db(local_144,iVar4 + 0x3250);
  for (iVar4 = 0x3b; local_8 = local_8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *local_8 = *piVar2;
    piVar2 = piVar2 + 1;
  }
  return;
}

