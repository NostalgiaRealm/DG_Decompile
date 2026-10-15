/*
 * FUN_10082ae8 at 10082ae8
 * undefined FUN_10082ae8(void)
 * Address ranges: 10082ae8-10082b67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082ae8(undefined8 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    pcVar1 = (char *)(*(int *)(param_3 + 0x10) + uVar3);
    cVar2 = pcVar1[0x10];
    if (((cVar2 != '\0') && (*pcVar1 != -1)) && (*(char *)(uVar3 + param_3 + 0xca) != -1)) {
      FUN_100eff00(param_2,uVar3,cVar2);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  return;
}

