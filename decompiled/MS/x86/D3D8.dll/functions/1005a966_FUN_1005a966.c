/*
 * FUN_1005a966 at 1005a966
 * undefined __stdcall FUN_1005a966(int param_1, undefined4 param_2, int * param_3)
 * Address ranges: 1005a966-1005aa2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a966(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  int extraout_EDX;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_14;
  
  FUN_100ada8e((int *)(param_1 + 0xec),0,0x15c);
  FUN_1005a8ee(param_1);
  local_3c = 0;
  puVar4 = (undefined4 *)(extraout_EDX + 300);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_40 = 0xffffffff;
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  puVar4 = &local_40;
  puVar6 = (undefined4 *)(extraout_EDX + 0x3c0);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar5 = 0;
  uVar3 = 0;
  iVar2 = extraout_EDX;
  do {
    cVar1 = *(char *)(uVar5 + 0x10 + *(int *)(iVar2 + 0x10));
    uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar1);
    if ((cVar1 != '\0') && (*(char *)(uVar5 + *(int *)(iVar2 + 0x10)) != -1)) {
      FUN_1005a846(iVar2,param_3,uVar5,uVar3,0);
      uVar3 = extraout_ECX;
      iVar2 = param_1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  local_14 = local_14 & 0xffffff00;
  *(undefined4 *)(iVar2 + 0x21c) = 0;
  *(uint *)(iVar2 + 0x220) = local_14;
  FUN_1005a888(iVar2,0,-1);
  FUN_1005a819(param_1);
  return;
}

