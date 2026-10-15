/*
 * FUN_1004b72c at 1004b72c
 * bool __fastcall FUN_1004b72c(undefined4 * param_1)
 * Address ranges: 1004b72c-1004b781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1004b72c(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  param_1[3] = 0;
  uVar2 = FUN_1003b91c((void *)*param_1,param_1[1],&DAT_10054f6c,0,&DAT_10054f80,0x400,param_1,
                       param_1,param_1 + 2);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    piVar1 = (int *)param_1[2];
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    (**(code **)(*piVar1 + 0x20))(piVar1,0,&local_10,&local_8);
  }
  return bVar3;
}

