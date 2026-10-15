/*
 * FUN_10026b57 at 10026b57
 * undefined __stdcall FUN_10026b57(undefined4 * param_1)
 * Address ranges: 10026b57-10026be0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026b57(undefined4 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  cVar1 = *(char *)(param_1 + 10);
  local_8 = CONCAT31(local_8._1_3_,cVar1);
  puVar2 = (undefined1 *)param_1[0xb];
  uVar3 = FUN_1001d1f8((void *)*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                       param_1[6],param_1[7],(undefined4 *)param_1[8],*(char *)(param_1 + 9),local_8
                      );
  if (cVar1 == '\0') {
    *puVar2 = (char)uVar3;
  }
  return;
}

