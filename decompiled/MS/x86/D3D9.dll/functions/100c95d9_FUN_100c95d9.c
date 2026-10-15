/*
 * FUN_100c95d9 at 100c95d9
 * bool __fastcall FUN_100c95d9(undefined4 * param_1)
 * Address ranges: 100c95d9-100c962e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_100c95d9(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  param_1[3] = 0;
  uVar2 = FUN_100ba3ae((void *)*param_1,param_1[1],&DAT_100d9288,0,&DAT_100d92a0,0x400,0,param_1,
                       param_1 + 2);
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

