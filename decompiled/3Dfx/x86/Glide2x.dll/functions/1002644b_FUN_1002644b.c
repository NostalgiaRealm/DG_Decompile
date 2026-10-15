/*
 * FUN_1002644b at 1002644b
 * undefined __cdecl FUN_1002644b(undefined4 * param_1)
 * Address ranges: 1002644b-100264a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1002644b(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)param_1[8];
  cVar2 = FUN_1001cd68((void *)*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                       *(char *)(param_1 + 5),param_1[6],*(char *)(param_1 + 7));
  *pcVar1 = cVar2;
  return;
}

