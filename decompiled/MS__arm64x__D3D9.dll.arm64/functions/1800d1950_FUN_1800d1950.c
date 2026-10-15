/*
 * FUN_1800d1950 at 1800d1950
 * undefined FUN_1800d1950(void)
 * Address ranges: 1800d1950-1800d19e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800d1950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 local_40 [16];
  
  local_40[0] = 0;
  iVar2 = FUN_180103688(param_1,s__d_x__d__c_18023a090,param_2,param_3,local_40);
  if (iVar2 == 2) {
    bVar1 = true;
  }
  else {
    *param_5 = 1;
    iVar2 = FUN_180103688(param_1,s__d_x__d____d__c_18023a0a8,param_2,param_3,param_4,local_40);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}

