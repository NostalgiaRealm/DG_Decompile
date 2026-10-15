/*
 * FUN_1003e1e0 at 1003e1e0
 * undefined FUN_1003e1e0(void)
 * Address ranges: 1003e1e0-1003e277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e1e0(undefined4 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar2 = *(char *)(param_1 + 10);
  puVar1 = (undefined1 *)param_1[0xb];
  uVar3 = FUN_1002d510(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                       param_1[7],param_1[8]);
  if (cVar2 == '\0') {
    *puVar1 = uVar3;
  }
  return;
}

