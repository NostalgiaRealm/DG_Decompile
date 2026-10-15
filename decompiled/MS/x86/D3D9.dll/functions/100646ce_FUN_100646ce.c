/*
 * FUN_100646ce at 100646ce
 * undefined __stdcall FUN_100646ce(int * param_1, int param_2)
 * Address ranges: 100646ce-10064747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100646ce(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_100c4456(param_1);
  }
  uVar3 = 0;
  if (*(int *)(param_2 + 0x60) != 0) {
    do {
      FUN_100c4468(param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x60));
  }
  if (1 < *(uint *)(param_2 + 0x528)) {
    if (*(char *)(param_2 + 0x52d) == '\0') {
      iVar1 = 6;
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0x520) * 0x60 + 0x4d4 + param_2);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x520) * 6;
      puVar2 = (undefined4 *)(param_2 + 0x534);
    }
    FUN_100c44b0(param_1,puVar2,iVar1);
  }
  return;
}

