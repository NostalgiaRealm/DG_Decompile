/*
 * FUN_1001bc31 at 1001bc31
 * undefined __cdecl FUN_1001bc31(undefined4 * param_1)
 * Address ranges: 1001bc31-1001bc88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001bc31(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)param_1[8];
  cVar2 = FUN_1001274c((void *)*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                       *(char *)(param_1 + 5),param_1[6],*(char *)(param_1 + 7));
  *pcVar1 = cVar2;
  return;
}

