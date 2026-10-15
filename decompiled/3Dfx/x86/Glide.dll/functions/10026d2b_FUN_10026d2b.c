/*
 * FUN_10026d2b at 10026d2b
 * undefined __cdecl FUN_10026d2b(undefined4 * param_1)
 * Address ranges: 10026d2b-10026d7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10026d2b(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)param_1[8];
  uVar2 = FUN_1001d318((void *)*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                       param_1[6],(undefined4 *)param_1[7]);
  *puVar1 = (char)uVar2;
  return;
}

