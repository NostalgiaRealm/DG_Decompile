/*
 * FUN_100267d5 at 100267d5
 * undefined __cdecl FUN_100267d5(undefined4 * param_1)
 * Address ranges: 100267d5-1002682c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100267d5(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)param_1[8];
  cVar2 = FUN_1001d0f4((void *)*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                       *(char *)(param_1 + 5),param_1[6],*(char *)(param_1 + 7));
  *pcVar1 = cVar2;
  return;
}

