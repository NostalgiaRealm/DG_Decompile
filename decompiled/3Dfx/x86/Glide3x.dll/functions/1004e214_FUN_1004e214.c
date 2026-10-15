/*
 * FUN_1004e214 at 1004e214
 * bool __fastcall FUN_1004e214(undefined4 * param_1)
 * Address ranges: 1004e214-1004e269
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1004e214(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  param_1[3] = 0;
  uVar2 = FUN_1003e401((void *)*param_1,param_1[1],&DAT_100581c4,0,&DAT_100581d8,0x400,param_1,
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

